/*
 * XREFs of Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C0037820 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C0037A80 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMReadInput @ 0x1C0039160 (RIMReadInput.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     RIMOpenDev @ 0x1C0089058 (RIMOpenDev.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00C74B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 *     ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C00C9CF0 (-OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnAsyncPnpWorkNotification @ 0x1C00CB170 (NtRIMOnAsyncPnpWorkNotification.c)
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 *     RIMAddToActiveDevices @ 0x1C01B31F4 (RIMAddToActiveDevices.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMRemoveFromActiveDevices @ 0x1C01B9190 (RIMRemoveFromActiveDevices.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01CFE1C (RIMDeviceNotifyAsyncWorkItem.c)
 *     rimProcessHidInput @ 0x1C01D2DF8 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01D517C (RIMProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_RIMUserCritOpt__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_RIMUserCritOpt__private_featureState;
  if ( (Feature_RIMUserCritOpt__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_RIMUserCritOpt__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_RIMUserCritOpt__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_RIMUserCritOpt__private_descriptor);
  }
}
