/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14075A5D0
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403C5578 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmpInitializeLoadOptions @ 0x1403DE020 (CmpInitializeLoadOptions.c)
 *     HvlDebuggerSupportInitialize @ 0x1403DF0F4 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x14053F1A8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D4980 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D9260 (PopEmModuleAddressMatchCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x14061ABB0 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406509F8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ObCheckRefTraceProcess @ 0x14066D3F8 (ObCheckRefTraceProcess.c)
 *     RtlIsApiSetImplemented @ 0x1406D9680 (RtlIsApiSetImplemented.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407584B4 (MiSnapThunk.c)
 *     RtlInt64ToUnicodeString @ 0x14075A520 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1407F0ED0 (PopAnsiStringToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x1407FBA68 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14080B938 (CmpAddRemoveContainerToCLFSLog.c)
 *     KsepStringAnsiToUnicode @ 0x1408271EC (KsepStringAnsiToUnicode.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     CmpFindControlSet @ 0x14082F3C4 (CmpFindControlSet.c)
 *     CmpSetVersionData @ 0x140834684 (CmpSetVersionData.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140837640 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140837688 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x140837AD4 (CmpInitializeRegistryNode.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     PiGetDefaultMessageString @ 0x1408523B4 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140864BA0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14091E3D0 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x1409346B0 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x140950744 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DC2AC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DC780 (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140A00DB0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140A03B84 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140A14988 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140B0BE8C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B0CCAC (EmpInfParseGetGuidFromName.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140B0E52C (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140B0E670 (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x140B102C0 (PipSmBiosGetString.c)
 *     CmpSetVideoBiosInformation @ 0x140B179D4 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140B17BA4 (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B4F790 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1402D7DE0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlMultiByteToUnicodeN @ 0x14075A6A0 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  wchar_t **p_Buffer; // rbx
  NTSTATUS result; // eax
  ULONG v10; // edx
  int v11; // edi
  ULONG v12; // ecx
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  BytesInUnicodeString = v6;
  if ( v6 > 0xFFFE )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v11 = RtlMultiByteToUnicodeN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInUnicodeString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePoolWithTag(*p_Buffer, v10);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    else
    {
      v12 = BytesInUnicodeString;
      DestinationString->Length = BytesInUnicodeString;
      (*p_Buffer)[(unsigned __int64)v12 >> 1] = 0;
    }
    return v11;
  }
  return result;
}
