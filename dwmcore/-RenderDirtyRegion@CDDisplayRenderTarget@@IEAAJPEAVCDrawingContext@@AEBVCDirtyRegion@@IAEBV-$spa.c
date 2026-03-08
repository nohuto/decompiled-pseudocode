/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014ECC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180033754 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180073854 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18008B894 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18008D764 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091250 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5890 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x18012CB9A (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x18012CC5C (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D3EA (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E5208 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801F3E14 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x1801F3E68 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v8; // r14d
  unsigned int v10; // ebx
  bool IsCurrent; // al
  __int64 v12; // rcx
  struct MilRectF *v13; // r8
  char v14; // r9
  COcclusionContext *v15; // r13
  struct CVisualTree *v16; // rcx
  __int64 v17; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  __int64 v19; // rcx
  CDirectFlipInfo *v20; // rbx
  int DeviceTarget; // eax
  __int64 v22; // rcx
  char *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  float v28; // xmm1_4
  int v29; // eax
  __int64 v30; // rcx
  char v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r9
  float v34; // xmm6_4
  float v35; // xmm7_4
  float v36; // xmm8_4
  float v37; // xmm9_4
  unsigned int v39; // [rsp+28h] [rbp-A9h]
  char v40; // [rsp+58h] [rbp-79h]
  struct IDeviceTarget *v41; // [rsp+60h] [rbp-71h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-69h]
  __int64 v43; // [rsp+70h] [rbp-61h]
  __int64 v44; // [rsp+78h] [rbp-59h] BYREF
  float v45; // [rsp+80h] [rbp-51h]
  float v46; // [rsp+84h] [rbp-4Dh]
  __int128 v47; // [rsp+88h] [rbp-49h] BYREF
  __int64 v48; // [rsp+98h] [rbp-39h]

  v42 = a5;
  v8 = 0;
  v43 = a6;
  v10 = 0;
  IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a3 + 16));
  v40 = 0;
  v15 = (COcclusionContext *)(v12 & -(__int64)IsCurrent);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0xqq_EventWriteTransfer(v12, (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a2, 0, v14);
    v13 = (struct MilRectF *)(a1 + 18164);
  }
  if ( v15 )
  {
    *((_DWORD *)v15 + 300) = 0x7FFFFFFF;
    v16 = *(struct CVisualTree **)(a1 + 176);
    v17 = *(_QWORD *)(a1 + 18460);
    v47 = *(_OWORD *)(a1 + 18444);
    v48 = v17;
    CDesktopTree::UpdateCVIRenderTargets(v16, (struct RenderTargetInfo *)&v47, v13);
  }
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode(a1 + 192);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*(CDirectFlipInfo **)(a1 + 11360)) )
      return v10;
  }
  else
  {
    if ( EffectiveDirectFlipMode == 2 )
    {
      dword_1803E29F4 |= 2u;
      return v10;
    }
    v19 = (unsigned int)(EffectiveDirectFlipMode - 3);
    if ( (unsigned int)v19 <= 1 )
    {
      v20 = *(CDirectFlipInfo **)(a1 + 11360);
      *((_DWORD *)v15 + 300) = CDirectFlipInfo::GetCutoffZ(v20, *(const struct CVisualTree **)(a1 + 96));
      v41 = 0LL;
      wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)&v41);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v20, &v41);
      v10 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, DeviceTarget, 0x2CFu, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((RenderTargetInfo *)(a1 + 18444)) )
        {
          v23 = (char *)v41 + *(int *)(*((_QWORD *)v41 + 1) + 12LL) + 8;
          v24 = (**(__int64 (__fastcall ***)(char *, __int64 *))v23)(v23, &v44);
          if ( IsDXGIColorSpaceHDR(*(_DWORD *)(v24 + 8)) )
            (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v41 + 40LL))(v41);
        }
        v25 = CDrawingContext::PushRenderTarget(a2, v41);
        v10 = v25;
        if ( v25 >= 0 )
        {
          v40 = 1;
          wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v41);
          goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x2D7u, 0LL);
      }
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v41);
      return v10;
    }
  }
LABEL_19:
  if ( *(_BYTE *)(a3 + 4420) )
  {
    if ( *(_BYTE *)(a1 + 11217) )
    {
LABEL_27:
      v31 = 0;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(a1 + 18412) )
    {
      v27 = *(_DWORD *)(a1 + 104);
      v44 = 0LL;
      v28 = (float)*(int *)(a1 + 108);
      v45 = (float)v27;
      v46 = v28;
      v29 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v44, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      v10 = v29;
      if ( v29 < 0 )
      {
        v39 = 751;
        goto LABEL_43;
      }
      v10 = (**((__int64 (__fastcall ***)(__int64, const struct _D3DCOLORVALUE *))a2 + 2))(
              (__int64)a2 + 16,
              &stru_180383220);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( (v10 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v10, 0x2F7u, 0LL);
        goto LABEL_38;
      }
      CDDisplayRenderTarget::NotifyRenderedRect(a1, 0LL, 0);
    }
  }
  if ( *(_BYTE *)(a1 + 11217) )
    goto LABEL_27;
  v31 = 1;
  if ( !*(_BYTE *)(a1 + 18414) )
    goto LABEL_27;
LABEL_28:
  if ( !*(_DWORD *)(a3 + 2820) )
  {
LABEL_36:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v19, (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a2);
    goto LABEL_38;
  }
  while ( 1 )
  {
    CDirtyRegion::GetOptimizedRect(
      a3,
      &v44,
      v8,
      (float *)(a1 + 18164),
      0LL,
      (CMILMatrix *)(a1 + (*(_BYTE *)(a1 + 11217) != 0 ? 18344LL : 18208LL)),
      v31,
      v42,
      0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v44) )
      goto LABEL_35;
    v34 = v46;
    v35 = v45;
    v36 = *((float *)&v44 + 1);
    LODWORD(v37) = v44;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(v19, v32, v8, v33, v44, SBYTE4(v44), SLOBYTE(v45), SLOBYTE(v46));
    v48 = 0LL;
    *(_QWORD *)&v47 = __PAIR64__(LODWORD(v36), LODWORD(v37));
    *((_QWORD *)&v47 + 1) = __PAIR64__(LODWORD(v34), LODWORD(v35));
    dword_1803E2A08 += (int)(float)((float)(v35 - v37) * (float)(v34 - v36));
    v29 = CDrawingContext::DrawVisualTree(
            a2,
            *(struct CVisualTree **)(a1 + 96),
            (float *)&v47,
            v15,
            *(_BYTE *)(a1 + 140) != 0 ? 2 : 0,
            v31,
            0LL);
    v10 = v29;
    if ( v29 < 0 )
      break;
    CDDisplayRenderTarget::NotifyRenderedRect(a1, (struct MilRectF *)&v44, 0);
    if ( v43 )
    {
      v29 = CComposeTop::SubtractOverdraw(v43);
      v10 = v29;
      if ( v29 < 0 )
      {
        v39 = 813;
        goto LABEL_43;
      }
    }
LABEL_35:
    if ( ++v8 >= *(_DWORD *)(a3 + 2820) )
      goto LABEL_36;
  }
  v39 = 803;
LABEL_43:
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v29, v39, 0LL);
LABEL_38:
  if ( v40 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return v10;
}
