/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1406DCFD0
 * Callers:
 *     CmpTraceSecurityChanging @ 0x140662C28 (CmpTraceSecurityChanging.c)
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5F44 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rbx
  size_t v5; // rsi
  wchar_t *v6; // rdi
  wchar_t *v7; // rbp
  unsigned __int16 *v8; // rsi
  signed __int64 i; // r11
  unsigned __int16 *j; // r10
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // ax
  __int16 v13; // r9
  wchar_t *v15; // rbp

  Length = SearchString->Length;
  if ( FullString->Length < (unsigned __int16)Length )
    return 0LL;
  Buffer = FullString->Buffer;
  v5 = SearchString->Length;
  v6 = (wchar_t *)((char *)Buffer + FullString->Length - Length);
  if ( !CaseInSensitive )
  {
    if ( Buffer <= v6 )
    {
      v15 = SearchString->Buffer;
      while ( memcmp(Buffer, v15, v5) )
      {
        if ( ++Buffer > v6 )
          return 0LL;
      }
      return Buffer;
    }
    return 0LL;
  }
  v7 = SearchString->Buffer;
  v8 = (wchar_t *)((char *)v7 + SearchString->Length);
  if ( Buffer > v6 )
    return 0LL;
  for ( i = (char *)Buffer - (char *)v7; ; i += 2LL )
  {
    for ( j = v7; j < v8; ++j )
    {
      v11 = *(unsigned __int16 *)((char *)j + i);
      if ( v11 != *j )
      {
        NLS_UPCASE(*j);
        v12 = NLS_UPCASE(v11);
        if ( v12 != v13 )
          break;
      }
    }
    if ( j == v8 )
      break;
    if ( ++Buffer > v6 )
      return 0LL;
  }
  return Buffer;
}
