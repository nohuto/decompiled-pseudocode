/*
 * XREFs of RtlPrefixUnicodeString @ 0x1405EDBE0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x14027F2A4 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140569684 (PopFxBuildDripsBlockingDeviceList.c)
 *     ObCheckRefTraceProcess @ 0x140607974 (ObCheckRefTraceProcess.c)
 *     SepIsMinTCB @ 0x14060D124 (SepIsMinTCB.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140627514 (SepAdtAuditObjectAccessWithContext.c)
 *     _CmIsRootEnumeratedDevice @ 0x140639EA8 (_CmIsRootEnumeratedDevice.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063D95C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406419CC (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140641CB0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140645118 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406A01E0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406A67B4 (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406AA244 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1407177E0 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x1407182A0 (SepValidateReferencedCachedHandles.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14072B374 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C290 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072C7B4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D04C (_CmDeleteDeviceRegKeyWorker.c)
 *     IopBuildFullDriverPath @ 0x140740308 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140740FE0 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x14076AC40 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x140892EE4 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14089F0F4 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F630 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6DF4 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6D68 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7824 (PiDrvDbResolveKeyFilePaths.c)
 *     ObpIsUnsecureName @ 0x1408DC374 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408ECF18 (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F7F64 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140974E48 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140977EBC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097880C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AF0 (NLS_UPCASE.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r9
  wchar_t *v5; // rbx
  char *v6; // rdi
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // r11
  unsigned __int16 v10; // ax
  __int16 v11; // r10
  char *v12; // rcx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *(wchar_t *)((char *)Buffer + (_QWORD)v6);
        if ( *Buffer != v7 )
        {
          NLS_UPCASE(v7);
          v10 = NLS_UPCASE(v9);
          if ( v10 != v11 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v12) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
