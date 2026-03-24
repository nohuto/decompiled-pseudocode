/*
 * XREFs of RtlStringCchPrintfExW @ 0x14032EBA4
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14039252C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14039265C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x14068A664 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x14068A7FC (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14068D41C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140694E80 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14069D484 (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x1406B0FBC (_PnpGetGenericStoreProperty.c)
 *     _PnpStringFromGuid @ 0x1406B1200 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1406BBA20 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406BDACC (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1406BDDC0 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x1406BE2A4 (_PnpOpenPropertiesKey.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F9D24 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PiFindDevInstMatch @ 0x14073C2C4 (PiFindDevInstMatch.c)
 *     PiProcessDriverInstance @ 0x14073C510 (PiProcessDriverInstance.c)
 *     _PnpSetPropertyWorker @ 0x140742C80 (_PnpSetPropertyWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14076BBCC (PipMakeGloballyUniqueId.c)
 *     _PnpDeletePropertyWorker @ 0x14076C76C (_PnpDeletePropertyWorker.c)
 *     _CmGetDeviceControlKeyPath @ 0x140771464 (_CmGetDeviceControlKeyPath.c)
 *     PiRearrangeDeviceInstances @ 0x140780F44 (PiRearrangeDeviceInstances.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4698 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     _CmBuildDevicePanelId @ 0x1407D2A54 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089B520 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14089B61C (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B05E0 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B243C (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x140910EE8 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140978630 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140979294 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x14032ECB0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1403CF4FC (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14050C2D8 (StringExHandleOtherFlagsW.c)
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
      v12 = (const wchar_t *)&cchOriginalDestLength;
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
