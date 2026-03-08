/*
 * XREFs of ?Release@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ @ 0x18011BB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DSurface::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - *(int *)(a1 - 4)));
}
