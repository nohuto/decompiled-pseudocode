__int64 __fastcall CLinearInterpolationLayer::PreRestoreState(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2)
{
  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  return 0LL;
}
