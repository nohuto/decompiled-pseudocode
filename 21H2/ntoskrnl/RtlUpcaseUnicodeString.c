/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1406CC820
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402ED600 (RtlDeriveCapabilitySidsFromName.c)
 *     PfSnLogVolumeCreate @ 0x1406B25A4 (PfSnLogVolumeCreate.c)
 *     PiCMOpenClassKey @ 0x1406BEA68 (PiCMOpenClassKey.c)
 *     PfCalculateProcessHash @ 0x1406CC490 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x1406CC634 (PfSnLogStreamCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075A4D0 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075A7D0 (AslStringUpcaseToMultiByteN.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A98B0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B0590 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DCAA4 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409DCCD4 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1406A0F60 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  SIZE_T Length; // rax
  __int64 i; // r9
  unsigned __int64 v7; // r10
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(Length) = SourceString->Length;
  }
  else if ( (unsigned __int16)Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned __int16)Length >> 1; i = (unsigned int)(i + 1) )
  {
    v7 = SourceString->Buffer[i];
    if ( (unsigned int)v7 >= 0x61 )
    {
      if ( (unsigned int)v7 > 0x7A )
      {
        if ( Nls844UnicodeUpcaseTable )
        {
          if ( (unsigned __int16)v7 >= 0xC0u )
            LOWORD(v7) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                  + 2
                                  * ((v7 & 0xF)
                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((unsigned __int8)v7 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2 * (v7 >> 8))))))
                       + v7;
        }
      }
      else
      {
        LOWORD(v7) = v7 - 32;
      }
    }
    DestinationString->Buffer[i] = v7;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
