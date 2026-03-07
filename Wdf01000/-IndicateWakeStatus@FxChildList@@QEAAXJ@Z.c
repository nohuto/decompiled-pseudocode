void __fastcall FxChildList::IndicateWakeStatus(FxChildList *this, int WaitWakeStatus)
{
  unsigned __int64 *p_m_ListLock; // rsi
  _LIST_ENTRY *p_m_DescriptionListHead; // rdi
  KIRQL v5; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v7; // bp
  _LIST_ENTRY *v8; // rcx

  p_m_ListLock = &this->m_ListLock;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Flink = p_m_DescriptionListHead->Flink;
  v7 = v5;
  while ( Flink != p_m_DescriptionListHead )
  {
    if ( !BYTE2(Flink[5].Flink) )
    {
      v8 = Flink[4].Flink;
      if ( v8 )
        FxPkgPnp::PowerIndicateWaitWakeStatus((FxPkgPnp *)v8[40].Blink, WaitWakeStatus);
    }
    Flink = Flink->Flink;
  }
  KeReleaseSpinLock(p_m_ListLock, v7);
}
