/*
 * XREFs of ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0022280
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0021D40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0022250 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C002834C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispConfigTypes::AllowInAnySession(int a1)
{
  if ( a1 > 100 )
    return 0;
  if ( a1 == 100 )
    return 1;
  if ( a1 <= -10 )
    return a1 == -10 || a1 == -21 || a1 == -25 || a1 == -20 || a1 == -13 || a1 == -24 || a1 == -22 || a1 == -11;
  if ( a1 == -2 || a1 == -7 || a1 == 2 || a1 == -8 || a1 == 4 || a1 == 3 )
    return 1;
  return a1 == 6;
}
