/*
 * XREFs of RtlStringCchPrintfExW @ 0x1402DFBC4
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D3288 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1405D33D8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PiFindDevInstMatch @ 0x14067A98C (PiFindDevInstMatch.c)
 *     PiProcessDriverInstance @ 0x14067ABD0 (PiProcessDriverInstance.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406991C8 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140699288 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406C74F8 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C7604 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406D1FF8 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1406D5070 (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x1406DB1B4 (_PnpDeletePropertyWorker.c)
 *     PiRearrangeDeviceInstances @ 0x1406E74D0 (PiRearrangeDeviceInstances.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14076D6D4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x140772790 (_PnpSetPropertyWorker.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     _PnpGetGenericStoreProperty @ 0x14077DF24 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x140780580 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140781814 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1407871C4 (_CmGetCommonClassRegKeyPath.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     DrvDbCreateDatabaseNode @ 0x1408274C4 (DrvDbCreateDatabaseNode.c)
 *     _CmGetDeviceControlKeyPath @ 0x140853430 (_CmGetDeviceControlKeyPath.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140940080 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14094017C (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x140957F9C (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x1409B6A58 (RtlFormatMessageEx.c)
 *     _CmBuildDevicePanelId @ 0x140A27CF4 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A28CA4 (_CmGetDevicePanelRegKeyPath.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1402DFCC8 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x14055F3B8 (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14055F3E4 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  wchar_t *v10; // r12
  size_t v11; // r14
  const wchar_t *v12; // r9
  NTSTATUS v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = &cchOriginalDestLength;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], 2 * v11, dwFlags);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return v9;
}
