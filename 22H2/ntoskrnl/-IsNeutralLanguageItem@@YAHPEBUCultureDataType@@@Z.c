/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140371544
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x14037140C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038AD54 (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}
