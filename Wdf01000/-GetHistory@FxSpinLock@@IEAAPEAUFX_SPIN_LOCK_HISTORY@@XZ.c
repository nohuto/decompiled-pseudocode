/*
 * XREFs of ?GetHistory@FxSpinLock@@IEAAPEAUFX_SPIN_LOCK_HISTORY@@XZ @ 0x1C0050158
 * Callers:
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00500D4 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 * Callees:
 *     <none>
 */

FxSpinLock *__fastcall FxSpinLock::GetHistory(FxSpinLock *this)
{
  if ( this->m_ObjectSize == 128 )
    return 0LL;
  else
    return this + 1;
}
