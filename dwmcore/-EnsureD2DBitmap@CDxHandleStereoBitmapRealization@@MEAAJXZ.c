__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(struct CD2DBitmap **this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  CD2DBitmap *v7; // rcx
  int SubResourceBitmap; // eax
  __int64 v9; // rcx

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)this);
  v5 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v2, 0xB4u, 0LL);
    goto LABEL_7;
  }
  v6 = this + 50;
  if ( !this[50] )
  {
    v7 = this[47];
    *v6 = 0LL;
    SubResourceBitmap = CD2DBitmap::CreateSubResourceBitmap(v7, v3, this + 50);
    v5 = SubResourceBitmap;
    if ( SubResourceBitmap >= 0 )
    {
      CD2DBitmapCache::InitializeCache(
        (CD2DBitmapCache *)(this + 51),
        (struct ID2DBitmapCacheSource *)((*v6 + 96LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v6 >> 64)));
      return v5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, SubResourceBitmap, 0xBEu, 0LL);
LABEL_7:
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)this);
  }
  return v5;
}
