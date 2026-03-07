__int64 __fastcall CVirtualMonitorCaptureRenderTarget::Render(
        LARGE_INTEGER *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  return CCaptureRenderTarget::Render(this - 10, a2, a3, a4);
}
