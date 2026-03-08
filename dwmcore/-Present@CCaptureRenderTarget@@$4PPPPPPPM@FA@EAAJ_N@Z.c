/*
 * XREFs of ?Present@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJ_N@Z @ 0x1801188F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::Present(__int64 a1, bool a2)
{
  return CCaptureRenderTarget::Present((CCaptureRenderTarget *)(a1 - *(int *)(a1 - 4) - 80), a2);
}
