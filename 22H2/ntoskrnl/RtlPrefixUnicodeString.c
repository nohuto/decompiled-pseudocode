/*
 * XREFs of RtlPrefixUnicodeString @ 0x1405EDBE0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1403482B4 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405695C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     ObCheckRefTraceProcess @ 0x140607DD4 (ObCheckRefTraceProcess.c)
 *     SepIsMinTCB @ 0x14060D584 (SepIsMinTCB.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140627934 (SepAdtAuditObjectAccessWithContext.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x140684AA0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140689294 (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14068D1F4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406B2C88 (_CmIsRootEnumeratedDevice.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406B673C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406BA7AC (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406BAA90 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406BDEF8 (_CmOpenCommonClassRegKeyWorker.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14070E980 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x14070F440 (SepValidateReferencedCachedHandles.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14072C234 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072D150 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072D674 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072DF0C (_CmDeleteDeviceRegKeyWorker.c)
 *     IopBuildFullDriverPath @ 0x14073C7A8 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x14076A260 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x140892F34 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14089F144 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14089F680 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6E44 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4730 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6DB8 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7874 (PiDrvDbResolveKeyFilePaths.c)
 *     ObpIsUnsecureName @ 0x1408DC3C4 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408ECF68 (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F7FB4 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140974E98 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140977F0C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097885C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
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
