void __fastcall FxIoQueue::_IrpCancelForQueue(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 Irql)
{
  FxIoQueue *p_Blink; // rsi

  p_Blink = (FxIoQueue *)&IrpQueue[-5].m_Queue.Blink;
  FxObject::AddRef(
    (FxObject *)&IrpQueue[-5].m_Queue.Blink,
    Irp,
    4483,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxIoQueue::CancelForQueue(p_Blink, (FxRequest *)&CsqContext[-5], Irql);
  p_Blink->Release(p_Blink, Irp, 4495, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
