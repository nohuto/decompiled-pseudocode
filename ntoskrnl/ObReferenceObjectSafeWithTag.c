/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14022BD30
 * Callers:
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 *     MiSelectSessionAttachProcess @ 0x14022A5A8 (MiSelectSessionAttachProcess.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140290C60 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiViewMayContainPage @ 0x1402A12A0 (MiViewMayContainPage.c)
 *     MiWakeZeroingThreads @ 0x1402A7E98 (MiWakeZeroingThreads.c)
 *     IoNotifyQuotaState @ 0x1402FD260 (IoNotifyQuotaState.c)
 *     PsGetNextPartitionUnsafe @ 0x140305364 (PsGetNextPartitionUnsafe.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14038CAF8 (HalpDmaFindAdapterByDeviceObject.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1404FD944 (HalpDmaFindAdapterByDeviceId.c)
 *     KiMonitorCacheErrata @ 0x140576EC0 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405A1FD0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     PsGetNextProcessThread @ 0x1406A8E30 (PsGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     PspGetNextJobProcess @ 0x1406F90E0 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406FB480 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406FB6B8 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406FB938 (PspGetNextChildJob.c)
 *     PopEtGetNextEnergyTracker @ 0x140703A54 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessEx @ 0x14076EEB0 (PsGetNextProcessEx.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PspGetPreviousProcessThread @ 0x1407DB974 (PspGetPreviousProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x14087C160 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409AEE48 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409AF770 (PspQueryProcessInterferenceCountCallback.c)
 *     PspGetNextSyscallProviderProcess @ 0x1409B1C64 (PspGetNextSyscallProviderProcess.c)
 *     PsGetPreviousProcess @ 0x1409B4C60 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
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
