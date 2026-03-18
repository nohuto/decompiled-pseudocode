/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1409971BC
 * Callers:
 *     PdcPoResiliencyClient @ 0x140996CE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140398DF0 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PpmQueryTime @ 0x1403CF338 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1405C7E9C (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1405CADAC (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1405CC220 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1405CCECC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1405CDBB4 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1405D6B94 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1405D6C08 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1405DBE28 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x14098BD1C (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140996854 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1409969C4 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock(a1);
  PopPdcIdleResiliency = v2;
  v3 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v3);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_140C541A8, &qword_140C541B0);
  PpmQueryTime();
}
