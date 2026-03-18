/*
 * XREFs of AlpcpWaitForSingleObject @ 0x14034D8C0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14073B9A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073E1F0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1407BE2A4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x14097A5C0 (AlpcpLogUnwait.c)
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
