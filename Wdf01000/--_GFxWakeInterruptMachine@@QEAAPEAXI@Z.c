/*
 * XREFs of ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C007E730
 * Callers:
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C007EAD8 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C007ECA0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ??1FxPoxInterface@@QEAA@XZ @ 0x1C00839A8 (--1FxPoxInterface@@QEAA@XZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00839D0 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0040A18 (-Free@MxWorkItem@@QEAAXXZ.c)
 */

FxDevicePwrRequirementMachine *__fastcall FxWakeInterruptMachine::`scalar deleting destructor'(
        FxDevicePwrRequirementMachine *this)
{
  MxWorkItem::Free(&this->m_WorkItem);
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
