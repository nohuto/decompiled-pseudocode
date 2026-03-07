__int64 __fastcall FxObject::AddChildObjectInternal(FxObject *this, FxObject *ChildObject)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // bp
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v6 = v5;
  if ( this->m_ObjectState == 1 )
  {
    Blink = this->m_ChildListHead.Blink;
    p_m_ChildEntry = &ChildObject->m_ChildEntry;
    if ( Blink->Flink != &this->m_ChildListHead )
      __fastfail(3u);
    p_m_ChildEntry->Flink = &this->m_ChildListHead;
    ChildObject->m_ChildEntry.Blink = Blink;
    Blink->Flink = p_m_ChildEntry;
    this->m_ChildListHead.Blink = p_m_ChildEntry;
    if ( !ChildObject->m_DeviceBase )
      ChildObject->m_DeviceBase = this->m_DeviceBase;
    KeReleaseSpinLock(p_m_Lock, v5);
    return 0LL;
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(p_m_Lock, v6);
    return 3221225558LL;
  }
}
