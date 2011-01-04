This module will override the view "og_all" that comes with drupal commons 1.1

It puts a checkbox on the "group" content type (it says "Show private group on groups page.") that 
allows you to show private groups on the main groups page (yoursite.com/groups).

Install:
- You will need to enable here: admin/build/modules
- disable og_all in /admin/build/views

NOTE: Features tells you that "commons core" is not compatible with this module.  This is because 
this module has a view that overrides a commons core view (og_all).  Because of this, sometimes the 
og_all_stsclone view won't be created correctly and your "community" menu will disapear.

To fix this:
- disable this feature
- re-enable og_all view
- enable this feature in admin/build/modules
- disable og_all view
