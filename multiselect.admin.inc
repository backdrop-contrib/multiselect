<?php

/**
 * @file
 * Admin page callbacks.
 */

/**
 * Admin settings form.
 */
function multiselect_settings() {
  $form = array();

  $form['#config'] = 'multiselect.settings';
  
  $form['multiselect_widths'] = array(
    '#type' => 'number',
    '#title' => t('Width of multiselect boxes'),
    '#description' => t('By default, the boxes are each 250px wide.'),
    '#default_value' => config_get('multiselect.settings', 'multiselect_widths'),
    '#min' => 10,
    '#max' => 9999,
    '#field_suffix' => 'px',
    '#required' => TRUE
  );

  return system_settings_form($form);
}
