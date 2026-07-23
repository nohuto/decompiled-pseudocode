/*
 * XREFs of RtlpIsALicensedLIPLanguage @ 0x140980E68
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14078F3EC (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x14078FA0C (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  v2 = 0;
  if ( a1 )
  {
    v5 = *(wchar_t **)(a1 + 136);
    if ( v5 && RtlpLangNameInMultiSzString(v5, a2) )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v6 = *(wchar_t **)(a1 + 152);
      if ( v6 )
        return RtlpLangNameInMultiSzString(v6, a2) != 0 ? 0xC0000034 : 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
