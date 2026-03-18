/*
 * XREFs of RtlUnicodeStringCatString @ 0x14036BFE0
 * Callers:
 *     PopPowerRequestStatsIdConcat @ 0x1407F0FC0 (PopPowerRequestStatsIdConcat.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140854148 (SshpGenerateDeviceFriendlyName.c)
 *     PopGenerateDeviceFriendlyName @ 0x14085475C (PopGenerateDeviceFriendlyName.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int64 Length; // rdx
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // rbx
  NTSTATUS v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  __int16 v10; // di
  unsigned __int64 v11; // r9
  char *v12; // rbx

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  v7 = 0;
  if ( !Buffer && ((_WORD)Length || (_WORD)MaximumLength) )
    return -1073741811;
  v8 = Length >> 1;
  v9 = 0x7FFFLL;
  v10 = 0;
  v11 = (MaximumLength >> 1) - v8;
  if ( MaximumLength >> 1 == v8 )
  {
LABEL_18:
    if ( *pszSrc )
      v7 = -2147483643;
  }
  else
  {
    v12 = (char *)Buffer + 2 * v8 - (_QWORD)pszSrc;
    while ( v9 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v12) = *pszSrc;
        --v9;
        ++pszSrc;
        ++v10;
        if ( --v11 )
          continue;
      }
      if ( v11 || !v9 )
        break;
      goto LABEL_18;
    }
  }
  DestinationString->Length = 2 * (v10 + v8);
  return v7;
}
