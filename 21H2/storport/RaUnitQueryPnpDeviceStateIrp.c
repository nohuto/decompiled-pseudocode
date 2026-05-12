/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C0073704
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA58 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaUnitIsSMRDisabled @ 0x1C0019DF0 (RaUnitIsSMRDisabled.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  if ( a1[229] || a1[230] || a1[231] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (unsigned int)RaUnitIsSMRDisabled((__int64)a1) )
    *(_DWORD *)(v3 + 56) |= 2u;
  if ( (*(_BYTE *)(v2 + 450) & 0x20) != 0 )
    *(_DWORD *)(v3 + 56) |= 4u;
  return RaidCompleteRequestEx((PIRP)v3, 0, 0);
}
