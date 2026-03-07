int __fastcall CSectionBitmapRealization::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CSectionBitmapRealization::GetD2DBitmap((CSectionBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32), a2, a3, a4);
}
