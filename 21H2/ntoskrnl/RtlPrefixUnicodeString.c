/*
 * XREFs of RtlPrefixUnicodeString @ 0x14077F870
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1402D6A64 (SepPotentialGlobalTableAttribute.c)
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405CB06C (PopFxBuildDripsBlockingDeviceList.c)
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 *     ObCheckRefTraceProcess @ 0x14066D3F8 (ObCheckRefTraceProcess.c)
 *     SepIsMinTCB @ 0x14066F678 (SepIsMinTCB.c)
 *     IopQueryRegistryKeySystemPath @ 0x14067AFB0 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x14067B1DC (IopBuildFullDriverPath.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1406960C8 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C2EE8 (RtlpProcessIFEOKeyFilter.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406C5650 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1406DBA7C (_CmGetDeviceInterfacePathFormat.c)
 *     PiNormalizeDeviceText @ 0x1406E1D34 (PiNormalizeDeviceText.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140723F80 (SepAdtAuditObjectAccessWithContext.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14076D4A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     _CmValidateDeviceInterfaceName @ 0x14077F150 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14077F420 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140781268 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     ObpIsUnsecureName @ 0x1407FAE50 (ObpIsUnsecureName.c)
 *     PiCreateRegistryPath @ 0x140943E3C (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x140944390 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14095D038 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14095DAF0 (PiDrvDbResolveKeyFilePaths.c)
 *     PopBatteryDeviceState @ 0x1409949AC (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x14099E860 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A23328 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A23A34 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A24104 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A25AC0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A281F8 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A28FC4 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r9
  unsigned __int16 *v7; // r10
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int16 *v10; // rdi
  __int64 v11; // rsi
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // dx
  unsigned __int16 v15; // ax
  __int16 v16; // r11
  __int64 v17; // rcx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
  v8 = CurrentServerSiloGlobals[154];
  v9 = *v6;
  if ( *(_WORD *)v4 >= (unsigned __int16)v9 )
  {
    v10 = (unsigned __int16 *)((char *)v7 + v9);
    if ( v7 >= (unsigned __int16 *)((char *)v7 + v9) )
      return 1;
    if ( v5 )
    {
      v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( 1 )
      {
        v12 = *v7;
        v13 = *(unsigned __int16 *)((char *)v7 + v11);
        if ( *v7 != v13 )
        {
          NLS_UPCASE(v8, v13);
          v15 = NLS_UPCASE(v8, v12);
          if ( v15 != v16 )
            break;
        }
        if ( ++v7 >= v10 )
          return 1;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( *v7 == *(unsigned __int16 *)((char *)v7 + v17) )
      {
        if ( ++v7 >= v10 )
          return 1;
      }
    }
  }
  return 0;
}
