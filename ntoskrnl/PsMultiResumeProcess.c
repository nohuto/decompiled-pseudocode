/*
 * XREFs of PsMultiResumeProcess @ 0x1402FF188
 * Callers:
 *     PsResumeProcess @ 0x1407978E0 (PsResumeProcess.c)
 *     NtResumeProcess @ 0x1409B2FE0 (NtResumeProcess.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeResumeThread @ 0x140354130 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x1406A8E30 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E5EB4 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsMultiResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 NextProcessThread; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) == 1 )
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
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    v5 = -1073741558;
  }
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v5, CurrentThread, a1, 1LL);
  return v5;
}
