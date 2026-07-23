/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1405D82B8
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x14065CA70 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x140909474 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopIoRateControl @ 0x140200914 (IoStopIoRateControl.c)
 *     IoDiskIoAttributionDereference @ 0x1402E06F4 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402E0AD8 (IoStopDiskIoAttributionForContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
