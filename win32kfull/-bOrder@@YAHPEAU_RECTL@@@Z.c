/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02CA474
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02CAC30 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CE3E0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
