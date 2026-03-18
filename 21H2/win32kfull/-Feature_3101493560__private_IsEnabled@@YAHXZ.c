/*
 * XREFs of ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4
 * Callers:
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C00E8510 (GreSelectFont.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ @ 0x1C015D4C0 (--0-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015D5DC (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C015DF38 (--0-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C015EF94 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015F29C (--0-$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015FA04 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 *     GreDeleteServerMetaFile @ 0x1C02B6DA0 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B6FB0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015AE44 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_3101493560__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_3101493560__private_featureState,
                                (__int64)&Feature_3101493560__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_3101493560__private_reporting,
    0x31E6970u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_GdiTelemetry_37785925_logged_traits,
    v1,
    v3);
  return v1;
}
