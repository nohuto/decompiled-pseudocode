/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x14078F3EC
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A85B0 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A8404 (RtlpMuiRegAddAlternateCodePage.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14078F0B0 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x14078F994 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1407CF4F0 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpIsALicensedLIPLanguage @ 0x140980E68 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14098227C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x1409824C0 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(__int64 a1, void *a2, const WCHAR *a3, __int16 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-18h]

  v12 = 0LL;
  v13 = 0;
  v11 = 0LL;
  result = RtlpMuiRegInitAnyLanguage(a1, (__int64)&v11, a3, a4);
  if ( (int)result < 0 )
    return result;
  v10 = v11;
  if ( (v11 & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, &v11);
  }
  else
  {
    if ( (v11 & 2) == 0 )
      goto LABEL_4;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, &v11);
  }
  v10 = v11;
LABEL_4:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage(a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      LOWORD(v11) = v11 | 0x820;
      RtlpMuiRegAddAlternateCodePage((__int64)&v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v11, a6);
    }
  }
  return result;
}
