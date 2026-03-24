/*
 * XREFs of PspIoRateEntryInitialize @ 0x14071FC24
 * Callers:
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140909474 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402517A0 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
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
