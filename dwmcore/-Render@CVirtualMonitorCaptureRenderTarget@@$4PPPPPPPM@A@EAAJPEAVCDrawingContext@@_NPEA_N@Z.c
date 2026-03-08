/*
 * XREFs of ?Render@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180119030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::Render(
        __int64 a1,
        struct CDrawingContext *a2,
        bool a3,
        bool *a4)
{
  return CVirtualMonitorCaptureRenderTarget::Render(
           (CVirtualMonitorCaptureRenderTarget *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3,
           a4);
}
