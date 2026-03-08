/*
 * XREFs of ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0022250
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0021D40 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0022280 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 */

char __fastcall DispConfigTypes::RequiresUserCritShared(__int64 a1)
{
  if ( (_DWORD)a1 == -21 || (_DWORD)a1 == -2 || (_DWORD)a1 == -20 || (_DWORD)a1 == -11 )
    return 1;
  else
    return DispConfigTypes::AllowInAnySession(a1) ^ 1;
}
