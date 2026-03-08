/*
 * XREFs of RtlStringCchPrintfW @ 0x140208BFC
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x14040BD88 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x14040BEC0 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x1405D3780 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1406718E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IoWMIOpenBlock @ 0x14069C410 (IoWMIOpenBlock.c)
 *     RtlpInitNlsSectionName @ 0x14069EBAC (RtlpInitNlsSectionName.c)
 *     AslpFileQueryVersionString @ 0x1406D48D0 (AslpFileQueryVersionString.c)
 *     IopBootLog @ 0x14072A928 (IopBootLog.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     MiSessionObjectCreate @ 0x140757A78 (MiSessionObjectCreate.c)
 *     RtlpInitNlsFileName @ 0x14077F74C (RtlpInitNlsFileName.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     AslGuidToString @ 0x14084C0B4 (AslGuidToString.c)
 *     _SysCtxOpenControlSet @ 0x140852308 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140860D8C (PiDrvDbRegisterNodeCallback.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140874D18 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14095E470 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14095F4F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1409697B8 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409CEF1C (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1409D00DC (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1409D117C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1409D3684 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4CCBC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140A50FF8 (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140B54B24 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140B6CE8C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D2E30 (_vsnwprintf.c)
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
