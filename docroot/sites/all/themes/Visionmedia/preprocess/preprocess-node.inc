<?php
//function video_omega_preprocess_node(&$vars){
// ONly load the javascript for the player if Video Content
if($vars['node']->type == 'award_winning_video_content' && !$vars['is_front']){
$video_width = 35;
$video_height = 300;
$player_height = $video_height + 16;
$video_path = "visionfoundation.dev/sites/default/files/".$vars['node']->field_video['und'][0]['filename'];
$video_path_full = urlencode ($video_path);

$still_path_full = "http://visionfoundation.dev/sites/default/files/".$vars['node']->field_still['und'][0]['filename'];

// setup $vars
$vars['video_full_path'] = $video_path_full;
$vars['video']['width'] = $video_width;
$vars['video']['height'] = $video_height;
flowplayer_add('#video-player' ,array(
		'clip' => array(
		'autoPlay' => TRUE,
		'url' => $video_path_full,
                    'scaling' => 'fit',
),

));
$vars['Video_player'] = "<div id=\"video-player\" ></div>";
}
// for TabPage nodes
if($vars['node']->type == 'tabpage' && !$vars['is_front']){
$video_width = 35;
$video_height = 300;
$player_height = $video_height + 16;
$video_path = "http://visionfoundation.dev/sites/default/files/Video/".$vars['node']->field_article_video['und'][0]['filename'];
$video_path_full = ($video_path);

$still_path_full = "http://visionfoundation.dev/sites/default/files/Stills/".$vars['node']->field_article_still['und'][0]['filename'];

// setup $vars
$vars['video_full_path'] = $video_path_full;
$vars['video']['width'] = $video_width;
$vars['video']['height'] = $video_height;
flowplayer_add('#video-player' ,array(
		'clip' => array(
		'autoPlay' => TRUE,
		'url' => $video_path_full,
                    'scaling' => 'fit',
),

));
$vars['Video_player'] = "<div id=\"video-player\" ><img src='http://visionfoundation.dev/sites/default/files/Stills/play.png' onmouseover='this.style.opacity=1.0;' onmouseout='this.style.opacity=0.8;'class='FPArrow' /><img class='FPSplash' src='".$still_path_full."'/></div>";
}

?>