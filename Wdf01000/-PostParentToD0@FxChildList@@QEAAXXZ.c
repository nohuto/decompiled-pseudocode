/*
 * XREFs of ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0025530
 * Callers:
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C007D5B4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

void __fastcall FxChildList::PostParentToD0(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rsi
  _LIST_ENTRY *p_m_DescriptionListHead; // rdi
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v5; // bp
  _LIST_ENTRY *v6; // rcx
  _LIST_ENTRY *Blink; // rcx

  p_m_ListLock = &this->m_ListLock;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Flink = p_m_DescriptionListHead->Flink;
  v5 = v3;
  while ( Flink != p_m_DescriptionListHead )
  {
    if ( !BYTE2(Flink[5].Flink) )
    {
      v6 = Flink[4].Flink;
      if ( v6 )
      {
        Blink = v6[40].Blink;
        if ( BYTE4(Blink[111].Flink) )
          FxPkgPnp::PowerProcessEvent((FxPkgPnp *)Blink, PowerParentToD0, 0);
      }
    }
    Flink = Flink->Flink;
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
}
