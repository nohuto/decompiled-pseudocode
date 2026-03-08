/*
 * XREFs of ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8
 * Callers:
 *     ?Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180119010 (-Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014ECC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180021FE0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C1C30 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800C1DCC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C1E14 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x180109AA0 (-IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180109ACC (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801EDD64 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // ebx
  bool *v5; // r12
  __int64 v8; // rsi
  __int64 v9; // r15
  char v10; // bl
  CComposeTop *v11; // rsi
  bool IsPrimaryMonitor; // r14
  bool IsCurrent; // al
  __int64 v14; // rcx
  __int64 v15; // r12
  struct IDeviceTarget *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  struct CVisualTree *v19; // rbx
  struct MilRectF *Bounds; // rax
  __int64 v21; // xmm1_8
  unsigned int v22; // r12d
  struct CVisualTree *v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD); // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // [rsp+20h] [rbp-B9h]
  COcclusionContext *v38; // [rsp+50h] [rbp-89h]
  __int128 v40; // [rsp+60h] [rbp-79h] BYREF
  __int128 v41; // [rsp+70h] [rbp-69h] BYREF
  __int64 v42; // [rsp+80h] [rbp-59h]
  _QWORD v43[3]; // [rsp+88h] [rbp-51h] BYREF
  int *v44; // [rsp+A0h] [rbp-39h] BYREF
  int v45; // [rsp+A8h] [rbp-31h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]

  v4 = 0;
  *a4 = 0;
  v5 = a4;
  if ( !*((_QWORD *)this - 34) )
    goto LABEL_21;
  v8 = *((_QWORD *)this - 32);
  if ( !v8 || *(int *)(*((_QWORD *)this - 54) + 1104LL) > 3 )
    goto LABEL_21;
  v9 = v8 + 104;
  v10 = 1;
  v11 = *(CComposeTop **)(v8 + 4744);
  if ( v11 && CComposeTop::HasNewContent(v11) )
  {
    IsPrimaryMonitor = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 34) + 24LL))(*((_QWORD *)this - 34));
  }
  else
  {
    v10 = 0;
    IsPrimaryMonitor = 0;
  }
  if ( CDirtyRegion::IsEmpty((CDirtyRegion *)v9) && !v10 )
    goto LABEL_18;
  CDirtyRegion::CalcOcclusion((CDirtyRegion *)v9);
  IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(v9 + 16));
  v15 = v14 & -(__int64)IsCurrent;
  v38 = (COcclusionContext *)v15;
  v16 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 34))(*((_QWORD *)this - 34));
  v17 = CDrawingContext::BeginFrame(
          a2,
          v16,
          (CRemoteRenderTarget *)((char *)this - 224),
          (const struct _D3DCOLORVALUE *)((char *)this - 324),
          0LL);
  v4 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xA2u, 0LL);
    goto LABEL_21;
  }
  if ( v15 )
  {
    v19 = (struct CVisualTree *)*((_QWORD *)this - 32);
    Bounds = (struct MilRectF *)CDirtyRegion::GetBounds(v9, (__int64)v43);
    v21 = *(_QWORD *)((char *)this - 140);
    v41 = *(_OWORD *)((char *)this - 156);
    v42 = v21;
    CDesktopTree::UpdateCVIRenderTargets(v19, (struct RenderTargetInfo *)&v41, Bounds);
  }
  v22 = 0;
  if ( !*(_DWORD *)(v9 + 2820) )
  {
LABEL_16:
    if ( v11 )
    {
      v32 = CRemoteRenderTarget::RenderComposeTop(
              (CRemoteRenderTarget *)((char *)this - 448),
              a2,
              v11,
              *(_BYTE *)(v9 + 4420));
      v4 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xD2u, 0LL);
        goto LABEL_36;
      }
    }
    v5 = a4;
    IsPrimaryMonitor = CRemoteRenderTarget::IsPrimaryMonitor((CRemoteRenderTarget *)((char *)this - 304));
LABEL_18:
    v27 = CDrawingContext::EndFrame(a2);
    v4 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xDCu, 0LL);
    }
    else if ( *((_BYTE *)this - 56) || IsPrimaryMonitor )
    {
      *v5 = 1;
    }
    goto LABEL_21;
  }
  while ( 1 )
  {
    v45 = 0;
    v43[0] = 0LL;
    v43[1] = 0LL;
    v44 = &v45;
    CDirtyRegion::GetOptimizedRect(
      v9,
      &v40,
      v22,
      (float *)this - 60,
      (FastRegion::CRegion *)&v44,
      (CRemoteRenderTarget *)((char *)this - 224),
      0,
      v43,
      0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v40) )
      goto LABEL_15;
    v42 = 0LL;
    v23 = (struct CVisualTree *)*((_QWORD *)this - 44);
    v37 = *((_BYTE *)this - 308) != 0 ? 2 : 0;
    v41 = v40;
    v24 = CDrawingContext::DrawVisualTree(a2, v23, (float *)&v41, v38, v37, 0, 0LL);
    v4 = v24;
    if ( v24 < 0 )
      break;
    CRemoteRenderTarget::NotifyRenderedRect((char *)this - 448, &v40, 0LL);
    v26 = FastRegion::CRegion::Union(
            (const struct FastRegion::Internal::CRgnData **)this - 16,
            (const struct FastRegion::Internal::CRgnData **)&v44);
    if ( v26 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v26, retaddr);
    if ( v11 )
    {
      v30 = CComposeTop::SubtractOverdraw((__int64)v11);
      v4 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC7u, 0LL);
        goto LABEL_32;
      }
    }
LABEL_15:
    FastRegion::CRegion::FreeMemory((void **)&v44);
    if ( ++v22 >= *(_DWORD *)(v9 + 2820) )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xBBu, 0LL);
LABEL_32:
  FastRegion::CRegion::FreeMemory((void **)&v44);
LABEL_36:
  CDrawingContext::EndFrame(a2);
LABEL_21:
  if ( g_LockAndReadTarget )
  {
    v34 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 34);
    if ( v34 )
    {
      v35 = (**v34)(v34);
      v36 = *(int *)(*(_QWORD *)(v35 + 8) + 16LL) + v35 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v36 + 24LL))(
        v36,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return v4;
}
