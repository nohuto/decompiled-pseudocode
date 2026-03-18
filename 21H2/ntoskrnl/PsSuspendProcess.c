/*
 * XREFs of PsSuspendProcess @ 0x1409B2EF0
 * Callers:
 *     PspFreezeProcessWorker @ 0x1409B1740 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x1409B2E50 (NtSuspendProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PsSuspendThread @ 0x1406E21F0 (PsSuspendThread.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1112)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x200000) == 0 )
        PsSuspendThread((__int64)NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread(a1, v6);
    }
    ExReleaseRundownProtection(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v5, CurrentThread, a1, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v5;
}
