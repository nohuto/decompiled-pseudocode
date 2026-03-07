__int64 __fastcall CRenderTargetBitmapCache::GetCachedTargetBitmap(
        CRenderTargetBitmapCache *a1,
        const struct CResourceTag *a2,
        struct D2D_SIZE_U a3,
        __int64 a4,
        struct RenderTargetInfo *a5,
        int a6,
        unsigned __int64 *a7)
{
  unsigned __int64 *v7; // rdi
  unsigned int v8; // r15d
  int v9; // esi
  bool v12; // al
  struct RenderTargetInfo *v13; // r13
  CD2DBitmapCache *v14; // rbx
  CRenderTargetBitmap *v15; // rdi
  CD2DBitmapCache *v16; // rcx
  CD2DBitmapCache *v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  struct D2D_SIZE_U v22; // [rsp+80h] [rbp+50h] BYREF
  CD2DBitmapCache *v23; // [rsp+88h] [rbp+58h] BYREF

  v22 = a3;
  v7 = a7;
  v8 = 0;
  v23 = 0LL;
  v9 = a6;
  *a7 = 0LL;
  v12 = (v9 & 0xFFFFFFF9) == 0 && v9 != 6;
  v13 = a5;
  if ( CRenderTargetBitmapCache::FindMatchingBitmap(a1, &v22, *(enum DXGI_FORMAT *)a4, *((_BYTE *)a5 + 20), v12, &v23) )
  {
    v14 = v23;
    v15 = (CD2DBitmapCache *)((char *)v23 + 120);
    CRenderTargetBitmap::SetAlphaMode((CD2DBitmapCache *)((char *)v23 + 120), *(enum DXGI_ALPHA_MODE *)(a4 + 4));
    CRenderTargetBitmap::SetColorSpace(v15, *(enum DXGI_COLOR_SPACE_TYPE *)(a4 + 8));
    CRenderTargetBitmap::SetDisplayId(v15, *((unsigned int *)v13 + 2));
    CRenderTargetBitmap::SetSDRBoost(v15, *((float *)v13 + 4));
    CD2DBitmapCache::MarkFullInvalid(v14);
    v7 = a7;
  }
  else
  {
    if ( (v9 & 0xFFFFFFF9) != 0 || v9 == 6 )
    {
      v22.width = (v22.width + 63) & 0xFFFFFFC0;
      v22.height = (v22.height + 63) & 0xFFFFFFC0;
    }
    v18 = v23;
    v23 = 0LL;
    if ( v18 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v18);
    v19 = CD3DDevice::CreateScratchRenderTargetBitmap(
            (CD3DDevice *)(((unsigned __int64)a1 - 464) & -(__int64)(a1 != 0LL)),
            &v22,
            (const struct PixelFormatInfo *)a4,
            v13,
            &v23);
    v8 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x3Eu, 0LL);
      v16 = v23;
      goto LABEL_8;
    }
    v14 = v23;
  }
  CScratchRenderTargetBitmap::SetPurpose(v14, a2, (unsigned int)(v9 - 1) <= 1);
  if ( *((_BYTE *)v14 + 177) )
    ++*((_DWORD *)a1 + 10);
  v16 = 0LL;
  *v7 = ((unsigned __int64)v14 + 120) & -(__int64)(v14 != 0LL);
LABEL_8:
  if ( v16 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v16);
  return v8;
}
