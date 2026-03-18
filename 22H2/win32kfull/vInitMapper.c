/*
 * XREFs of vInitMapper @ 0x1C03B3CC0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C03B392C (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C03B3CDC (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
