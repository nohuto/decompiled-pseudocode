/*
 * XREFs of SeSecurityModelQueryInformation @ 0x1409C6B7C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405B67F4 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 */

__int64 __fastcall SeSecurityModelQueryInformation(_DWORD *a1, int a2)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // r8

  if ( a2 != 4 )
    return 3221225476LL;
  *a1 = 0;
  if ( SepIsDeviceOwnerProtectionDowngradeAllowed() )
    *v3 = 2;
  *v4 = 4;
  return 0LL;
}
