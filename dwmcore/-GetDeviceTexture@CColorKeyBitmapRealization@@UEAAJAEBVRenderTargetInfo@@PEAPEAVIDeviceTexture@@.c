__int64 __fastcall CColorKeyBitmapRealization::GetDeviceTexture(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  int CachedTexture; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  CachedTexture = CD2DBitmapCache::GetCachedTexture((CColorKeyBitmapRealization *)((char *)this - 152), a2, a3, a4);
  v6 = CachedTexture;
  if ( CachedTexture < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CachedTexture, 0x8Eu, 0LL);
  return v6;
}
