/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1407A3D00
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     DifRtlUpcaseUnicodeStringWrapper @ 0x1405E9FB0 (DifRtlUpcaseUnicodeStringWrapper.c)
 *     PfSnLogVolumeCreate @ 0x14078C1D0 (PfSnLogVolumeCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14079F418 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407A2F2C (AslStringUpcaseToMultiByteN.c)
 *     PfSnLogStreamCreate @ 0x1407A3E7C (PfSnLogStreamCreate.c)
 *     PfCalculateProcessHash @ 0x1407E7450 (PfCalculateProcessHash.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14095E9A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140966C4C (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD3224 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140AD34AC (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x1403051CC (AllocateOrValidateUnicodeStringBuffer.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  struct _LIST_ENTRY *Flink; // r14
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    Flink = PsGetCurrentServerSiloGlobals()[77].Flink;
    result = AllocateOrValidateUnicodeStringBuffer(
               v7,
               *v6,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v9 = SourceString->Length >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = SourceString->Buffer[i];
      if ( (unsigned int)v11 >= 0x61 )
      {
        if ( (unsigned int)v11 > 0x7A )
        {
          if ( Flink )
          {
            if ( (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *((_WORD *)&Flink->Flink
                            + (v11 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v11 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v11 >> 8))))
                          + v11;
          }
        }
        else
        {
          LOWORD(v11) = v11 - 32;
        }
      }
      DestinationString->Buffer[i] = v11;
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
