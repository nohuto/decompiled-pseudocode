/*
 * XREFs of vInitMapper @ 0x1C0393BE0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C03938B0 (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0393BFC (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
