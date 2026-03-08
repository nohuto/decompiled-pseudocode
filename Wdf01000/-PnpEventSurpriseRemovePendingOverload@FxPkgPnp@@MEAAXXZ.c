/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C006B600
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C0069470 (-PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0025424 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C004F900 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F928 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004FE14 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPkgPnp::PnpEventSurpriseRemovePendingOverload(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v3; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v5; // r8

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v3 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v3);
      v3 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::NotifyDeviceSurpriseRemove((FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v5 + 40), this->m_Globals);
  }
}
