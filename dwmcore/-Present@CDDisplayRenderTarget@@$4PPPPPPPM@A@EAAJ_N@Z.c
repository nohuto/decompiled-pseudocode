/*
 * XREFs of ?Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180118910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::Present(__int64 a1, bool a2)
{
  return CDDisplayRenderTarget::Present((CDDisplayRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
