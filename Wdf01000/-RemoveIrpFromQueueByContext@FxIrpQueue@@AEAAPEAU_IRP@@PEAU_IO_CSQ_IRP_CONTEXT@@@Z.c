/*
 * XREFs of ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C004262C
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C00036D0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAU_FILE_OBJECT@@PEAV1@PEAPEAV1@@Z @ 0x1C003AA58 (-GetNextRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAU_FILE_OBJECT@@PEAV1@PEAPEAV1@@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C003AD98 (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0008D44 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00BACB4 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

_IRP *__fastcall FxIrpQueue::RemoveIrpFromQueueByContext(FxIrpQueue *this, _IO_CSQ_IRP_CONTEXT *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _IRP *v5; // r9
  _IRP *result; // rax
  FxIrp fxIrp; // [rsp+38h] [rbp+10h] BYREF

  if ( !Context->Irp )
    return 0LL;
  m_Globals = this->m_LockObject->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(this, m_Globals, Context);
  fxIrp.m_Irp = Context->Irp;
  if ( !_InterlockedExchange64((volatile __int64 *)&fxIrp.m_Irp->CancelRoutine, 0LL) )
    return 0LL;
  FxIrpQueue::RemoveIrpFromListEntry(this, &fxIrp);
  Context->Irp = 0LL;
  result = v5;
  v5->Tail.Overlay.DriverContext[3] = 0LL;
  return result;
}
