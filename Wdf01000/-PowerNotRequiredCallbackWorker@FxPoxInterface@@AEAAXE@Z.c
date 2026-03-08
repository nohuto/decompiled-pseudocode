/*
 * XREFs of ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C00101C8
 * Callers:
 *     ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C00102D0 (-PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0083EE0 (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 * Callees:
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0010136 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008485C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 0;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxDoesNotRequirePower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxDoesNotRequirePower);
}
