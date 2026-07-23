/*
 * XREFs of _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14098297C
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098251C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x14078FA0C (RtlpLangNameInMultiSzString.c)
 *     RtlLCIDToCultureName @ 0x140916180 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpMuiRegValidateAndGetInstallFallbackBase(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 a3,
        wchar_t *a4)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rdi
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1073741823;
  String = 0LL;
  if ( !a1 || !a4 || !a2 )
    return 3221225485LL;
  if ( a2[1] == 7 )
  {
    if ( a2[3] && (v5 = (wchar_t *)((char *)a2 + (unsigned int)a2[2])) != 0LL && *v5 )
    {
      if ( !a3 )
        return 0;
      String.Buffer = a4;
      String.MaximumLength = 170;
      if ( RtlLCIDToCultureName(a3, &String) )
      {
        if ( RtlpLangNameInMultiSzString(v5, String.Buffer) )
          return 0;
      }
    }
    else
    {
      return a3 != 0 ? 0xC0000001 : 0;
    }
  }
  return v4;
}
