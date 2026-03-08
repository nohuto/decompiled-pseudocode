/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x14099507C
 * Callers:
 *     PdcPoResiliencyClient @ 0x140994AF0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14038D868 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140582A50 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14058667C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x140587DC4 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x140588B84 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140589368 (PopFxResumeDeviceAccounting.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140595900 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1405973F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140597458 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059B504 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140980630 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140999738 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1409998A8 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock(a1);
  PopPdcIdleResiliency = v2;
  v4 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v4);
  PopCheckResiliencyScenarios();
  LOBYTE(v3) = v2;
  PopAccumulateNonActivatedCpuTime(v3, &qword_140CF78E8, &qword_140CF78F0);
  PpmQueryTime();
}
