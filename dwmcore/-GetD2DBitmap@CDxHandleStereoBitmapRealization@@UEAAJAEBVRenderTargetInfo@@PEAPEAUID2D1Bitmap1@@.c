__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        struct CD2DBitmap **this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  CD2DBitmapCache *v4; // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int CachedBitmap; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  *a3 = 0LL;
  v4 = (CD2DBitmapCache *)(this - 71);
  v9 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(this - 71);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x6Au, 0LL);
  }
  else if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v4, *((unsigned int *)a2 + 3)) )
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v11 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CachedBitmap, 0x70u, 0LL);
  }
  else
  {
    v14 = CD2DBitmapCache::GetCachedBitmap((CD2DBitmapCache *)(this - 20), a2, a3, a4);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x76u, 0LL);
  }
  return v11;
}
