void __fastcall FxWaitLockTransactionedList::AcquireLock(
        FxWaitLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 *Irql)
{
  FxWaitLockInternal::AcquireLock(&this->m_StateChangeListLock, FxDriverGlobals, 0LL);
}
