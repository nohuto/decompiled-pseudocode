/*
 * XREFs of RtlInitAnsiString @ 0x140299410
 * Callers:
 *     IopCheckDiskName @ 0x140386144 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x140388708 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403891CC (IopCreateUnicodeFromAnsiBuffer.c)
 *     HalMatchAcpiOemId @ 0x140395040 (HalMatchAcpiOemId.c)
 *     PopEmModuleAddressMatchCallback @ 0x140597600 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059C560 (PopEmUpdateDeviceConstraintCallback.c)
 *     RtlInitUTF8String @ 0x1405A5260 (RtlInitUTF8String.c)
 *     WheaGetCurrentProcessName @ 0x14060F890 (WheaGetCurrentProcessName.c)
 *     CmLogMcUpdateStatus @ 0x1406133DC (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140672B68 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x14070E7D8 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14071DE28 (EtwpBuildProcessEvent.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x14073C3F4 (PopPowerRequestStatsGetIdForRequest.c)
 *     RtlIsApiSetImplemented @ 0x1407848B0 (RtlIsApiSetImplemented.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140816B6C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x140816FB8 (CmpInitializeRegistryNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x140847760 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x1408614C0 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x1409745B4 (KsepGetModuleInfoByName.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DC878 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DCD4C (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409E8BFC (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FC7C0 (NtQuerySystemEnvironmentValue.c)
 *     MiLogFailedDriverLoad @ 0x140A2D5B4 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A51144 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     IopGetBootDiskInformationLite @ 0x140B4CFA8 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140B4D1D4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B4DFF0 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
 *     WmipDriverEntry @ 0x140B53F10 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B550C4 (IopCreateArcNames.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B90F20 (PipCriticalDeviceWaitCallback.c)
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B959FC (CmpSetVideoBiosInformation.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
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
