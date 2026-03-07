__int64 __fastcall CWICBitmapRealization::GetD2DBitmap(
        CWICBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CD2DBitmapCache::GetCachedBitmap((CWICBitmapRealization *)((char *)this - 80), a2, a3, a4);
}
