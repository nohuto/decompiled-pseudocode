__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  __int64 result; // rax
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  if ( !a1 )
    return 3221225485LL;
  v5 = *(wchar_t **)(a1 + 136);
  if ( v5 && RtlpLangNameInMultiSzString(v5, a2) )
    return 3221225524LL;
  v6 = *(wchar_t **)(a1 + 152);
  result = 0LL;
  if ( v6 )
    return RtlpLangNameInMultiSzString(v6, a2) != 0 ? 0xC0000034 : 0;
  return result;
}
