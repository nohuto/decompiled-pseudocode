/*
 * XREFs of RtlStringCbLengthW @ 0x1403224DC
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1403BD1F8 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1405C0C18 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x14067DD50 (_PnpRegQueryValueIndirect.c)
 *     RtlpValidRelativeAttribute @ 0x1406995F4 (RtlpValidRelativeAttribute.c)
 *     _PnpValidatePropertyData @ 0x1406B309C (_PnpValidatePropertyData.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     RtlpPopulateLanguageConfigList @ 0x14078FCBC (RtlpPopulateLanguageConfigList.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407B31F4 (AslpFileVerStringBlockGetValue.c)
 *     PpmRegisterProfiles @ 0x1407C5F28 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408E59C4 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F41F0 (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140912A80 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409145B8 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929264 (LocalGetStringForRelativeAttribute.c)
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
