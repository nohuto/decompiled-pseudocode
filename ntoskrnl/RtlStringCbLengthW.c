/*
 * XREFs of RtlStringCbLengthW @ 0x140246920
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1402468AC (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066BF9C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     AslpFileVerStringBlockGetValue @ 0x14076C2E4 (AslpFileVerStringBlockGetValue.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084413C (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x140848708 (PpmRegisterProfiles.c)
 *     RtlpValidRelativeAttribute @ 0x140857A80 (RtlpValidRelativeAttribute.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1409830B4 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099739C (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409B8828 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D2E2C (LocalGetStringForRelativeAttribute.c)
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
