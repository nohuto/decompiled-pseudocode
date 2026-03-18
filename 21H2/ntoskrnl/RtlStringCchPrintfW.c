/*
 * XREFs of RtlStringCchPrintfW @ 0x1402E0198
 * Callers:
 *     CarLiveDumpCallBack @ 0x1406054D0 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14064F770 (DrvDbGetConfigurationSubKeyCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     RtlpInitNlsFileName @ 0x1406E9530 (RtlpInitNlsFileName.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407446E0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoWMIOpenBlock @ 0x140784550 (IoWMIOpenBlock.c)
 *     RtlpInitNlsSectionName @ 0x14078508C (RtlpInitNlsSectionName.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x140827DE0 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     AslpFileQueryVersionString @ 0x140841F20 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x140843C1C (AslGuidToString.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1408646E8 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14094DE60 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14094E570 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x140957F9C (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409CF26C (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1409D0360 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1409D1418 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1409D3874 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x140A047F0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A10FDC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140A1483C (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140B0E1A8 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140B2BC5C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
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
