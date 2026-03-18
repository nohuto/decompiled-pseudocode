/*
 * XREFs of PspThreadFromTicket @ 0x1407A87D0
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, PVOID *a2)
{
  PVOID *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 CurrentServerSilo; // rax
  int v7; // ebx
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 6;
  v4 = (struct _KTHREAD *)PspReferenceCidTableEntry((int)v11, a2);
  v5 = v4;
  if ( !v4 )
    goto LABEL_10;
  if ( IoThreadToProcess(v4) == PsIdleProcess )
    goto LABEL_9;
  if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 2) == 0 )
  {
    _InterlockedOr(v10, 0);
    if ( ((__int64)v5[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&v5[1].WaitBlockList);
    if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 2) == 0 )
      goto LABEL_9;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !PsIsProcessInSilo(v5->Process, CurrentServerSilo) )
  {
LABEL_9:
    ObfDereferenceObject(v5);
LABEL_10:
    v7 = -1073741813;
    goto LABEL_11;
  }
  *v2 = v5;
  v7 = 0;
LABEL_11:
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( *((_DWORD *)*v2 + 288) == HIDWORD(v11) )
    return 0LL;
  ObfDereferenceObject(*v2);
  return 3221226021LL;
}
