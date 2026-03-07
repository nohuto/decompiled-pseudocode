unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        FxObjectState NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject *v7; // rbx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rsi
  unsigned __int16 m_ObjectFlags; // ax
  KIRQL v13; // r12
  unsigned __int8 v14; // al
  KIRQL v15; // di
  char *i; // rdi
  void (__fastcall *v17)(unsigned __int64); // rax

  v7 = this;
  if ( (this->m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
LABEL_20:
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(this, NewDeferedState);
    else
      FxObject::SetObjectStateLocked(this, NewDeferedState);
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
    return 0;
  }
  p_m_ChildListHead = &this->m_ChildListHead;
  Flink = this->m_ChildListHead.Flink;
  if ( Flink != p_m_ChildListHead )
  {
    while ( !OldIrql || ((__int64)Flink[-3].Flink & 0x10) == 0 )
    {
      Flink = Flink->Flink;
      if ( Flink == p_m_ChildListHead )
        goto LABEL_3;
    }
    this = v7;
    goto LABEL_20;
  }
LABEL_3:
  KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
  v10 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_4:
    if ( !_bittest16((const signed __int16 *)&v7->24, 0xBu) || v7->Dispose(v7) )
    {
      m_ObjectFlags = v7->m_ObjectFlags;
      if ( (m_ObjectFlags & 0x400) != 0 && (m_ObjectFlags & 8) != 0 )
      {
        if ( v7->m_ObjectSize )
        {
          for ( i = (char *)v7 + v7->m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
          {
            v17 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
            if ( v17 )
            {
              v17((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
              *((_QWORD *)i + 2) = 0LL;
            }
          }
        }
        v7->m_ObjectFlags &= ~0x400u;
      }
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v10[-1]);
      if ( WORD1(v10[-3].Flink) != 1 )
      {
        switch ( WORD1(v10[-3].Flink) )
        {
          case 5:
            v14 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v10[-5].Blink, v13, 0);
            goto LABEL_15;
          case 7:
            break;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v10[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)&v10[-1], v13);
            goto LABEL_16;
        }
      }
      v14 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v10[-5].Blink, v13, 0);
LABEL_15:
      if ( !v14 )
        break;
LABEL_16:
      v10 = v10->Flink;
      if ( v10 == p_m_ChildListHead )
        goto LABEL_4;
    }
    v15 = KeAcquireSpinLockRaiseToDpc(&v7->m_SpinLock.m_Lock);
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(v7, NewDeferedState);
    else
      FxObject::SetObjectStateLocked(v7, NewDeferedState);
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, v15);
    return 0;
  }
}
