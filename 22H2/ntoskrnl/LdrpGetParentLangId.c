/*
 * XREFs of LdrpGetParentLangId @ 0x1403C7138
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x140756220 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x14075AA64 (LdrResFallbackLangList.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x14037140C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038AD54 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x140614660 (DownLevelGetParentLanguageName.c)
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
