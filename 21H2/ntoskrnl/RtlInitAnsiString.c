/*
 * XREFs of RtlInitAnsiString @ 0x1402713E0
 * Callers:
 *     IopCheckDiskName @ 0x1403B4298 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x1403B7E50 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B86A4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HalMatchAcpiOemId @ 0x1403C0590 (HalMatchAcpiOemId.c)
 *     CmLogMcUpdateStatus @ 0x1404ECCD8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140574100 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405793D0 (PopEmModuleAddressMatchCallback.c)
 *     RtlInitUTF8String @ 0x1405856C0 (RtlInitUTF8String.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C6A98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     PopAvlGetPowerRequestKey @ 0x1406706C4 (PopAvlGetPowerRequestKey.c)
 *     ObCheckRefTraceProcess @ 0x140697404 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1406F1D70 (EtwpBuildProcessEvent.c)
 *     PnpLogVetoInformation @ 0x140732954 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x14076B1E4 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077CB9C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6AA0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407A6EEC (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 *     WmipQueryWmiRegInfo @ 0x1407D4F30 (WmipQueryWmiRegInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408C0E88 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1408C7F00 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140954BC0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140967A64 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140A46940 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140A46B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A479DC (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A5931C (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A5A2D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
 *     IopMarkBootPartition @ 0x140A62890 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140A62BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A6AAA0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A90EC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A91110 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
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
