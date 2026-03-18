/*
 * XREFs of RtlStringCbLengthW @ 0x1402DCD64
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1403CB454 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140649D44 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x1406B89A0 (_PnpRegQueryValueIndirect.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     RtlpValidRelativeAttribute @ 0x14076370C (RtlpValidRelativeAttribute.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     _PnpValidatePropertyData @ 0x140771CD0 (_PnpValidatePropertyData.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082FDD8 (RtlpPopulateLanguageConfigList.c)
 *     AslpFileVerStringBlockGetValue @ 0x140841E78 (AslpFileVerStringBlockGetValue.c)
 *     PpmRegisterProfiles @ 0x140854E78 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14098E284 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099B8FC (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409B863C (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D3004 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
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
    v5 = (v3 - i) & -(__int64)(i != 0);
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
