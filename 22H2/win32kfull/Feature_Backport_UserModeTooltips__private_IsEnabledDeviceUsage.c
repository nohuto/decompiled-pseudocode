/*
 * XREFs of Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     _SetDoubleClickTime @ 0x1C001C0AC (_SetDoubleClickTime.c)
 *     PatchThreadWindows @ 0x1C00211F0 (PatchThreadWindows.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0021F40 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B6B88 (xxxCancelMouseMoveTracking.c)
 *     xxxSetWindowLong @ 0x1C00C9D14 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00CA358 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013D59C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C022CF04 (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     Feature_Backport_UserModeTooltips__private_IsEnabledFallback @ 0x1C0139CD8 (Feature_Backport_UserModeTooltips__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_UserModeTooltips__private_featureState & 0x10) != 0 )
    return Feature_Backport_UserModeTooltips__private_featureState & 1;
  else
    return Feature_Backport_UserModeTooltips__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_UserModeTooltips__private_featureState,
             3LL);
}
