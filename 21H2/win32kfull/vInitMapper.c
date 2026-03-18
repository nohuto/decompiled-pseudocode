/*
 * XREFs of vInitMapper @ 0x1C0391E00
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C039087C (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0391E1C (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
