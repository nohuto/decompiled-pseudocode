unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this)
{
  char v2; // si
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxTransactionedEntry *v4; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v8; // rdi
  FxTransactionedEntry *v9; // rax
  __int64 v10; // r8
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v12; // rdx
  void (__fastcall *v13)(unsigned __int64); // rax

  v2 = 1;
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v4 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v4);
      v4 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( (int)FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v2 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
    if ( !v2 )
      return 0;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v8);
      v8 = v9;
      if ( !v9 )
        break;
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v9->m_TransactionedObject);
      v13 = *(void (__fastcall **)(unsigned __int64))(v12 + 192);
      if ( v13 )
        v13(ObjectHandleUnchecked);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v10 + 40), this->m_Globals);
  }
  return 1;
}
