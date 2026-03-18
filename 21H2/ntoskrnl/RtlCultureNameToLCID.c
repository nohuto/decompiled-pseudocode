/*
 * XREFs of RtlCultureNameToLCID @ 0x140830F20
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1403C64C0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14082EFE4 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140830BF0 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140A34D60 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A35084 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x140A35494 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140A356D0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A35814 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x140A35BC0 (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x1403C68CC (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 */

bool __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, _DWORD *a2)
{
  char v2; // di
  size_t v4; // r8
  const void *v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = *a1;
      if ( (_WORD)v4 )
      {
        v5 = (const void *)*((_QWORD *)a1 + 1);
        if ( v5 )
        {
          if ( (unsigned int)(v4 + 2) <= 0x55 )
          {
            v6 = *a1;
            memmove(v10, v5, v4);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              _report_rangecheckfailure();
            v10[v7] = 0;
            v8 = DownLevelLanguageNameToLangID(v10, 2);
            *a2 = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
