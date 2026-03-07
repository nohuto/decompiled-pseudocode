__int64 __fastcall CDDisplayRenderTarget::Render(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  char *v4; // rbx
  int v8; // esi
  __int64 v9; // rax
  struct CComposeTop *v10; // r15
  __int64 v11; // r14
  CDDisplaySwapChain *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char v15; // r12
  unsigned __int8 v16; // al
  float *v17; // r11
  unsigned int IntersectingRectCount; // r12d
  unsigned int i; // r15d
  gsl::details *v20; // rax
  struct IDeviceTarget *CurrentBackBuffer; // rax
  int v22; // eax
  __int64 v23; // rcx
  gsl::details *v24; // rax
  __int64 v25; // r9
  CDDisplayRenderTarget *v26; // r12
  int v27; // eax
  __int64 v28; // rcx
  char v29; // al
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  CLegacySwapChain *v34; // rcx
  struct IDeviceTarget *v35; // rax
  __int64 v36; // rcx
  char v38; // [rsp+51h] [rbp-38h] BYREF
  _WORD v39[11]; // [rsp+52h] [rbp-37h] BYREF
  __int64 v40; // [rsp+68h] [rbp-21h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-19h] BYREF
  bool *v42; // [rsp+80h] [rbp-9h]
  _BYTE v43[16]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v44[2]; // [rsp+98h] [rbp+Fh] BYREF

  v4 = 0LL;
  v42 = a4;
  *a4 = 0;
  v8 = 0;
  if ( !*((_QWORD *)this - 2317) )
    goto LABEL_51;
  v9 = *((_QWORD *)this - 2318);
  if ( !v9 || !a3 && *((_BYTE *)this - 54) )
    goto LABEL_51;
  v10 = *(struct CComposeTop **)(v9 + 4744);
  v11 = v9 + 104;
  if ( v10 && CComposeTop::HasNewContent(*(CComposeTop **)(v9 + 4744)) )
  {
    v12 = (CDDisplaySwapChain *)*((_QWORD *)this - 2317);
    HIBYTE(v39[0]) = 1;
    CDDisplaySwapChain::CopyFrontToBackBuffer(v12);
  }
  else
  {
    HIBYTE(v39[0]) = 0;
  }
  v40 = 0LL;
  v38 = 0;
  LOBYTE(v39[0]) = 0;
  *(_OWORD *)&v39[3] = 0LL;
  v13 = COverlayContext::ApplyConfiguration(
          (CDDisplayRenderTarget *)((char *)this - 18528),
          v11,
          (__int64)&v39[3],
          &v38,
          v39);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x171u, 0LL);
    goto LABEL_42;
  }
  *((_BYTE *)this - 55) |= LOBYTE(v39[0]);
  v15 = v38 | a3;
  QueryPerformanceCounter(&PerformanceCount);
  v16 = CTargetStats::Ready(
          (CDDisplayRenderTarget *)((char *)this - 240),
          (CDDisplayRenderTarget *)((char *)this - 304),
          PerformanceCount.QuadPart,
          *((struct IOverlaySwapChain **)this - 2317));
  v17 = (float *)((char *)this - 556);
  if ( !v15 && !v16 )
    goto LABEL_61;
  if ( *((_BYTE *)this - 7218) )
  {
    CDirtyRegion::ForceFullDirty((CDirtyRegion *)v11);
    v17 = (float *)((char *)this - 556);
    *((_BYTE *)this - 7218) = 0;
  }
  IntersectingRectCount = CDirtyRegion::GetIntersectingRectCount(v11, v17);
  if ( !IntersectingRectCount && !HIBYTE(v39[0]) )
  {
LABEL_61:
    if ( CDirtyRegion::DoesIntersect(v11, v17) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
        McTemplateU0q_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&RENDERTARGET_RENDERSKIPPED,
          *((unsigned int *)this - 59));
      for ( i = 0; i < *(_DWORD *)(v11 + 2820); ++i )
      {
        v20 = gsl::span<CVisual const *,-1>::span<CVisual const *,-1>((gsl::details *)v43, (__int64 *)&v39[3]);
        CDirtyRegion::GetOptimizedRect(
          v11,
          v44,
          i,
          (float *)this - 139,
          (CDDisplayRenderTarget *)((char *)this - 160),
          0LL,
          0,
          v20,
          0LL);
      }
    }
LABEL_34:
    if ( *((_BYTE *)this - 7218) || **((_DWORD **)this - 20) )
      ScheduleCompositionPass(0, 1u);
    CFSVPProvider::CheckForFullscreenVideoNotifications((CDDisplayRenderTarget *)((char *)this - 88));
    if ( *(_QWORD *)&v39[3] )
      std::_Deallocate<16,0>(*(void **)&v39[3], (v40 - *(_QWORD *)&v39[3]) & 0xFFFFFFFFFFFFFFF8uLL);
    v29 = 0;
    if ( v8 >= 0 )
      goto LABEL_47;
    goto LABEL_45;
  }
  CurrentBackBuffer = CLegacySwapChain::GetCurrentBackBuffer(*((CLegacySwapChain **)this - 2317));
  v22 = CDrawingContext::BeginFrame(
          a2,
          CurrentBackBuffer,
          (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this - 7503) != 0 ? -376LL : -512LL)),
          (const struct _D3DCOLORVALUE *)((char *)this - 18596),
          (CDDisplayRenderTarget *)((char *)this - 18528));
  v8 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x18Du, 0LL);
    goto LABEL_42;
  }
  if ( !IntersectingRectCount )
  {
    v26 = (CDDisplayRenderTarget *)((char *)this - 18720);
LABEL_30:
    if ( v10 )
    {
      v30 = CDDisplayRenderTarget::RenderComposeTop(v26, a2, v10, *(_BYTE *)(v11 + 4420));
      v8 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1ABu, 0LL);
        goto LABEL_26;
      }
    }
    v32 = CDrawingContext::EndFrame(a2);
    v8 = v32;
    if ( v32 >= 0 )
      goto LABEL_34;
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1AFu, 0LL);
LABEL_42:
    if ( *(_QWORD *)&v39[3] )
      std::_Deallocate<16,0>(*(void **)&v39[3], (v40 - *(_QWORD *)&v39[3]) & 0xFFFFFFFFFFFFFFF8uLL);
    v29 = 0;
    goto LABEL_45;
  }
  v24 = gsl::span<CVisual const *,-1>::span<CVisual const *,-1>((gsl::details *)v44, (__int64 *)&v39[3]);
  v25 = IntersectingRectCount;
  v26 = (CDDisplayRenderTarget *)((char *)this - 18720);
  v27 = CDDisplayRenderTarget::RenderDirtyRegion((char *)this - 18720, a2, v11, v25, v24, v10);
  v8 = v27;
  if ( v27 >= 0 )
    goto LABEL_30;
  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1A1u, 0LL);
LABEL_26:
  if ( *(_QWORD *)&v39[3] )
    std::_Deallocate<16,0>(*(void **)&v39[3], (v40 - *(_QWORD *)&v39[3]) & 0xFFFFFFFFFFFFFFF8uLL);
  v29 = 1;
LABEL_45:
  *((_BYTE *)this - 56) = 0;
  if ( v29 )
    CDrawingContext::EndFrame(a2);
LABEL_47:
  if ( *((_BYTE *)this - 56)
    || *((_BYTE *)this - 55)
    || COverlayContext::NeedsPresent((CDDisplayRenderTarget *)((char *)this - 18528)) )
  {
    *v42 = 1;
  }
LABEL_51:
  if ( g_LockAndReadTarget )
  {
    v34 = (CLegacySwapChain *)*((_QWORD *)this - 2317);
    if ( v34 )
    {
      v35 = CLegacySwapChain::GetCurrentBackBuffer(v34);
      if ( a2 )
        v4 = (char *)a2 + 24;
      v36 = (__int64)v35 + *(int *)(*((_QWORD *)v35 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 24LL))(v36, v4);
    }
  }
  return (unsigned int)v8;
}
