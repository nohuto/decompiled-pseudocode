/*
 * XREFs of ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C0071190
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0070ED0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxSelfManagedIoMachine *__fastcall FxSelfManagedIoMachine::`scalar deleting destructor'(FxSelfManagedIoMachine *this)
{
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
