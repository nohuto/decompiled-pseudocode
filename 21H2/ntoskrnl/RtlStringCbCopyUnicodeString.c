/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x140271E8C
 * Callers:
 *     PoStoreRequester @ 0x1402710E8 (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x140271DC8 (PopSafeCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // r9
  NTSTATUS result; // eax
  unsigned __int64 Length; // r8
  wchar_t *v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int16 MaximumLength; // r10
  wchar_t *Buffer; // rbx
  size_t v12; // rdx
  signed __int64 v13; // r11
  NTSTRSAFE_PWSTR v14; // rax

  v3 = cbDest >> 1;
  result = 0;
  if ( cbDest < 2 || v3 > 0x7FFF )
    result = -1073741811;
  if ( result >= 0 )
  {
    Length = SourceString->Length;
    v8 = 0LL;
    v9 = 0LL;
    result = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
      || (unsigned __int16)Length > MaximumLength
      || MaximumLength == 0xFFFF )
    {
      result = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      if ( !Buffer && ((_WORD)Length || MaximumLength) )
      {
        result = -1073741811;
      }
      else
      {
        v8 = Buffer;
        v9 = Length >> 1;
      }
      if ( result >= 0 )
      {
        if ( cbDest >= 2 )
        {
          v12 = v9 - v3;
          v13 = (char *)v8 - (char *)pszDest;
          do
          {
            if ( !(v12 + v3) )
              break;
            *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v13);
            ++pszDest;
            --v3;
          }
          while ( v3 );
        }
        v14 = pszDest - 1;
        if ( v3 )
          v14 = pszDest;
        *v14 = 0;
        return v3 == 0 ? 0x80000005 : 0;
      }
    }
    *pszDest = 0;
  }
  return result;
}
