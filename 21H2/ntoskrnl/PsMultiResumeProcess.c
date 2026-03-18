/*
 * XREFs of PsMultiResumeProcess @ 0x140259668
 * Callers:
 *     PsResumeProcess @ 0x1406E5510 (PsResumeProcess.c)
 *     NtResumeProcess @ 0x1409B2DD0 (NtResumeProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeResumeThread @ 0x1402EEAA8 (KeResumeThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsMultiResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 NextProcessThread; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

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
      if ( (*(_DWORD *)(NextProcessThread + 116) & 0x200000) == 0 )
        KeResumeThread(NextProcessThread, 1LL);
      NextProcessThread = PsGetNextProcessThread(a1, v6);
    }
    ExReleaseRundownProtection(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe(CurrentThread);
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v5, CurrentThread, a1, 1LL);
  return v5;
}
