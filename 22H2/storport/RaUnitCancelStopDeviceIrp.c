/*
 * XREFs of RaUnitCancelStopDeviceIrp @ 0x1C007B180
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000B9E8 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C001AC1C (RaidUnitConvertToNormalUnit.c)
 */

__int64 __fastcall RaUnitCancelStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 1;
  RaidUnitConvertToNormalUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
