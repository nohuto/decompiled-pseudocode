/*
 * XREFs of PspIoRateEntryInitialize @ 0x140681FE4
 * Callers:
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409B07D4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
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
