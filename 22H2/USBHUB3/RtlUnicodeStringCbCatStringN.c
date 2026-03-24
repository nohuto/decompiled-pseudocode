/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x1C001AFF4
 * Callers:
 *     HUBID_BuildContainerID @ 0x1C001BF74 (HUBID_BuildContainerID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // rbx
  wchar_t *Buffer; // rsi
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  NTSTATUS v8; // r9d
  unsigned __int64 MaximumLength; // rax
  size_t v10; // r8
  __int16 v11; // cx
  unsigned __int64 v12; // r11
  char *v13; // rbx

  Length = DestinationString->Length;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
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
    v8 = -1073741811;
  }
  else
  {
    v6 = MaximumLength >> 1;
    Buffer = DestinationString->Buffer;
    v7 = Length >> 1;
  }
  if ( v8 < 0 )
    return v8;
  v10 = cbToAppend >> 1;
  if ( v10 > 0x7FFF )
    return -1073741811;
  v8 = 0;
  v11 = 0;
  v12 = v6 - v7;
  if ( !v12 )
    goto LABEL_26;
  v13 = (char *)Buffer + 2 * v7 - (_QWORD)pszSrc;
  do
  {
    if ( !v10 )
      break;
    if ( !*pszSrc )
      break;
    *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v13) = *pszSrc;
    --v10;
    ++pszSrc;
    ++v11;
    --v12;
  }
  while ( v12 );
  if ( !v12 )
  {
LABEL_26:
    if ( v10 && *pszSrc )
      v8 = -2147483643;
  }
  DestinationString->Length = 2 * (v11 + v7);
  return v8;
}
