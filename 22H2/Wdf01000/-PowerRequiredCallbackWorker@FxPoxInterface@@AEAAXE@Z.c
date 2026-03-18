/*
 * XREFs of ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C000E4D4
 * Callers:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0010394 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C008D0C0 (-PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C000EC10 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008C9F8 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 1;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxRequiresPower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxRequiresPower);
}
