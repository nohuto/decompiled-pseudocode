/*
 * XREFs of LdrpGetParentLangId @ 0x1403C1878
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1407E9958 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x1407EAAE4 (LdrResFallbackLangList.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x1402BEE08 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14036F74C (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x140612240 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int16 a1, _WORD *a2)
{
  __int16 v2; // bx
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v6[176]; // [rsp+D0h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v5, 85, 2) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v5, v6) >= 2 )
    v2 = DownLevelLanguageNameToLangID(v6, 2);
  *a2 = v2;
  return 0LL;
}
