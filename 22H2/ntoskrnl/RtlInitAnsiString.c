/*
 * XREFs of RtlInitAnsiString @ 0x1402F6C50
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140375044 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140387828 (IopCheckDiskName.c)
 *     HalMatchAcpiOemId @ 0x140398AA0 (HalMatchAcpiOemId.c)
 *     CmpInitializeLoadOptions @ 0x1403B4514 (CmpInitializeLoadOptions.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599B20 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059EA80 (PopEmUpdateDeviceConstraintCallback.c)
 *     RtlInitUTF8String @ 0x1405A76F0 (RtlInitUTF8String.c)
 *     WheaGetCurrentProcessName @ 0x140611CB0 (WheaGetCurrentProcessName.c)
 *     CmLogMcUpdateStatus @ 0x14061588C (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406751B8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     ObCheckRefTraceProcess @ 0x1406BA268 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754A38 (EtwpBuildProcessEvent.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A8268 (PopPowerRequestStatsGetIdForRequest.c)
 *     RtlIsApiSetImplemented @ 0x1407D45E0 (RtlIsApiSetImplemented.c)
 *     CmpSetVersionData @ 0x14080E008 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080EE9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14080F2E8 (CmpInitializeRegistryNode.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     PiGetDefaultMessageString @ 0x140849DD8 (PiGetDefaultMessageString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     WmipQueryWmiRegInfo @ 0x140865C40 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873814 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x140977654 (KsepGetModuleInfoByName.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF718 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DFBEC (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409EBA9C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF6C0 (NtQuerySystemEnvironmentValue.c)
 *     MiLogFailedDriverLoad @ 0x140A302F4 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A53E14 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     CmpInitializeDriverStores @ 0x140B3B144 (CmpInitializeDriverStores.c)
 *     WmipDriverEntry @ 0x140B3C550 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B3D2CC (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B3D4F0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B3D704 (IopCreateArcNames.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     IopGetBootDiskInformationLite @ 0x140B55268 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140B55494 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B562B0 (EmpInfParseGetGuidFromName.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B94EE0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B95140 (PipCriticalDeviceWaitCallback.c)
 *     CmpSetSystemBiosInformation @ 0x140B9986C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B99C0C (CmpSetVideoBiosInformation.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
