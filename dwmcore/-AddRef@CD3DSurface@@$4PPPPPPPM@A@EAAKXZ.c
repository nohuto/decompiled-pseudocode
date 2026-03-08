/*
 * XREFs of ?AddRef@CD3DSurface@@$4PPPPPPPM@A@EAAKXZ @ 0x18011BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DSurface::AddRef(__int64 a1)
{
  return CD3DSurface::AddRef((CD3DSurface *)(a1 - *(int *)(a1 - 4)));
}
