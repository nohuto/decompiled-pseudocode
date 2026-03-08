/*
 * XREFs of RtlUnicodeStringInit @ 0x1C003444C
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0034C18 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C00838E4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C00887B0 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringInit(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v2; // r8d
  __int64 v3; // r10
  NTSTRSAFE_PCWSTR v4; // rax
  unsigned __int16 v5; // r9

  v2 = 0;
  *DestinationString = 0LL;
  if ( pszSrc )
  {
    v3 = 0x7FFFLL;
    v4 = pszSrc;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    if ( v3 )
    {
      if ( !DestinationString )
        return -1073741811;
      v5 = 2 * (0x7FFF - v3);
      DestinationString->Buffer = (wchar_t *)pszSrc;
      DestinationString->Length = v5;
      DestinationString->MaximumLength = v5 + 2;
    }
    return v3 == 0 ? 0xC000000D : 0;
  }
  return v2;
}
