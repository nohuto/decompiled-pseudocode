/*
 * XREFs of ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070B6C
 * Callers:
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C00707F0 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispConfigTypes::AllowInAnySession(int a1)
{
  if ( a1 > -7 )
    return a1 == -2 || a1 > 1 && (a1 <= 4 || a1 == 6 || a1 == 100);
  return a1 >= -8 || a1 >= -25 && (a1 <= -24 || a1 > -23 && (a1 <= -20 || a1 == -13 || a1 > -12 && a1 <= -10));
}
