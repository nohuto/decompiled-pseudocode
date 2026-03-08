/*
 * XREFs of ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0066E80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00636B4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 */

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
