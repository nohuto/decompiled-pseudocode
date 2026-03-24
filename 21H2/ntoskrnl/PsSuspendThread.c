/*
 * XREFs of PsSuspendThread @ 0x1406BBD90
 * Callers:
 *     NtSuspendThread @ 0x1406BBCC0 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884E94 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140886810 (DbgkQueueUserExceptionReport.c)
 *     PsSuspendProcess @ 0x14090C820 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeSuspendThread @ 0x14027A260 (KeSuspendThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BC14 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1272);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1272)) )
  {
    if ( (*(_DWORD *)(a1 + 1296) & 1) != 0 )
    {
      v9 = -1073741749;
    }
    else
    {
      v11 = KeSuspendThread(a1, v6, v7, v8);
      v9 = 0;
    }
    ExReleaseRundownProtection_0(v5);
  }
  else
  {
    v9 = -1073741749;
  }
  if ( a2 )
  {
    *a2 = v11;
    if ( !v11 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 2172LL) & 0x100000) != 0 )
    {
      LOBYTE(v8) = 1;
      EtwTiLogSuspendResumeThread(v9, CurrentThread, a1, v8);
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
