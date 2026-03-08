/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x1402BEE08
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14035D07C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x14035DC3C (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetParentLangId @ 0x1403C1878 (LdrpGetParentLangId.c)
 *     ExpSetPendingUILanguage @ 0x140749238 (ExpSetPendingUILanguage.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1402BEED8 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1402BEF40 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403D4280 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bl
  const struct CultureDataType *v7; // rcx
  const unsigned __int16 *v8; // r8
  __int64 v9; // r11
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (const struct CultureDataType *)bsearch(&Key, &off_140002A60, 0x1B4uLL, 0x10uLL, CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)IsNeutralLanguageItem(v7) )
    return 0LL;
  v8 = *(const unsigned __int16 **)v7;
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  if ( a2 && (int)StringCchCopyNW(a2, v4, v8, v9 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v9 + 1);
}
