/*
 * XREFs of RtlStringCchPrintfW @ 0x14027F140
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6500 (DrvDbGetConfigurationSubKeyCallback.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     LocalpGetStringForCondition @ 0x140672DF8 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x140673220 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14067326C (GetPrintableOperandValue.c)
 *     RtlpInitNlsSectionName @ 0x1406B9CB0 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406B9D18 (RtlpInitNlsFileName.c)
 *     SepValidateReferencedCachedHandles @ 0x1407182A0 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDevice @ 0x14071B4E0 (IoCreateDevice.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A788 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 *     IoWMIOpenBlock @ 0x14075AC90 (IoWMIOpenBlock.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     IopBootLog @ 0x140771A20 (IopBootLog.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     MiSessionObjectCreate @ 0x140786484 (MiSessionObjectCreate.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNode @ 0x1407A3878 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x1407A4B24 (_SysCtxOpenControlSet.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     AslpFileQueryVersionString @ 0x1407B2E5C (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x1407C1FD8 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D4850 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8110 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A9380 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408AA440 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B23EC (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140906650 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140914568 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409259CC (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140958AB0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14096466C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140967730 (AslGuidToString_UStr.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x140A61CE8 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140A700D8 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D1070 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
