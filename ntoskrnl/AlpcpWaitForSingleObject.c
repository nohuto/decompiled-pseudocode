/*
 * XREFs of AlpcpWaitForSingleObject @ 0x1402E0F40
 * Callers:
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14076BBC4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407CFC50 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x14097751C (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebx

  KeLeaveCriticalRegion();
  v9 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v11;
}
