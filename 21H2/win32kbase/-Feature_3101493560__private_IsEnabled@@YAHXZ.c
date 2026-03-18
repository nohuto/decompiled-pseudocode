/*
 * XREFs of ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0
 * Callers:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00D8B50 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00D8B9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00DA414 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00DA9BC (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DAF28 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DB828 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C01783E0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0178460 (EngUnlockDriverObj.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00AC31C (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_3101493560__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_3101493560__private_featureState,
                                (__int64)&Feature_3101493560__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_3101493560__private_reporting,
    52324720LL,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_GdiTelemetry_37785925_logged_traits,
    v1,
    3);
  return v1;
}
