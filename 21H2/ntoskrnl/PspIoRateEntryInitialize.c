/*
 * XREFs of PspIoRateEntryInitialize @ 0x140720854
 * Callers:
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140909424 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExRundownCompleted @ 0x140251F40 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x140278EE0 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PspIoRateEntryInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)(a1 + 32);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 32));
  ExWaitForRundownProtectionRelease(v1);
  ExRundownCompleted(v1);
  *(_QWORD *)(a1 + 16) = -1LL;
}
