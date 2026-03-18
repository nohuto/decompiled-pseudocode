/*
 * XREFs of RtlInitAnsiString @ 0x1402A07B0
 * Callers:
 *     IopCheckDiskName @ 0x1403C4550 (IopCheckDiskName.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403C5578 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmpInitializeLoadOptions @ 0x1403DE020 (CmpInitializeLoadOptions.c)
 *     CmLogMcUpdateStatus @ 0x14053F1A8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D4980 (PopEmUpdateDeviceConstraintCallback.c)
 *     WheaGetCurrentProcessName @ 0x140644BE4 (WheaGetCurrentProcessName.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406509F8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x14066D3F8 (ObCheckRefTraceProcess.c)
 *     RtlIsApiSetImplemented @ 0x1406D9680 (RtlIsApiSetImplemented.c)
 *     EtwpBuildProcessEvent @ 0x14070B610 (EtwpBuildProcessEvent.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x1407FBA68 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14080B938 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     CmpSetVersionData @ 0x140834684 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140837688 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x140837AD4 (CmpInitializeRegistryNode.c)
 *     PiGetDefaultMessageString @ 0x1408523B4 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140864BA0 (WmipQueryWmiRegInfo.c)
 *     PnpLogVetoInformation @ 0x140950744 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x140964D68 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DC2AC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DC780 (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140B0BC60 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140B0BE8C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B0CCAC (EmpInfParseGetGuidFromName.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140B0E52C (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140B0E670 (IopMarkBootPartition.c)
 *     CmpSetVideoBiosInformation @ 0x140B179D4 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140B17BA4 (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B4F790 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString)
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
