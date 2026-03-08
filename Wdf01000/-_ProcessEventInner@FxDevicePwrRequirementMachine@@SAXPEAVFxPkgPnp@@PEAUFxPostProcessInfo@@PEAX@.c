/*
 * XREFs of ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0084C50
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00849F0 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::_ProcessEventInner(
        FxPkgPnp *PkgPnp,
        _FX_DRIVER_GLOBALS *Info,
        void *WorkerContext)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rbx

  m_DevicePowerRequirementMachine = PkgPnp->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
  FxWaitLockInternal::AcquireLock(&m_DevicePowerRequirementMachine->m_StateMachineLock, Info, 0LL);
  FxDevicePwrRequirementMachine::ProcessEventInner(m_DevicePowerRequirementMachine, (FxPostProcessInfo *)Info);
  m_DevicePowerRequirementMachine->m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&m_DevicePowerRequirementMachine->m_StateMachineLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
