/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C00757C4
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA58 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001D1EC (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
