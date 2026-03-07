void __fastcall FxIoQueue::_IrpCancelForDriver(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 Irql)
{
  FxRequest *v4; // rbx
  FxIoQueue *p_Blink; // rsi
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8

  v4 = (FxRequest *)&CsqContext[-5];
  p_Blink = (FxIoQueue *)&IrpQueue[-6].m_Queue.Blink;
  HIBYTE(CsqContext[3].Csq) = 1;
  FxObject::AddRef(
    (FxObject *)&IrpQueue[-6].m_Queue.Blink,
    Irp,
    4677,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxNonPagedObject::Unlock(p_Blink, Irql, v8);
  FxIoQueue::CancelForDriver(p_Blink, v4, v9);
  p_Blink->Release(p_Blink, Irp, 4688, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
