/*
 * XREFs of RtlPrefixUnicodeString @ 0x1406D5A70
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     SepPotentialGlobalTableAttribute @ 0x14024799C (SepPotentialGlobalTableAttribute.c)
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140586854 (PopFxBuildDripsBlockingDeviceList.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140682DC0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406995C8 (SepAdtAuditObjectAccessWithContext.c)
 *     IopBuildFullDriverPath @ 0x1406C25D8 (IopBuildFullDriverPath.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406C50D8 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406C8740 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C9F40 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406D3FF0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     SepIsMinTCB @ 0x14070E10C (SepIsMinTCB.c)
 *     ObCheckRefTraceProcess @ 0x14070E7D8 (ObCheckRefTraceProcess.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     ExWnfHiveUnloaded @ 0x14074B598 (ExWnfHiveUnloaded.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1407768CC (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14077F000 (RtlpProcessIFEOKeyFilter.c)
 *     IopQueryRegistryKeySystemPath @ 0x140782C0C (IopQueryRegistryKeySystemPath.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14078E5C4 (_CmGetDeviceInterfacePathFormat.c)
 *     ObpIsUnsecureName @ 0x140791AE4 (ObpIsUnsecureName.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     PiNormalizeDeviceText @ 0x14086EE68 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x140943674 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x140952A34 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x140953234 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095BA4C (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14096DFEC (PiDrvDbResolveKeyFilePaths.c)
 *     PopBatteryDeviceState @ 0x1409920CC (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x14099C034 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A5E4A8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A5EBA0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A60C0C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6333C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A63C90 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  _WORD *v7; // r9
  __int64 Flink; // rsi
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // ax
  __int16 v16; // r10
  __int64 v17; // rcx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (_WORD *)*((_QWORD *)v6 + 1);
  Flink = (__int64)CurrentServerSiloGlobals[77].Flink;
  v9 = *v6;
  if ( *(_WORD *)v4 >= (unsigned __int16)v9 )
  {
    v10 = (char *)v7 + v9;
    if ( v7 >= (_WORD *)((char *)v7 + v9) )
      return 1;
    if ( v5 )
    {
      v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( 1 )
      {
        v12 = *(_WORD *)((char *)v7 + v11);
        if ( *v7 != v12 )
        {
          NLS_UPCASE(Flink, v12);
          v15 = NLS_UPCASE(Flink, v14);
          if ( v15 != v16 )
            break;
        }
        if ( ++v7 >= (_WORD *)v10 )
          return 1;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( *v7 == *(_WORD *)((char *)v7 + v17) )
      {
        if ( ++v7 >= (_WORD *)v10 )
          return 1;
      }
    }
  }
  return 0;
}
