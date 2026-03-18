/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x14036BF44
 * Callers:
 *     PoStoreRequester @ 0x14036AC64 (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x14036BE80 (PopSafeCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rdx
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r8
  size_t v7; // r10
  signed __int64 v8; // r8
  NTSTRSAFE_PWSTR v9; // rax

  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFE )
    return -1073741811;
  Length = SourceString->Length;
  if ( (Length & 1) != 0
    || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || (Buffer = SourceString->Buffer) == 0LL && ((_WORD)Length || MaximumLength) )
  {
    *pszDest = 0;
    return -1073741811;
  }
  v7 = (Length >> 1) - v3;
  v8 = (char *)Buffer - (char *)pszDest;
  do
  {
    if ( !(v7 + v3) )
      break;
    *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
    ++pszDest;
    --v3;
  }
  while ( v3 );
  v9 = pszDest - 1;
  if ( v3 )
    v9 = pszDest;
  *v9 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
