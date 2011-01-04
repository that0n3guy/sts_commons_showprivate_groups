<?php

function sts_commons_showprivate_groups_views_data() {
  $data['og']['privatesubscribe'] = array(
    'title' => t('Private Group: Join link'),
    'help' => t('Displays a link for joining a private group when a user is not already a member.'),
    'field' => array(
      'handler' => 'sts_commons_showprivate_groups_handler_field_og_private_subscribe',
    ),
  );
  return $data;
}


/**
 * Implementation of hook_views_handlers().
 */
function sts_commons_showprivate_groups_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'sts_commons_showprivate_groups') .'/includes',
    ),
    'handlers' => array(
      'sts_commons_showprivate_groups_handler_field_og_private_subscribe' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}