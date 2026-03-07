void __fastcall FxSpinLockTransactionedList::ReleaseLock(
        FxSpinLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        KIRQL Irql)
{
  KeReleaseSpinLock(&this->m_ListLock.m_Lock, Irql);
}
