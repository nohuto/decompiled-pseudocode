/*
 * XREFs of CreateFontFromUserProfile @ 0x1C010E764
 * Callers:
 *     UserSetFont @ 0x1C010E6E8 (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C8BB4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0025AF8 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     GreSetLFONTOwner @ 0x1C010E86C (GreSetLFONTOwner.c)
 *     GreMarkDeletableFont @ 0x1C010E8B4 (GreMarkDeletableFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C010EEA8 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, _DWORD *a2, unsigned int a3)
{
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  struct HLFONT__ *FontIndirectW; // rbx
  _OWORD v13[5]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v14; // [rsp+70h] [rbp-39h]
  int v15; // [rsp+78h] [rbp-31h]
  struct tagLOGFONTW v16; // [rsp+80h] [rbp-29h] BYREF

  memset_0(v13, 0, 0x5CuLL);
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v16, a1, a3);
    a2 = v13;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v13[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v13[1] = v7;
    v9 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v13[2] = v8;
    v10 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v13[3] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v13[4] = v10;
    v14 = v9;
    v15 = (int)LogFontFromUserProfile;
  }
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW((__int64)a2, 0x80u);
  if ( FontIndirectW )
  {
    memset_0(&v16, 0, sizeof(v16));
    if ( (unsigned int)GreExtGetObjectW((HBRUSH)FontIndirectW, 92LL, &v16) && v16.lfHeight == *a2 )
    {
      GreSetLFONTOwner(FontIndirectW, 0LL);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0LL;
    }
  }
  return FontIndirectW;
}
