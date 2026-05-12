/*
 * XREFs of RaUnitIsSMRDisabled @ 0x1C0019DF0
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001B410 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001B6A8 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0073704 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C007376C (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  __int64 result; // rax

  if ( (**(_BYTE **)(a1 + 104) & 0x1F) != 0x14 )
    return 0LL;
  result = 1LL;
  if ( IsSMREnabled )
  {
    if ( *(int *)(*(_QWORD *)(a1 + 24) + 4808LL) <= 1 && (*(_BYTE *)(a1 + 451) & 1) == 0 )
      return 0LL;
  }
  return result;
}
