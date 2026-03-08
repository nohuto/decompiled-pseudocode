/*
 * XREFs of ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C004FF48
 * Callers:
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C004FF84 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005C26C (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0070A6C (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00716EC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C00811C4 (--0FxEventQueue@@QEAA@E@Z.c)
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C00818AC (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::FxWaitLockInternal(FxWaitLockInternal *this)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_Event.m_DbgFlagIsInitialized = 1;
  this->m_OwningThread = 0LL;
}
