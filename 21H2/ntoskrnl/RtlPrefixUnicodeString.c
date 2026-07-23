/*
 * XREFs of RtlPrefixUnicodeString @ 0x1406DD340
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x140241AF4 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1405FF520 (PiPnpRtlEnumeratorFilterCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406043E4 (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406081C4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x14062ECB8 (_CmIsRootEnumeratedDevice.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063276C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406367DC (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140636AC0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140639F28 (_CmOpenCommonClassRegKeyWorker.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140693624 (SepAdtAuditObjectAccessWithContext.c)
 *     ObCheckRefTraceProcess @ 0x140697404 (ObCheckRefTraceProcess.c)
 *     SepIsMinTCB @ 0x14069CBD4 (SepIsMinTCB.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1406C5E30 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x1406C68F0 (SepValidateReferencedCachedHandles.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14072B824 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C740 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072CC64 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     IopBuildFullDriverPath @ 0x1407404C8 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x14076AE00 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x140893044 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14089F254 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F790 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6F54 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4840 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6EC8 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7984 (PiDrvDbResolveKeyFilePaths.c)
 *     ObpIsUnsecureName @ 0x1408DC4D4 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408ED078 (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F80C4 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140975028 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097809C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1409789EC (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
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
