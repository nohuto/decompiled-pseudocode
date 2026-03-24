/*
 * XREFs of RtlStringCchPrintfW @ 0x140348150
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6440 (DrvDbGetConfigurationSubKeyCallback.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsSectionName @ 0x14069D240 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x14069D2A8 (RtlpInitNlsFileName.c)
 *     LocalpGetStringForCondition @ 0x1406EBBE8 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x1406EC010 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1406EC05C (GetPrintableOperandValue.c)
 *     SepValidateReferencedCachedHandles @ 0x14070F440 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDevice @ 0x140719130 (IoCreateDevice.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140736C30 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140737538 (PiDevCfgLogDeviceConfigured.c)
 *     IoWMIOpenBlock @ 0x14075A480 (IoWMIOpenBlock.c)
 *     PipMakeGloballyUniqueId @ 0x14076BBCC (PipMakeGloballyUniqueId.c)
 *     IopBootLog @ 0x1407716E0 (IopBootLog.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     MiSessionObjectCreate @ 0x140786384 (MiSessionObjectCreate.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNode @ 0x1407A3CA8 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x1407A4F54 (_SysCtxOpenControlSet.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     AslpFileQueryVersionString @ 0x1407B329C (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x1407C2798 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D4770 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8160 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A93D0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408AA490 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B243C (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409145B8 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x140925A1C (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140958B00 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1409646BC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140967780 (AslGuidToString_UStr.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x140A61CE8 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140A700D8 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D0970 (_vsnwprintf.c)
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
