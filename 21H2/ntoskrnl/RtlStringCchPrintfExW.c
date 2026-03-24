/*
 * XREFs of RtlStringCchPrintfExW @ 0x140265B34
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140392C2C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140392D5C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     _PnpGetGenericStoreProperty @ 0x1406381DC (_PnpGetGenericStoreProperty.c)
 *     _PnpStringFromGuid @ 0x140638420 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x140642C40 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140644CEC (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140644FE0 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x1406454C4 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406A76B4 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406A784C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406AA46C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406B1CC0 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1406B9EF4 (_CmGetDeviceLogConfKeyPath.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406C4764 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PiFindDevInstMatch @ 0x14073FE24 (PiFindDevInstMatch.c)
 *     PiProcessDriverInstance @ 0x140740070 (PiProcessDriverInstance.c)
 *     _PnpSetPropertyWorker @ 0x1407467E0 (_PnpSetPropertyWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     _PnpDeletePropertyWorker @ 0x14076CF9C (_PnpDeletePropertyWorker.c)
 *     _CmGetDeviceControlKeyPath @ 0x1407717A4 (_CmGetDeviceControlKeyPath.c)
 *     PiRearrangeDeviceInstances @ 0x140781044 (PiRearrangeDeviceInstances.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4268 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     _CmBuildDevicePanelId @ 0x1407D2B34 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089B4D0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14089B5CC (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B0590 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B23EC (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x140910E98 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1409785E0 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140979244 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140265C40 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1403CFBFC (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14050C398 (StringExHandleOtherFlagsW.c)
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
