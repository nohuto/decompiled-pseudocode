/*
 * XREFs of ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180095830
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800947C0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180030748 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EE00 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18005B0A0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B614 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E83CC (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CRenderData::GetDrawListCacheForCommandRun(
        CRenderData *this,
        const struct IDeviceTarget **a2,
        struct CTreeData *a3,
        int a4,
        struct CDrawListCache **a5)
{
  int Cache; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  struct CDrawingContext *v10; // r8
  CDrawListCache *v11; // rdi
  CDrawListCache *v12; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  struct D2D_SIZE_F v16; // [rsp+30h] [rbp-18h] BYREF
  CDrawListCache *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( *((_BYTE *)a2 + 8171) )
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)a3 + 16), 2, a4, a2[4], &v17);
    v9 = Cache;
    if ( Cache >= 0 )
    {
      v10 = (struct CDrawingContext *)a2;
      v11 = v17;
      if ( CContent::IsDrawListCacheDirty(this, (__int64)v17, v10, &v16, 0LL) )
        CDrawListCache::Invalidate(v11);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Cache, 0x1C9u, 0LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v17);
    v14 = CDrawListCache::InternalCreate(1, &v17);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v11 = v17;
LABEL_5:
      v12 = 0LL;
      *a5 = v11;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1D3u, 0LL);
  }
  v12 = v17;
LABEL_6:
  if ( v12 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v12);
  return v9;
}
