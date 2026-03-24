/*
 * XREFs of vInitMapper @ 0x1C0392BE0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C03928B0 (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0392BFC (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
