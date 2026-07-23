/*
 * XREFs of PsSuspendThread @ 0x14061AE10
 * Callers:
 *     NtSuspendThread @ 0x14061AD40 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884FF4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140886970 (DbgkQueueUserExceptionReport.c)
 *     PsSuspendProcess @ 0x14090C980 (PsSuspendProcess.c)
 * Callees:
 *     KeSuspendThread @ 0x140268200 (KeSuspendThread.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BDE4 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1272);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1272)) )
  {
    if ( (*(_DWORD *)(a1 + 1296) & 1) != 0 )
    {
      v9 = -1073741749;
    }
    else
    {
      v11 = KeSuspendThread(a1);
      v9 = 0;
    }
    ExReleaseRundownProtection(v5);
  }
  else
  {
    v9 = -1073741749;
  }
  if ( a2 )
  {
    *a2 = v11;
    if ( !v11 )
    {
      v6 = *(_QWORD *)(a1 + 544);
      if ( (*(_DWORD *)(v6 + 2172) & 0x100000) != 0 )
      {
        LOBYTE(v8) = 1;
        EtwTiLogSuspendResumeThread(v9, CurrentThread, a1, v8);
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  return v9;
}
