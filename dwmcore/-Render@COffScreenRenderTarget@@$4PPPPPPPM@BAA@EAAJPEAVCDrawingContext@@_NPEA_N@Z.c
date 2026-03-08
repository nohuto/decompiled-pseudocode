/*
 * XREFs of ?Render@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180119750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall COffScreenRenderTarget::Render(__int64 a1, struct CDrawingContext *a2, bool a3, bool *a4)
{
  return COffScreenRenderTarget::Render((COffScreenRenderTarget *)(a1 - *(int *)(a1 - 4) - 256), a2, a3, a4);
}
