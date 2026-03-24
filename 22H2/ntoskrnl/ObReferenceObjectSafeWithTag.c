/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1402C9130
 * Callers:
 *     IoNotifyQuotaState @ 0x140201210 (IoNotifyQuotaState.c)
 *     MiSelectSessionAttachProcess @ 0x14020653C (MiSelectSessionAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x14026FFFC (MiViewMayContainPage.c)
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     PsGetNextPartitionUnsafe @ 0x140279388 (PsGetNextPartitionUnsafe.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402DB770 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14031EAB0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiCapturePfnVm @ 0x140367A50 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403793DC (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x1405221D0 (KiMonitorCacheErrata.c)
 *     PspEnforceLimitsProcessCallback @ 0x140617ED0 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406180A0 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406181BC (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140618450 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     PsGetNextProcessThread @ 0x140657980 (PsGetNextProcessThread.c)
 *     PopEtGetNextEnergyTracker @ 0x14068A3A8 (PopEtGetNextEnergyTracker.c)
 *     PspGetNextJobProcess @ 0x14068EDB0 (PspGetNextJobProcess.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspGetPreviousProcessThread @ 0x140707954 (PspGetPreviousProcessThread.c)
 *     ExpGetNextCallback @ 0x14076C6A0 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140908A10 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140909180 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14090E7B4 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
