/*
 * XREFs of PsLookupThreadByThreadId @ 0x1407A7D90
 * Callers:
 *     PsOpenThread @ 0x1406634A0 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x140663880 (PsLookupProcessThreadByCid.c)
 *     NtAlertThreadByThreadId @ 0x1407A7D20 (NtAlertThreadByThreadId.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140808A98 (PfpServiceMainThreadBoostPrep.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  struct _KTHREAD *v4; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rdi
  __int64 CurrentServerSilo; // rax
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v4 = (struct _KTHREAD *)PspReferenceCidTableEntry(ThreadId, Thread);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( IoThreadToProcess(v4) == PsIdleProcess )
      goto LABEL_9;
    if ( (*(_DWORD *)(&v6[1].SwapListEntry + 1) & 2) == 0 )
    {
      _InterlockedOr(v10, 0);
      if ( ((__int64)v6[1].WaitBlockList & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)&v6[1].WaitBlockList);
      if ( (*(_DWORD *)(&v6[1].SwapListEntry + 1) & 2) == 0 )
        goto LABEL_9;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(v6->Process, CurrentServerSilo) )
    {
      *v3 = v6;
    }
    else
    {
LABEL_9:
      v5 = -1073741813;
      ObfDereferenceObject(v6);
    }
  }
  else
  {
    v5 = -1073741813;
  }
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
