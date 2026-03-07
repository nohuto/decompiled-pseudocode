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
