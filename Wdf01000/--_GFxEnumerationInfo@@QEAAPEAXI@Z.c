/*
 * XREFs of ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C007111C
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0070ED0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C004F69C (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxEnumerationInfo *__fastcall FxEnumerationInfo::`scalar deleting destructor'(FxEnumerationInfo *this)
{
  FxTransactionedList::~FxTransactionedList(&this->m_ChildListList);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
