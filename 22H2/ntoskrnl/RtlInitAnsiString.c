/*
 * XREFs of RtlInitAnsiString @ 0x14024FB10
 * Callers:
 *     IopCheckDiskName @ 0x1403B3AC8 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x1403B7680 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B7ED4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HalMatchAcpiOemId @ 0x1403BFDC0 (HalMatchAcpiOemId.c)
 *     CmLogMcUpdateStatus @ 0x1404EC9D8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140573E00 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405790D0 (PopEmModuleAddressMatchCallback.c)
 *     RtlInitUTF8String @ 0x1405853D0 (RtlInitUTF8String.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C67A8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     ObCheckRefTraceProcess @ 0x140607DD4 (ObCheckRefTraceProcess.c)
 *     PopAvlGetPowerRequestKey @ 0x1406F5D74 (PopAvlGetPowerRequestKey.c)
 *     PnpLogVetoInformation @ 0x140732AE4 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x14076A644 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C8DC (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6CD0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407A711C (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x1407A825C (CmpSetVersionData.c)
 *     WmipQueryWmiRegInfo @ 0x1407D4CE0 (WmipQueryWmiRegInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408C0D78 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1408C7DF0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093C914 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140954A40 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x1409678D4 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3140 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     IopGetBootDiskInformationLite @ 0x140A45940 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140A45B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A469DC (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A592D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A594A0 (CmpSetSystemBiosInformation.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140A61BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A90110 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
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
