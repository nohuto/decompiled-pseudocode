/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C000DE42
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0002EE8 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00049A0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C000DE6E (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C000DF38 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C003F8CC (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this)
{
  MxTimer::~MxTimer(&this->Timer);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
