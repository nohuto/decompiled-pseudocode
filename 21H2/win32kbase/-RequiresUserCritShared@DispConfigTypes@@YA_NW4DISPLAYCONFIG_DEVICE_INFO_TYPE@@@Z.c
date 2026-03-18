/*
 * XREFs of ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C00707F0
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070B6C (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 */

char __fastcall DispConfigTypes::RequiresUserCritShared(int a1)
{
  if ( a1 >= -21 && (a1 <= -20 || a1 == -2 || a1 == -11) )
    return 1;
  else
    return DispConfigTypes::AllowInAnySession() ^ 1;
}
