void __fastcall FxIrpQueue::_WdmCancelRoutineInternal(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  KIRQL CancelIrql; // cl
  unsigned __int8 v4; // r8
  FxIrpQueue *v5; // rdi
  FxIrpQueue *_a2; // rbx
  unsigned __int8 v7; // r8
  __int64 v8; // r9
  void (__fastcall *m_CancelCallback)(FxIrpQueue *, _IRP *, _IO_CSQ_IRP_CONTEXT *, unsigned __int8); // rax
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF
  FxIrp v11; // [rsp+60h] [rbp+18h] BYREF

  CancelIrql = Irp->CancelIrql;
  irql = 0;
  v11.m_Irp = Irp;
  IoReleaseCancelSpinLock(CancelIrql);
  v5 = (FxIrpQueue *)Irp->Tail.Overlay.DriverContext[3];
  if ( LODWORD(v5->m_Queue.Flink) == 1 )
    _a2 = (FxIrpQueue *)v5->m_LockObject;
  else
    _a2 = (FxIrpQueue *)Irp->Tail.Overlay.DriverContext[3];
  FxNonPagedObject::Lock(_a2->m_LockObject, &irql, v4);
  FxIrpQueue::RemoveIrpFromListEntry(_a2, &v11);
  if ( v5 != _a2 )
  {
    v5->m_Queue.Blink = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
  }
  m_CancelCallback = _a2->m_CancelCallback;
  if ( m_CancelCallback )
  {
    LOBYTE(v8) = irql;
    m_CancelCallback(_a2, Irp, (_IO_CSQ_IRP_CONTEXT *)v5, v8);
  }
  else
  {
    FxNonPagedObject::Unlock(_a2->m_LockObject, irql, v7);
    Irp->IoStatus.Status = -1073741536;
    Irp->IoStatus.Information = 0LL;
    WPP_IFR_SF_qq(_a2->m_LockObject->m_Globals, 2u, 0x12u, 0xBu, WPP_FxIrpQueue_cpp_Traceguids, Irp, _a2);
    FxVerifierDbgBreakPoint(_a2->m_LockObject->m_Globals);
    IofCompleteRequest(Irp, 0);
  }
}
