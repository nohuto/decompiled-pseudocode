/*
 * XREFs of RtlStringCchPrintfW @ 0x14022A92C
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411118 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x140411250 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x1405D5C30 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140673F30 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IoWMIOpenBlock @ 0x1406C6AD0 (IoWMIOpenBlock.c)
 *     AslpFileQueryVersionString @ 0x1406D4614 (AslpFileQueryVersionString.c)
 *     EtwpPsProvTraceProcess @ 0x1407528E0 (EtwpPsProvTraceProcess.c)
 *     IoCreateDevice @ 0x14076B4E0 (IoCreateDevice.c)
 *     RtlpInitNlsSectionName @ 0x1407A278C (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1407A5798 (RtlpInitNlsFileName.c)
 *     MiSessionObjectCreate @ 0x1407AA29C (MiSessionObjectCreate.c)
 *     IopBootLog @ 0x1407E3A4C (IopBootLog.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F51D0 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x140813CBC (PiDrvDbRegisterNode.c)
 *     AslGuidToString @ 0x14084F464 (AslGuidToString.c)
 *     _SysCtxOpenControlSet @ 0x140856138 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14086539C (PiDrvDbRegisterNodeCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     IopCreateArcName @ 0x14086FCF8 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087C0D0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960200 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140961490 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140962510 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x14096C7D8 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409D1DBC (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1409D2F7C (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1409D401C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1409D6524 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x140A0222C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4F98C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140A53CC8 (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140B3D164 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140B70E7C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D8350 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  NTSTATUS v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      pszDest[v4] = 0;
  }
  return v5;
}
