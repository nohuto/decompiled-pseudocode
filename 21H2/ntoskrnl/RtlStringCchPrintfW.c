/*
 * XREFs of RtlStringCchPrintfW @ 0x14026D570
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6730 (DrvDbGetConfigurationSubKeyCallback.c)
 *     RtlpInitNlsSectionName @ 0x14060F190 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x14060F1F8 (RtlpInitNlsFileName.c)
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x140668450 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14066849C (GetPrintableOperandValue.c)
 *     SepValidateReferencedCachedHandles @ 0x1406C68F0 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A948 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     IoWMIOpenBlock @ 0x14075AE50 (IoWMIOpenBlock.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     MiSessionObjectCreate @ 0x140786644 (MiSessionObjectCreate.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x1407A4D24 (_SysCtxOpenControlSet.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     AslpFileQueryVersionString @ 0x1407B2FFC (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x1407C24F8 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D49C0 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8270 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A94E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408AA5A0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B254C (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x140925B2C (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140958C80 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14096484C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140967910 (AslGuidToString_UStr.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x140A62CE8 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140A710D8 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D11E0 (_vsnwprintf.c)
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
