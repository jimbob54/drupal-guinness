<?php

$map_array = array(
    'id' => 'example',
    'maptype' => 'Terrain',
    'width' => '600px',
    'height' => '600px',
    'latitude' => 39.3739522204,
    'longitude' => -81.5681648254,
    'zoom' => 4,
    'align' => 'left',
    'controltype' => 'Small',
    'mtc' => 'standard',

    'behavior' => array(
      'locpick' => FALSE,
      'nodrag' => FALSE,
      'nokeyboard' => TRUE,
      'overview' => FALSE,
      'scale' => TRUE,
    ),

    'markers' => array(
      array(
        'text' => 'First Marker',
        'longitude' => 39.3739522204,
        'latitude' => -81.5681648254,
        'markername' => 'lblue',
      ),
      array(
        'text' => 'Second Marker',
        'longitude' => 44.205835001,
        'latitude' => -70.3674316406,
        'markername' => 'orange',
      ),
    ),
  );

?>