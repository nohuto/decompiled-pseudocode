__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  CD2DBitmapCache *v4; // r14
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int CachedBitmap; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  *a3 = 0LL;
  v4 = (CRenderTargetBitmap *)((char *)this - 240);
  v9 = CRenderTargetBitmap::ValidateRenderTargetInfo((CRenderTargetBitmap *)((char *)this - 240), a2);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA3u, 0LL);
  }
  else if ( *((_BYTE *)this - 96) )
  {
    LOBYTE(v11) = a4;
    v15 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, __int64))(*((_QWORD *)this - 15) + 72LL))(
            (char *)this - 120,
            a3,
            v11);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xADu, 0LL);
  }
  else
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v12 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CachedBitmap, 0xA9u, 0LL);
  }
  return v12;
}
