/*
 * XREFs of RtlUnicodeStringCatString @ 0x1403C453C
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406212B4 (CmpLogTransactionAbortedWithChildName.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BE5E8 (PopGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408FB280 (SshpGenerateDeviceFriendlyName.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int64 Length; // r11
  wchar_t *Buffer; // rdi
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  NTSTATUS v7; // r8d
  unsigned __int64 MaximumLength; // rax
  __int64 v9; // rcx
  __int16 v10; // r11
  unsigned __int64 v11; // r10
  char *v12; // rdi

  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > (unsigned __int16)MaximumLength
    || (_WORD)MaximumLength == 0xFFFF )
  {
    return -1073741811;
  }
  if ( !DestinationString->Buffer && ((_WORD)Length || (_WORD)MaximumLength) )
  {
    v7 = -1073741811;
  }
  else
  {
    v5 = MaximumLength >> 1;
    Buffer = DestinationString->Buffer;
    v6 = Length >> 1;
  }
  if ( v7 >= 0 )
  {
    v9 = 0x7FFFLL;
    v7 = 0;
    v10 = 0;
    v11 = v5 - v6;
    if ( !v11 )
      goto LABEL_26;
    v12 = (char *)Buffer + 2 * v6 - (_QWORD)pszSrc;
    do
    {
      if ( !v9 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v12) = *pszSrc;
      --v9;
      ++pszSrc;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v11 && v9 )
    {
LABEL_26:
      if ( *pszSrc )
        v7 = -2147483643;
    }
    DestinationString->Length = 2 * (v10 + v6);
  }
  return v7;
}
