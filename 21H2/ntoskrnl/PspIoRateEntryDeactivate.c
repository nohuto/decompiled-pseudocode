/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1406D4EFC
 * Callers:
 *     PspJobIoRateControlDisable @ 0x140678A28 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControl @ 0x1406D4808 (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1406D4DF0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409B07D4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopDiskIoAttributionForContext @ 0x14024F74C (IoStopDiskIoAttributionForContext.c)
 *     IoStopIoRateControl @ 0x14024FB60 (IoStopIoRateControl.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
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
