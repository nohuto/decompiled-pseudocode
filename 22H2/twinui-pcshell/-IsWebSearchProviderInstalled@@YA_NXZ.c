/*
 * XREFs of ?IsWebSearchProviderInstalled@@YA_NXZ @ 0x1800A7DE0
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ @ 0x1800A9BB8 (-ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AAAD4 (-TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char IsWebSearchProviderInstalled(void)
{
  int v0; // ebx
  LSTATUS ValueW; // eax
  char v2; // dl
  signed int v3; // ecx
  bool v4; // zf
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 4;
  v0 = 0;
  v7 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
             L"WebSearchInstalled",
             0x10000012u,
             &v7,
             &v6,
             &v8);
  v2 = 1;
  LOWORD(v3) = 13;
  if ( !ValueW )
  {
    if ( v7 == 4 )
    {
      if ( v6 <= 1 )
      {
        v3 = 0;
        v4 = v6 == 1;
LABEL_5:
        LOBYTE(v0) = v4;
        goto LABEL_13;
      }
    }
    else if ( v8 == 4 && (unsigned __int16)(v6 - 48) <= 1u )
    {
      v3 = 0;
      v4 = (_WORD)v6 == 49;
      goto LABEL_5;
    }
LABEL_12:
    v3 = (unsigned __int16)v3 | 0x80070000;
    goto LABEL_13;
  }
  if ( ValueW == 234 )
    ValueW = 13;
  v3 = ValueW;
  if ( ValueW > 0 )
    goto LABEL_12;
LABEL_13:
  if ( v3 < 0 || !v0 )
    return 0;
  return v2;
}
