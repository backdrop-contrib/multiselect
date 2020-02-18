Multiselect
========
The Multiselect module defines a field type and Form API multiple selection field widget, to allow easier multi-selection for users.

Multiselect was by Mark W. Jarrell (attheshow) at Fleet Thought.


INSTALLATION
------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules

- you will then have a new option when adding a field of type text

- you can configure the width of the widget at admin/config/content/multiselect


Details
-------
This module provides a Form API widget for editing fields that allows users to select from a list of options in a left box and have them visually moved into the right box when options are chosen.

Method 1: Using Fields on any entity
When creating a new content field, select "Multiselect" as your widget type. You can use Multiselect on fields of type "list", "list_text", "list_number", "node_reference", "taxonomy_term_reference", and "user_reference".

Method 2: Coding Your Own Module
If you're developing a custom module and wish to use the Multiselect widget in place of a traditional "select" widget, you may use the Backdrop Form API. Included with the module is an example module called "multiselect_fapi_example" that creates a simple form on a page that stores the selected options in the backdrop "variables" table. The page is made available at the path: /multiselect_fapi_example.


License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

Current Maintainers
-------------------

This module is currently maintained for Backdrop by Ericfg .

Credits
-------

Ported to Backdrop by Eric Goldhagen (https://github.com/ericfg/)

This module was originally written for Drupal (https://drupal.org/project/multiselect). Drupal maintainers are: [Mark W. Jarrell (attheshow)](https://www.drupal.org/u/attheshow), [Adam Bergstein (nerdstein)](https://www.drupal.org/u/nerdstein), [id.medion](https://www.drupal.org/u/id.medion), [Alex Weber (alexweber)](https://www.drupal.org/u/alexweber).

