/*
 * XREFs of ?ReleaseLock@FxSpinLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C004FB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxSpinLockTransactionedList::ReleaseLock(
        FxSpinLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        KIRQL Irql)
{
  KeReleaseSpinLock(&this->m_ListLock.m_Lock, Irql);
}
