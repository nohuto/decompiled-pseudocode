/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1405D82B8
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x14067F400 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x140909424 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopIoRateControl @ 0x140200914 (IoStopIoRateControl.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x14028AB98 (IoStopDiskIoAttributionForContext.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (struct _EX_RUNDOWN_REF *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
