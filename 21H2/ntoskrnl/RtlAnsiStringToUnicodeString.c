/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1406637D0
 * Callers:
 *     CmpInitializeLoadOptions @ 0x1403B7E50 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B86A4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CFD00 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x1404ECCD8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140574100 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405793D0 (PopEmModuleAddressMatchCallback.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C6A98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlIntegerToUnicodeString @ 0x14060F3A0 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x140663720 (RtlInt64ToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x140670B70 (PopAnsiStringToUnicodeString.c)
 *     ObCheckRefTraceProcess @ 0x140697404 (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x140732954 (PnpLogVetoInformation.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075D820 (MiSnapThunk.c)
 *     PiGetDefaultMessageString @ 0x14076B1E4 (PiGetDefaultMessageString.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077CB9C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6AA0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407A6EEC (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7240 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407ACD40 (CmpFindControlSet.c)
 *     KsepStringAnsiToUnicode @ 0x1407BF210 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1407D4F30 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877AA0 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1408C7F00 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140954BC0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x14095801C (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140967A64 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140A46B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A479DC (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140A5931C (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A5A2D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
 *     PipSmBiosGetString @ 0x140A5D8BC (PipSmBiosGetString.c)
 *     IopMarkBootPartition @ 0x140A62890 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140A62BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A6AAA0 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A90EC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A91110 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     RtlMultiByteToUnicodeN @ 0x1406638C0 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x140663960 (RtlxAnsiStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
