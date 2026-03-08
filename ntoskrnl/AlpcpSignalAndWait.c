/*
 * XREFs of AlpcpSignalAndWait @ 0x14033E350
 * Callers:
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14076BBC4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407CFC50 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x14097751C (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout,
        unsigned __int8 a6)
{
  int v6; // ebx
  void *v8; // rbp
  unsigned int v11; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v13; // ebx
  void *v14; // rcx

  v6 = *(_DWORD *)(a1 + 48);
  v8 = a2;
  LOBYTE(a2) = 1;
  AlpcpSignal(a1, a2, a6);
  KeLeaveCriticalRegion();
  v11 = KeWaitForSingleObject(v8, a3, a4, (v6 & 0x200000) != 0, Timeout);
  CurrentThread = KeGetCurrentThread();
  v13 = v11;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v11);
  v14 = *(void **)(a1 + 32);
  if ( v14 )
    ObfDereferenceObject(v14);
  return v13;
}
