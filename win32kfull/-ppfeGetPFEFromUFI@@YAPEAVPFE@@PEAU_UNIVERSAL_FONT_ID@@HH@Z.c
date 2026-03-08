/*
 * XREFs of ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0279F50
 * Callers:
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C02788F0 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 *     GreGetUFIPathname @ 0x1C027A550 (GreGetUFIPathname.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0279F94 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

struct PFE *__fastcall ppfeGetPFEFromUFI(struct _UNIVERSAL_FONT_ID *a1, int a2, int a3)
{
  struct PFE *result; // rax

  if ( !a2 )
    return ppfeGetPFEFromUFIInternal(a1, 0, a3);
  result = ppfeGetPFEFromUFIInternal(a1, 1, a3);
  if ( !result )
    return ppfeGetPFEFromUFIInternal(a1, 0, a3);
  return result;
}
