/*
 * XREFs of RtlStringCbLengthW @ 0x14022BF00
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x14022BE8C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066E5EC (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407BE9C4 (AslpFileVerStringBlockGetValue.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14081BD64 (PiSwCompleteCreate.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084729C (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x14084AD78 (PpmRegisterProfiles.c)
 *     RtlpValidRelativeAttribute @ 0x14085B760 (RtlpValidRelativeAttribute.c)
 *     PopFxValidateReturnedUnicodeString @ 0x140986164 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099A44C (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409BB748 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5CCC (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v4; // r9
  size_t v5; // rax
  NTSTATUS result; // eax

  v3 = cbMax >> 1;
  v4 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF && (v5 = v3) != 0 )
  {
    while ( *psz )
    {
      ++psz;
      if ( !--v5 )
        goto LABEL_6;
    }
    v4 = v3 - v5;
    result = 0;
  }
  else
  {
LABEL_6:
    result = -1073741811;
  }
  if ( pcbLength )
  {
    if ( result < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v4;
  }
  return result;
}
