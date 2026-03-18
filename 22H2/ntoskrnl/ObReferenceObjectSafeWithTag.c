/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1402C3620
 * Callers:
 *     MiCapturePfnVm @ 0x140215CFC (MiCapturePfnVm.c)
 *     MiWakeZeroingThreads @ 0x1402224F4 (MiWakeZeroingThreads.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     MiSelectSessionAttachProcess @ 0x1402C1EB8 (MiSelectSessionAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1402F0BD0 (MiViewMayContainPage.c)
 *     PsGetNextPartitionUnsafe @ 0x140310D10 (PsGetNextPartitionUnsafe.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140319A20 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoNotifyQuotaState @ 0x1403687A0 (IoNotifyQuotaState.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14038EFB8 (HalpDmaFindAdapterByDeviceObject.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1404FFA24 (HalpDmaFindAdapterByDeviceId.c)
 *     KiMonitorCacheErrata @ 0x1405793D0 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405A4480 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x140636550 (MiLocateSharedPageViews.c)
 *     PspGetNextJobProcess @ 0x1406A0D90 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406A3100 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406A3338 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406A35B8 (PspGetNextChildJob.c)
 *     PsGetNextProcessThread @ 0x140742FC0 (PsGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     PsGetNextProcess @ 0x1407446C0 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x14076D758 (PspGetPreviousProcessThread.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PopEtGetNextEnergyTracker @ 0x1407B1544 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessEx @ 0x1407C0AE0 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140880F90 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409B1E98 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409B27C0 (PspQueryProcessInterferenceCountCallback.c)
 *     PspGetNextSyscallProviderProcess @ 0x1409B4CB4 (PspGetNextSyscallProviderProcess.c)
 *     PsGetPreviousProcess @ 0x1409B7C90 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
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
