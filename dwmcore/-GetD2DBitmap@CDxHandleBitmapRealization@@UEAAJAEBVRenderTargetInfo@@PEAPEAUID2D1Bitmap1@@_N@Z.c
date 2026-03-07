__int64 __fastcall CDxHandleBitmapRealization::GetD2DBitmap(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  CD2DBitmapCache *v4; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int CachedBitmap; // eax
  __int64 v12; // rcx

  *a3 = 0LL;
  v4 = (CDxHandleBitmapRealization *)((char *)this - 464);
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 58) + 64LL))((char *)this - 464);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
  }
  else
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v10 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CachedBitmap, 0xC2u, 0LL);
  }
  return v10;
}
