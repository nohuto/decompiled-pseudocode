/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x14036F74C
 * Callers:
 *     LdrpGetParentLangId @ 0x1403C1878 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1407FE570 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1409B7450 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1402BEF40 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403D4280 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140001CC0, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140002A60)[2 * word_14001FD40[(v3 - (_BYTE *)&off_140001CC0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
