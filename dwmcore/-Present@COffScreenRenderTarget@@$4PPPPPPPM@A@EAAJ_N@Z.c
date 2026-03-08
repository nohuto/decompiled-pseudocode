/*
 * XREFs of ?Present@COffScreenRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1801194D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::Present(__int64 a1)
{
  return COffScreenRenderTarget::Present((COffScreenRenderTarget *)(a1 - *(int *)(a1 - 4)));
}
