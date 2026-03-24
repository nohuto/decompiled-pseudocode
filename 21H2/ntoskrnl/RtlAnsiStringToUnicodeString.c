/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14062C640
 * Callers:
 *     CmpInitializeLoadOptions @ 0x1403B7CE0 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B8534 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CFB90 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x1404ECA98 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140573EC0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140579190 (PopEmModuleAddressMatchCallback.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C6868 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x140607974 (ObCheckRefTraceProcess.c)
 *     PopAnsiStringToUnicodeString @ 0x14062BF48 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14062C070 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x14062C590 (RtlInt64ToUnicodeString.c)
 *     PnpLogVetoInformation @ 0x140732794 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075D660 (MiSnapThunk.c)
 *     PiGetDefaultMessageString @ 0x14076B024 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C9DC (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A68A0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407A6CEC (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7040 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x1407A7E2C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407ACB40 (CmpFindControlSet.c)
 *     KsepStringAnsiToUnicode @ 0x1407BEA80 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1407D4DC0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877940 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1408C7DA0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093C8C4 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409549F0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140957E4C (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140967884 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140A45B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A469DC (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A592D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A594A0 (CmpSetSystemBiosInformation.c)
 *     PipSmBiosGetString @ 0x140A5C8BC (PipSmBiosGetString.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140A61BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A90110 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x14062C730 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14062C7D0 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406A0F60 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int64 v7; // rcx
  ULONG v8; // edx
  int v9; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  BytesInUnicodeString = 0;
  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v9 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v8);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
