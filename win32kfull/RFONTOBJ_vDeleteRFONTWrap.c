/*
 * XREFs of RFONTOBJ_vDeleteRFONTWrap @ 0x1C0123E00
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall RFONTOBJ_vDeleteRFONTWrap(struct _FONTOBJ **a1, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  RFONTOBJ::vDeleteRFONT(a1, a2, a3, a4);
}
