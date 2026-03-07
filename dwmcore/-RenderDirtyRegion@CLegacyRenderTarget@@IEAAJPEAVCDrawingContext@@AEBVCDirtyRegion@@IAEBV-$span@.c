__int64 __fastcall CLegacyRenderTarget::RenderDirtyRegion(
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
  COcclusionContext *v15; // r15
  struct CVisualTree *v16; // rcx
  __int64 v17; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  unsigned __int64 v19; // rcx
  char v20; // r12
  bool v21; // zf
  CMILMatrix *v22; // rdx
  int v23; // edx
  int v24; // ecx
  int v25; // r9d
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  int v30; // eax
  struct CVisualTree *v31; // rdx
  int v32; // eax
  unsigned int v33; // ecx
  CMILMatrix *v34; // rcx
  int *v35; // rax
  __int64 v36; // rcx
  const struct FastRegion::Internal::CRgnData **v37; // rcx
  int v39; // eax
  unsigned int v40; // ecx
  CDirectFlipInfo *v41; // rbx
  int DeviceTarget; // eax
  unsigned int v43; // ecx
  char *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  float v49; // xmm0_4
  int v50; // eax
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  _DWORD **v54; // rax
  int v55; // r9d
  int v56; // r10d
  _DWORD *v57; // rdx
  _DWORD *v58; // r8
  int v59; // eax
  char v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  float v62; // [rsp+70h] [rbp-90h]
  float v63; // [rsp+74h] [rbp-8Ch]
  struct IDeviceTarget *v64[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v65; // [rsp+88h] [rbp-78h] BYREF
  int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h]
  void *lpMem; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v71[18]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v8 = 0;
  v10 = 0;
  IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a3 + 16));
  v60 = 0;
  v15 = (COcclusionContext *)(v12 & -(__int64)IsCurrent);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0xqq_EventWriteTransfer(
      v12,
      (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      (_DWORD)a2,
      0,
      v14);
    v13 = (struct MilRectF *)(a1 + 18172);
  }
  if ( v15 )
  {
    *((_DWORD *)v15 + 300) = 0x7FFFFFFF;
    v16 = *(struct CVisualTree **)(a1 + 168);
    v17 = *(_QWORD *)(a1 + 18476);
    v68 = *(_OWORD *)(a1 + 18460);
    v69 = v17;
    CDesktopTree::UpdateCVIRenderTargets(v16, (struct RenderTargetInfo *)&v68, v13);
  }
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode(a1 + 200);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*(CDirectFlipInfo **)(a1 + 11368)) )
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
    if ( (unsigned int)v19 < 2 )
    {
      v41 = *(CDirectFlipInfo **)(a1 + 11368);
      *((_DWORD *)v15 + 300) = CDirectFlipInfo::GetCutoffZ(v41, *(const struct CVisualTree **)(a1 + 96));
      v64[0] = 0LL;
      wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v64);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v41, v64);
      v10 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, DeviceTarget, 0x2A9u, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((RenderTargetInfo *)(a1 + 18460)) )
        {
          v44 = (char *)v64[0] + *(int *)(*((_QWORD *)v64[0] + 1) + 12LL) + 8;
          v45 = (**(__int64 (__fastcall ***)(char *, __int64 *))v44)(v44, &v61);
          if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v45 + 8)) )
            (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v64[0] + 40LL))(v64[0]);
        }
        v46 = CDrawingContext::PushRenderTarget(a2, v64[0]);
        v10 = v46;
        if ( v46 >= 0 )
        {
          v60 = 1;
          wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v64);
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x2B1u, 0LL);
      }
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v64);
      return v10;
    }
  }
LABEL_8:
  if ( *(_BYTE *)(a3 + 4420) )
  {
    if ( *(_BYTE *)(a1 + 11225) )
    {
LABEL_11:
      v20 = 0;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(a1 + 18420) )
    {
      v48 = *(_DWORD *)(a1 + 104);
      v61 = 0LL;
      v49 = (float)v48;
      v50 = *(_DWORD *)(a1 + 108);
      v62 = v49;
      v63 = (float)v50;
      v51 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v61, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      v10 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x2C8u, 0LL);
        goto LABEL_29;
      }
      v10 = (**((__int64 (__fastcall ***)(__int64, const struct _D3DCOLORVALUE *))a2 + 2))(
              (__int64)a2 + 16,
              &stru_180383220);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( (v10 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v10, 0x2D0u, 0LL);
        goto LABEL_29;
      }
      CLegacyRenderTarget::NotifyRenderedRect(a1, 0LL, 0LL);
      v54 = *(_DWORD ***)(a1 + 18656);
      if ( v54 )
      {
        v55 = *(_DWORD *)(a1 + 104);
        v56 = *(_DWORD *)(a1 + 108);
        if ( v55 <= 0 || v56 <= 0 )
        {
          **v54 = 0;
        }
        else
        {
          v57 = *v54;
          v58 = *v54 + 7;
          *(_QWORD *)v57 = 2LL;
          *v58 = 0;
          v19 = (unsigned __int64)(v57 + 3);
          v58[1] = v55;
          v57[2] = v55;
          v57[4] = (_DWORD)v58 - ((_DWORD)v57 + 12);
          v57[3] = 0;
          v57[5] = v56;
          v57[6] = (_DWORD)v58 - ((_DWORD)v57 + 20) + 8;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 11225) )
    goto LABEL_11;
  v20 = 1;
  if ( !*(_BYTE *)(a1 + 18422) )
    goto LABEL_11;
LABEL_12:
  if ( !*(_DWORD *)(a3 + 2820) )
  {
LABEL_27:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v19, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, a2);
    goto LABEL_29;
  }
  while ( 1 )
  {
    v71[0] = 0;
    v21 = *(_BYTE *)(a1 + 11225) == 0;
    v22 = (CMILMatrix *)(a1 + 18216);
    lpMem = v71;
    if ( !v21 )
      v22 = (CMILMatrix *)(a1 + 18352);
    CDirtyRegion::GetOptimizedRect(
      a3,
      &v61,
      v8,
      (float *)(a1 + 18172),
      (FastRegion::CRegion *)((unsigned __int64)&lpMem & -(__int64)(*(_QWORD *)(a1 + 18656) != 0LL)),
      v22,
      v20,
      a5,
      0LL);
    v26 = v62;
    LODWORD(v27) = v61;
    if ( v62 <= *(float *)&v61 )
      goto LABEL_24;
    v28 = v63;
    v29 = *((float *)&v61 + 1);
    if ( v63 <= *((float *)&v61 + 1) )
      goto LABEL_24;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(v24, v23, v8, v25, v61, SBYTE4(v61), SLOBYTE(v62), SLOBYTE(v63));
    dword_1803E2A08 += (int)(float)((float)(v26 - v27) * (float)(v28 - v29));
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1);
    v31 = *(struct CVisualTree **)(a1 + 96);
    v66 = 0;
    v67 = 0;
    *(_QWORD *)&v65 = __PAIR64__(LODWORD(v29), LODWORD(v27));
    *((_QWORD *)&v65 + 1) = __PAIR64__(LODWORD(v28), LODWORD(v26));
    v32 = CDrawingContext::DrawVisualTree(a2, v31, (float *)&v65, v15, v30, v20, 0LL);
    v10 = v32;
    if ( v32 < 0 )
      break;
    v21 = *(_BYTE *)(a1 + 11225) == 0;
    v34 = (CMILMatrix *)(a1 + 18216);
    v65 = 0LL;
    *(_OWORD *)v64 = 0LL;
    if ( !v21 )
      v34 = (CMILMatrix *)(a1 + 18352);
    CMILMatrix::Transform2DBoundsHelper<0>(v34, (struct MilRectF *)&v61);
    v35 = PixelAlign((int *)&v68, (float *)v64);
    v36 = *(_QWORD *)(a1 + 184);
    v65 = *(_OWORD *)v35;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v36 + 16LL))(v36, &v65);
    v37 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 18656);
    *(_BYTE *)(a1 + 18700) = 1;
    if ( v37 )
    {
      v59 = FastRegion::CRegion::Union(v37, (const struct FastRegion::Internal::CRgnData **)&lpMem);
      if ( v59 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v59, retaddr);
    }
    if ( a6 )
    {
      v39 = CComposeTop::SubtractOverdraw(a6);
      v10 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x30Cu, 0LL);
        goto LABEL_61;
      }
    }
LABEL_24:
    v19 = (unsigned __int64)lpMem;
    if ( v71 != lpMem )
      operator delete(lpMem);
    if ( ++v8 >= *(_DWORD *)(a3 + 2820) )
      goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x2FDu, 0LL);
LABEL_61:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
LABEL_29:
  if ( v60 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return v10;
}
