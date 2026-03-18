/*
 * XREFs of ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C0015808
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00021D0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001564C (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0015784 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075AB4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxIoQueue::DispatchInternalEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, PreviousIrql, a3);
  else
    FxIoQueue::DispatchEvents(this, PreviousIrql, 0LL, a4);
}
