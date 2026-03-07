__int64 __fastcall FxPkgPnp::PnpEventRemoved(FxPkgPnp *This)
{
  FxTransactionedEntry *v2; // rdi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v5; // r8
  __int64 result; // rax

  v2 = 0LL;
  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, This->m_Globals);
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&This->m_EnumInfo->m_ChildListList, v2);
      v2 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::NotifyDeviceRemove(
        (FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink,
        &This->m_PendingChildCount);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v5 + 40), This->m_Globals);
  }
  result = 310LL;
  if ( _InterlockedExchangeAdd(&This->m_PendingChildCount, 0xFFFFFFFF) > 1 )
    return 293LL;
  return result;
}
