/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1407A39E0
 * Callers:
 *     CmpInitializeLoadOptions @ 0x140388708 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403891CC (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B0FD4 (HvlDebuggerSupportInitialize.c)
 *     PopEmModuleAddressMatchCallback @ 0x140597600 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059C560 (PopEmUpdateDeviceConstraintCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x1405E88E0 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     CmLogMcUpdateStatus @ 0x1406133DC (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140672B68 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x14070E7D8 (ObCheckRefTraceProcess.c)
 *     RtlInt64ToUnicodeString @ 0x14071C710 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1407805C0 (RtlIntegerToUnicodeString.c)
 *     RtlIsApiSetImplemented @ 0x1407848B0 (RtlIsApiSetImplemented.c)
 *     PopAnsiStringToUnicodeString @ 0x14079B134 (PopAnsiStringToUnicodeString.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407ECC30 (MiSnapThunk.c)
 *     CmpFindControlSet @ 0x1407FEB10 (CmpFindControlSet.c)
 *     KsepStringAnsiToUnicode @ 0x1407FFFD0 (KsepStringAnsiToUnicode.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140816B6C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x140816FB8 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140817BE0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x140847760 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x1408614C0 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     IopInitializeBootLogging @ 0x140941EE0 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DC878 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DCD4C (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409E8BFC (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FC7C0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140A0420C (ExpCovReadFriendlyName.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A0DD5C (CmpCreateHwProfileFriendlyName.c)
 *     MiLogFailedDriverLoad @ 0x140A2D5B4 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A51144 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140B4D1D4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B4DFF0 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
 *     WmipDriverEntry @ 0x140B53F10 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B550C4 (IopCreateArcNames.c)
 *     PipSmBiosGetString @ 0x140B56BA4 (PipSmBiosGetString.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B90F20 (PipCriticalDeviceWaitCallback.c)
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B959FC (CmpSetVideoBiosInformation.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x1403051CC (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407A39B0 (RtlxOemStringToUnicodeSize.c)
 *     RtlMultiByteToUnicodeN @ 0x1407A3B40 (RtlMultiByteToUnicodeN.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  wchar_t **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG v11; // ecx
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(SourceString);
  BytesInUnicodeString = v6;
  if ( v6 > 0xFFFE )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateUnicodeStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlMultiByteToUnicodeN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInUnicodeString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    else
    {
      v11 = BytesInUnicodeString;
      DestinationString->Length = BytesInUnicodeString;
      (*p_Buffer)[(unsigned __int64)v11 >> 1] = 0;
    }
    return v10;
  }
  return result;
}
