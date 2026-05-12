/*
 * XREFs of RaUnitSucceedPnpIrp @ 0x1C0076080
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000B9E8 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitSucceedPnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, 0);
}
