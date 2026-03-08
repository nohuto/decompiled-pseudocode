/*
 * XREFs of PspIoRateEntryInitialize @ 0x1406F80C8
 * Callers:
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409AFB14 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x140294280 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PspIoRateEntryInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)(a1 + 32);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExInitializePushLock((PEX_RUNDOWN_REF)(a1 + 32));
  ExWaitForRundownProtectionRelease(v1);
  ExRundownCompleted(v1);
  *(_QWORD *)(a1 + 16) = -1LL;
}
