/*
 * XREFs of ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C
 * Callers:
 *     imp_WdfWaitLockAcquire @ 0x1C0001440 (imp_WdfWaitLockAcquire.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00058A4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C0049AE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0049C90 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0049EF0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?AcquireLock@FxWaitLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@PEAE@Z @ 0x1C004F7F0 (-AcquireLock@FxWaitLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@PEAE@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C005C7E4 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C005D8C4 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C005DA70 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C005E680 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ @ 0x1C006A260 (-PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C006A2EC (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C006C7E0 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0070940 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C0071260 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C00723D0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0072CCC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0075088 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C007CEF4 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C007CF58 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C007D1B4 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C007E190 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C007E400 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?TryToAcquireLock@FxInterrupt@@QEAAEXZ @ 0x1C007F86C (-TryToAcquireLock@FxInterrupt@@QEAAEXZ.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0080720 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C008082C (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00809E0 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C0081AA0 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00823E0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0082790 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008485C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0084C50 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWaitLockInternal::AcquireLock(
        FxWaitLockInternal *this,
        _FX_DRIVER_GLOBALS *Timeout,
        _LARGE_INTEGER *FxDriverGlobals)
{
  unsigned int v5; // ebx
  _LARGE_INTEGER li; // [rsp+48h] [rbp+10h] BYREF

  li.QuadPart = 0LL;
  if ( FxDriverGlobals )
    li = *FxDriverGlobals;
  KeEnterCriticalRegion();
  v5 = KeWaitForSingleObject(
         this,
         Executive,
         0,
         0,
         (PLARGE_INTEGER)((unsigned __int64)&li & -(__int64)(FxDriverGlobals != 0LL)));
  if ( v5 == 258 )
    KeLeaveCriticalRegion();
  else
    this->m_OwningThread = KeGetCurrentThread();
  return v5;
}
