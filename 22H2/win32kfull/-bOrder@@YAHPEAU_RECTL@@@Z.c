/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C013D568
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C013AC00 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C013AF80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStretchBlt @ 0x1C013CDD0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B1E70 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B3D60 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
