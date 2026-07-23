/*
 * XREFs of RtlStringCbLengthW @ 0x14024789C
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1403BD9C8 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1405C0F08 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x1405F8AF0 (_PnpRegQueryValueIndirect.c)
 *     RtlpValidRelativeAttribute @ 0x140615AF4 (RtlpValidRelativeAttribute.c)
 *     _PnpValidatePropertyData @ 0x14062F0CC (_PnpValidatePropertyData.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     RtlpPopulateLanguageConfigList @ 0x14078FF7C (RtlpPopulateLanguageConfigList.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407B2F54 (AslpFileVerStringBlockGetValue.c)
 *     PpmRegisterProfiles @ 0x1407C5C88 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408E5AD4 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F4300 (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140912B90 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929374 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
