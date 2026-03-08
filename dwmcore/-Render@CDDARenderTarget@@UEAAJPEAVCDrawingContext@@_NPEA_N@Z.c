/*
 * XREFs of ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F6508
 * Callers:
 *     ?Render@CDDARenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180119890 (-Render@CDDARenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180021FE0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002201C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800C1DCC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C1E64 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180129CB0 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x180129CEC (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CAAF4 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F635C (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDDARenderTarget::Render(
        CDDARenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        CComposition *a4)
{
  unsigned int v4; // ebx
  char v5; // si
  __int64 v8; // rax
  CComposeTop *v9; // r13
  CDirtyRegion *v10; // r12
  struct IDeviceTarget *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, gsl::details *, char *); // rbx
  gsl::details *DirtyRects; // rax
  int v17; // eax
  COcclusionContext *v18; // rbx
  unsigned int v19; // edi
  struct CVisualTree *v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  CComposition *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-B9h]
  COcclusionContext *v31; // [rsp+58h] [rbp-81h]
  _QWORD v33[2]; // [rsp+68h] [rbp-71h] BYREF
  __int128 v34; // [rsp+78h] [rbp-61h] BYREF
  __int128 v35; // [rsp+88h] [rbp-51h] BYREF
  int v36; // [rsp+98h] [rbp-41h]
  int v37; // [rsp+9Ch] [rbp-3Dh]
  int *v38; // [rsp+A0h] [rbp-39h] BYREF
  int v39; // [rsp+A8h] [rbp-31h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]

  v4 = 0;
  v5 = 0;
  if ( *((_QWORD *)this - 247) && *(int *)(*((_QWORD *)this - 265) + 1104LL) <= 3 )
  {
    v8 = *((_QWORD *)this - 246);
    v9 = *(CComposeTop **)(v8 + 4744);
    v10 = (CDirtyRegion *)(v8 + 104);
    if ( v9 && CComposeTop::HasNewContent(*(CComposeTop **)(v8 + 4744)) )
      CDirtyRegion::ForceFullDirty(v10);
    if ( !CDirtyRegion::IsEmpty(v10) )
    {
      **((_DWORD **)this - 16) = 0;
      v11 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 247))(*((_QWORD *)this - 247));
      v12 = CDrawingContext::BeginFrame(
              a2,
              v11,
              (CDDARenderTarget *)((char *)this - 1888),
              (const struct _D3DCOLORVALUE *)((char *)this - 2012),
              0LL);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB1u, 0LL);
        return v4;
      }
      *(_BYTE *)(*((_QWORD *)this - 265) + 1274LL) = 1;
      CComposition::HideDDAVisuals(*((CComposition **)this - 265));
      v14 = *((_QWORD *)this - 255);
      v15 = *(__int64 (__fastcall **)(__int64, gsl::details *, char *))(*(_QWORD *)v14 + 200LL);
      DirtyRects = CDirtyRegion::GetDirtyRects((__int64)v10, (gsl::details *)v33);
      v17 = v15(v14, DirtyRects, (char *)this - 1680);
      v18 = 0LL;
      v19 = 0;
      if ( v17 >= 0 )
        v18 = (CDDARenderTarget *)((char *)this - 1680);
      v31 = v18;
      if ( *((_DWORD *)v10 + 705) )
      {
        v5 = 1;
        while ( 1 )
        {
          v38 = &v39;
          v39 = 0;
          v33[0] = 0LL;
          v33[1] = 0LL;
          CDirtyRegion::GetOptimizedRect(
            (__int64)v10,
            &v34,
            v19,
            (float *)this - 483,
            (FastRegion::CRegion *)&v38,
            (CDDARenderTarget *)((char *)this - 1888),
            0,
            v33,
            v18);
          if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v34) )
          {
            v36 = 0;
            v37 = 0;
            v20 = (struct CVisualTree *)*((_QWORD *)this - 255);
            v30 = *((_BYTE *)this - 1996) != 0 ? 2 : 0;
            v35 = v34;
            v21 = CDrawingContext::DrawVisualTree(a2, v20, (float *)&v35, v18, v30, 0, 0LL);
            v4 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xD1u, 0LL);
              FastRegion::CRegion::FreeMemory((void **)&v38);
              goto LABEL_24;
            }
            CDDARenderTarget::NotifyRenderedRect((__int64)this - 2136, (struct MilRectF *)&v34);
            v23 = FastRegion::CRegion::Union(
                    (const struct FastRegion::Internal::CRgnData **)this - 16,
                    (const struct FastRegion::Internal::CRgnData **)&v38);
            if ( v23 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
            v18 = v31;
          }
          FastRegion::CRegion::FreeMemory((void **)&v38);
          if ( ++v19 >= *((_DWORD *)v10 + 705) )
            goto LABEL_21;
        }
      }
      v5 = 1;
LABEL_21:
      if ( v9 )
      {
        v24 = CComposeTop::FullRender(v9, (__int64)a2, (__int64)this - 1888);
        v4 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xE5u, 0LL);
LABEL_24:
          CDrawingContext::EndFrame(a2);
          goto LABEL_29;
        }
      }
      *((_BYTE *)this - 55) = *((_BYTE *)a2 + 8095);
      v27 = CDrawingContext::EndFrame(a2);
      v4 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xEBu, 0LL);
LABEL_29:
        CComposition::RestoreDDAVisuals(v26);
        *((_BYTE *)g_pComposition + 1274) = 0;
        return v4;
      }
    }
  }
  v26 = a4;
  *(_BYTE *)a4 = *((_BYTE *)this - 56);
  if ( v5 )
    goto LABEL_29;
  return v4;
}
