/*
 * XREFs of vInitMapper @ 0x1C03B6370
 * Callers:
 *     <none>
 * Callees:
 *     InitializeFontSignatures @ 0x1C03B61E8 (InitializeFontSignatures.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03B6ADC (InitializeDefaultFamilyFonts.c)
 */

__int64 __fastcall vInitMapper(__int64 a1)
{
  InitializeFontSignatures(a1);
  return InitializeDefaultFamilyFonts();
}
