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
