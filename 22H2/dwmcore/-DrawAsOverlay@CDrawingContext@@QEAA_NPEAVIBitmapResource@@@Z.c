/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x180068A9C
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013674 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180093954 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800F0030 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x18001A2D4 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18003A708 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A850 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C638 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003EEB4 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18003F080 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D0E8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B594 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800BA600 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@@Z @ 0x180177358 (-GetSwapChainOverlayColor@CDrawingContext@@AEBA-AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEBA_NXZ @ 0x1801775B4 (-IsInLayer@CDrawingContext@@QEBA_NXZ.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801780BC (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEA_NPEAUtagRECT@@3@Z @ 0x18017C730 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEA_NPEAUtagRECT@@3@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CDrawingContext::DrawAsOverlay(COverlayContext **this, struct IBitmapResource *a2)
{
  char IsOverlayAssigned; // di
  __int64 v5; // rax
  int (__fastcall ***v6)(_QWORD, GUID *, struct ISwapChainRealization **); // rcx
  __int64 v7; // rcx
  bool IsNormalDesktopRender; // r15
  char *v10; // rcx
  COverlayContext *v11; // rdi
  __int64 v12; // rax
  struct _LUID *v13; // rbx
  const struct CVisual *CurrentVisual; // rax
  __int64 v15; // rdx
  void (__fastcall *v16)(struct IBitmapResource *, const struct CMILMatrix *); // rbx
  void (__fastcall ***v17)(_QWORD, struct tagRECT *); // rcx
  const struct CMILMatrix *TopByReference; // rax
  int v19; // eax
  __int64 v20; // rdx
  FastRegion::Internal::CRgnData *v21; // rcx
  bool v22; // [rsp+30h] [rbp-D0h] BYREF
  struct ISwapChainRealization *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[6]; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DCOLORVALUE v26; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v27; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT v28; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v29; // [rsp+B0h] [rbp-50h] BYREF
  FastRegion::Internal::CRgnData *v30[10]; // [rsp+C0h] [rbp-40h] BYREF
  const struct FastRegion::Internal::CRgnData *v31[10]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v23 = 0LL;
  IsOverlayAssigned = 0;
  if ( this[6] )
  {
    v5 = *(_QWORD *)a2;
    v24 = 0LL;
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(v5 + 48))(a2, &v24) >= 0 )
    {
      v6 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChainRealization **))(*(int *)(*(_QWORD *)(v24 + 8) + 4LL)
                                                                                 + v24
                                                                                 + 8);
      if ( (**v6)(v6, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v23) >= 0 )
      {
        IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender((CDrawingContext *)this);
        if ( !IsNormalDesktopRender
          || !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v23 + 56LL))(v23)
          || CDrawingContext::IsInLayer((CDrawingContext *)this)
          && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v23 + 64LL))(v23) )
        {
          goto LABEL_11;
        }
        v22 = 0;
        v11 = this[6];
        v27 = 0LL;
        v12 = *(_QWORD *)v23;
        v29 = 0LL;
        v13 = (struct _LUID *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct tagRECT *))(v12 + 32))(
                                v23,
                                &v28);
        CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
        IsOverlayAssigned = COverlayContext::IsOverlayAssigned(v11, CurrentVisual, *v13, &v22, &v27, &v29);
        if ( IsOverlayAssigned )
        {
          LOBYTE(v15) = IsNormalDesktopRender;
          (*(void (__fastcall **)(struct IBitmapResource *, __int64, COverlayContext *, __int64))(*(_QWORD *)a2 + 32LL))(
            a2,
            v15,
            this[7],
            1LL);
          v16 = *(void (__fastcall **)(struct IBitmapResource *, const struct CMILMatrix *))(*(_QWORD *)a2 + 40LL);
          v17 = (void (__fastcall ***)(_QWORD, struct tagRECT *))((char *)this[4]
                                                                + *(int *)(*((_QWORD *)this[4] + 1) + 12LL)
                                                                + 8);
          (**v17)(v17, &v28);
          TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 51));
          v16(a2, TopByReference);
          LODWORD(v25[0]) = 20;
          memset((char *)v25 + 4, 0, 36);
          HIDWORD(v25[1]) = 1;
          HIDWORD(v25[2]) = 1;
          if ( (int)CDrawingContext::PushRenderOptionsInternal(
                      (CDrawingContext *)this,
                      0LL,
                      (const struct MilRenderOptions *)v25,
                      1) >= 0 )
          {
            ++*((_DWORD *)this + 174);
            if ( !v22 )
            {
              v28 = v29;
              TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v28, &v27);
              CDrawingContext::GetSwapChainOverlayColor((CDrawingContext *)this, &v26, v23);
              CDrawingContext::RenderOverlayColor((struct CDrawingContext *)this);
            }
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v31, &v29);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v30, &v27);
            v19 = FastRegion::CRegion::Subtract(v30, v31);
            if ( v19 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v19, retaddr);
            FastRegion::Internal::CRgnData::BeginIterator(v30[0], (struct FastRegion::CRegion::Iterator *)v25);
            while ( v25[2] < v25[1] )
            {
              v27.top = *(_DWORD *)v25[2];
              v27.bottom = *(_DWORD *)(v25[2] + 8LL);
              v20 = 2 * LODWORD(v25[4]);
              v27.left = *(_DWORD *)(v25[3] + 4 * v20);
              v27.right = *(_DWORD *)(v25[3] + 4 * v20 + 4);
              CDrawingContext::RenderOverlayColor((struct CDrawingContext *)this);
              FastRegion::Internal::CRgnData::StepIterator(v21, (struct FastRegion::CRegion::Iterator *)v25);
            }
            --*((_DWORD *)this + 174);
            CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v30);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v31);
          }
        }
        else
        {
LABEL_11:
          IsOverlayAssigned = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v23 + 64LL))(v23);
        }
      }
    }
    if ( v23 )
    {
      v10 = (char *)v23 + *(int *)(*((_QWORD *)v23 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v24 )
    {
      v7 = *(int *)(*(_QWORD *)(v24 + 8) + 4LL) + v24 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return IsOverlayAssigned;
}
