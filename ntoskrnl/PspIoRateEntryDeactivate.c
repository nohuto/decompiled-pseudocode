/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1407552BC
 * Callers:
 *     PspJobIoRateControlDisable @ 0x1406F6E38 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x140753428 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409AFB14 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopDiskIoAttributionForContext @ 0x1402C4224 (IoStopDiskIoAttributionForContext.c)
 *     IoStopIoRateControl @ 0x1402C454C (IoStopIoRateControl.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
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
