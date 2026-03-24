/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1406F6920
 * Callers:
 *     CmpInitializeLoadOptions @ 0x1403B7680 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B7ED4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CF490 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x1404EC9D8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140573E00 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405790D0 (PopEmModuleAddressMatchCallback.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C67A8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x140607DD4 (ObCheckRefTraceProcess.c)
 *     PopAnsiStringToUnicodeString @ 0x1406F6220 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1406F6350 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1406F6870 (RtlInt64ToUnicodeString.c)
 *     PnpLogVetoInformation @ 0x140732AE4 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075CE50 (MiSnapThunk.c)
 *     PiGetDefaultMessageString @ 0x14076A644 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C8DC (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6CD0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407A711C (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7470 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x1407A825C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407ACF80 (CmpFindControlSet.c)
 *     KsepStringAnsiToUnicode @ 0x1407BF240 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1407D4CE0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877990 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140891768 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1408C7DF0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093C914 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140954A40 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140957E9C (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x1409678D4 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3140 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
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
 *     ExpAllocateStringRoutine @ 0x140685CE0 (ExpAllocateStringRoutine.c)
 *     RtlMultiByteToUnicodeN @ 0x1406F6A10 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1406F6AB0 (RtlxAnsiStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
