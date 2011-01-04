<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _sts_commons_showprivate_groups_content_default_fields() {
  $fields = array();

  // Exported field: field_group_private_frontpage
  $fields[] = array(
    'field_name' => 'field_group_private_frontpage',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'no
yes|Show private group on groups page.',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'no',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Show private group on group frontpage?',
      'weight' => '2',
      'description' => 'Check to show this private group on the <a href="/group">main group page</a>.  <strong>This does nothing for public groups.</strong>
<br/>This also lets users request membership <strong>on private groups</strong> if you use "Moderated" below.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Show private group on group frontpage?'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _sts_commons_showprivate_groups_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _sts_commons_showprivate_groups_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '6',
    'author' => '10',
    'options' => '11',
    'comment_settings' => '8',
    'menu' => '7',
    'taxonomy' => '-3',
    'path' => '9',
    'og_description' => '-4',
    'og_selective' => '3',
    'og_register' => '-1',
    'og_directory' => '0',
    'og_private' => '1',
  );

  $export['content_extra_weights_group'] = $strongarm;
  return $export;
}
