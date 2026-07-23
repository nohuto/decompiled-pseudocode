/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x180103F78
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106B58 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x18003C1F0 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18003D078 (RtlpIsALicensedLIPLanguage.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180103DC0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180104F5C (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1801066F8 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801067C4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x180106A00 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = RtlpMuiRegInitAnyLanguage(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_7;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_7:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage((__int64)a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      RtlpMuiRegAddAlternateCodePage((__int64)v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 3, v11, a6);
    }
  }
  return result;
}
