/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140774000
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14031CE90 (RtlDeriveCapabilitySidsFromName.c)
 *     DifRtlUpcaseUnicodeStringWrapper @ 0x1405EC460 (DifRtlUpcaseUnicodeStringWrapper.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407585EC (AslStringUpcaseToMultiByteN.c)
 *     PfCalculateProcessHash @ 0x140761120 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x140773E38 (PfSnLogStreamCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1407CB958 (SdbMakeIndexKeyFromStringEx.c)
 *     PfSnLogVolumeCreate @ 0x1407DAFC0 (PfSnLogVolumeCreate.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PiCMOpenClassKey @ 0x140860768 (PiCMOpenClassKey.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1409619C0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140969C6C (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD7224 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140AD74AC (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316B1C (AllocateOrValidateUnicodeStringBuffer.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    v5 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
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
          if ( v5 )
          {
            if ( (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *(_WORD *)(v5
                                     + 2
                                     * ((v11 & 0xF)
                                      + *(unsigned __int16 *)(v5
                                                            + 2LL
                                                            * (((unsigned __int8)v11 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v11 >> 8))))))
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
