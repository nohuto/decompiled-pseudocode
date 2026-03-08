/*
 * XREFs of ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034D74
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034C80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z @ 0x180034F1C (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800351FC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180035670 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800356D0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180035750 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800357D0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003BC0C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800E716C (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

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
