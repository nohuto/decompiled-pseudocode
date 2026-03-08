/*
 * XREFs of ?GetNextRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAU_FILE_OBJECT@@PEAV1@PEAPEAV1@@Z @ 0x1C003AA58
 * Callers:
 *     ?FlushByFileObject@FxIoQueue@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0063DF0 (-FlushByFileObject@FxIoQueue@@QEAAXPEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0008C90 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C004262C (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 */

__int64 __fastcall FxRequest::GetNextRequest(
        FxIrpQueue *IrpQueue,
        _FILE_OBJECT *FileObject,
        __int64 TagRequest,
        FxRequest **ppOutRequest)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v7; // rbx
  __int64 result; // rax
  FxRequest *v9; // rbx
  _IO_CSQ_IRP_CONTEXT *pCsqContext; // [rsp+50h] [rbp+18h] BYREF

  v4 = TagRequest + 120;
  pCsqContext = 0LL;
  v5 = -TagRequest;
  v7 = v4 & -(__int64)(v5 != 0);
  if ( !v7 )
  {
    if ( !FxIrpQueue::RemoveNextIrpFromQueue(IrpQueue, FileObject, &pCsqContext) )
      return 2147483674LL;
    v7 = (__int64)pCsqContext;
    goto LABEL_6;
  }
  if ( FxIrpQueue::RemoveIrpFromQueueByContext(IrpQueue, (_IO_CSQ_IRP_CONTEXT *)(v4 & -(__int64)(v5 != 0))) )
  {
LABEL_6:
    *(_QWORD *)(v7 + 104) = 0LL;
    v9 = (FxRequest *)(v7 - 120);
    v9->Release(v9, (void *)1969583441, 2102, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    result = 0LL;
    *ppOutRequest = v9;
    return result;
  }
  return 3221226021LL;
}
