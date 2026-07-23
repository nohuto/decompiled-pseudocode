/*
 * XREFs of PopWnfMobileHotspotCallback @ 0x140569110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x14061A450 (ExQueryWnfStateData.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E1CCC (PopPowerRequestNotifyMobileHotspotChanged.c)
 */

__int64 __fastcall PopWnfMobileHotspotCallback(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[8]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ExQueryWnfStateData(a1, v5, &v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 >= 8 )
    {
      v2 = v6 >> 1;
      LOBYTE(v2) = (v6 & 2) != 0;
      PopPowerRequestNotifyMobileHotspotChanged(v2);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
