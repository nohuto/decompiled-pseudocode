/*
 * XREFs of PsLookupThreadByThreadId @ 0x1406DBE00
 * Callers:
 *     PspThreadFromTicket @ 0x1406DBA1C (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadId @ 0x14075F5B0 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x14076A000 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x14076A3D0 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14097BCA8 (PfpServiceMainThreadBoostPrep.c)
 *     PopInitSystemSleeperThread @ 0x1409887A0 (PopInitSystemSleeperThread.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x1402484DC (PsIsProcessInSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rdi
  PETHREAD *v3; // rsi
  struct _KTHREAD *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 CurrentServerSilo; // rax
  NTSTATUS v7; // esi
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  LOBYTE(Thread) = 6;
  --CurrentThread->SpecialApcDisable;
  v4 = (struct _KTHREAD *)PspReferenceCidTableEntry(ThreadId, Thread);
  v5 = v4;
  if ( v4 )
  {
    if ( IoThreadToProcess(v4) == PsIdleProcess )
      goto LABEL_14;
    if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 2) == 0 )
    {
      _InterlockedOr(v10, 0);
      if ( ((__int64)v5[1].WaitBlockList & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)&v5[1].WaitBlockList);
      if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 2) == 0 )
        goto LABEL_14;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(v5->Process, CurrentServerSilo) )
    {
      *v3 = v5;
      v7 = 0;
    }
    else
    {
LABEL_14:
      v7 = -1073741813;
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    v7 = -1073741813;
  }
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v7;
}
