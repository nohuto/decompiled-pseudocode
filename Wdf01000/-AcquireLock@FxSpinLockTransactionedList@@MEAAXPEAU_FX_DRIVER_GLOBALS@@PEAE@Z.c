void __fastcall FxSpinLockTransactionedList::AcquireLock(
        FxSpinLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 *Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock.m_Lock);
}
