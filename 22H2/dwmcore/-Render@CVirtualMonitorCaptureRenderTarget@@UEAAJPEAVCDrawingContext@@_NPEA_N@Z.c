/*
 * XREFs of ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EDC80
 * Callers:
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F5050 (-Render@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::Render(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  return CCaptureRenderTarget::Render((CVirtualMonitorCaptureRenderTarget *)((char *)this - 72), a2, a3, a4);
}
