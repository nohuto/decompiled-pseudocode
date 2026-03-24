/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007A778
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003EA80 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180042FFC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180060630 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EC91C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECD04 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE094 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE35C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE720 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EEC74 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186994 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018AA60 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180257E24 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x18003425C (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180076964 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18007AAC0 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180083CA0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _Init_thread_footer @ 0x1800E7650 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E76B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x1801787F0 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IDeviceTarget *a2,
        const struct CMILMatrix *a3,
        const struct _D3DCOLORVALUE *a4,
        struct COverlayContext *a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  char *v13; // rcx
  _OWORD *v14; // rcx
  char v15; // al
  int v16; // eax
  __int64 v17; // rcx
  unsigned int i; // r14d
  __int64 v19; // rcx
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v21; // rcx
  CProcessAttributionManager *v22; // rdi
  __int64 v23; // rcx
  struct CProcessAttribution *v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // eax
  char v34; // si
  char *v35; // rcx
  float v36; // xmm6_4
  char *v37; // rcx
  _DWORD *v38; // rax
  int v39; // edx
  __int64 v40; // rcx
  float v41; // [rsp+30h] [rbp-50h]
  __int64 v42; // [rsp+50h] [rbp-30h] BYREF
  __int64 v43; // [rsp+58h] [rbp-28h]
  void *retaddr; // [rsp+A8h] [rbp+28h]
  struct CProcessAttribution *v45; // [rsp+B0h] [rbp+30h] BYREF
  char v46; // [rsp+B8h] [rbp+38h] BYREF

  *((_OWORD *)this + 370) = 0LL;
  *((_QWORD *)this + 742) = 0LL;
  v9 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int64 *))a2)(a2, &v42);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v9;
  *((_QWORD *)this + 9) = *(_QWORD *)(v9 + 16);
  v10 = CDrawingContext::PushRenderTarget(this, a2);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE4u, 0LL);
    return v12;
  }
  v13 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
  *((_BYTE *)this + 5958) = *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13) + 608) != 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
  {
    if ( !a3 || (v34 = 1, (unsigned __int8)CMILMatrix::IsIdentity<0>(a3)) )
      v34 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    {
      v35 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
      v36 = (float)*(int *)((**(__int64 (__fastcall ***)(char *, struct CProcessAttribution **))v35)(v35, &v45) + 4);
      v37 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
      v38 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, char *))v37)(v37, &v46);
      v41 = (float)(int)*v38;
      McTemplateU0ppffffubr6_EventWriteTransfer(
        *v38,
        v39,
        (_DWORD)this,
        (_DWORD)a2,
        0,
        0,
        SLOBYTE(v41),
        SLOBYTE(v36),
        v34 != 0 ? 0x44 : 0,
        (__int64)a3);
    }
  }
  v14 = (_OWORD *)((char *)this + 96);
  if ( a3 )
  {
    *v14 = *(_OWORD *)a3;
    *((_OWORD *)this + 7) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 8) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 9) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 40) = *((_DWORD *)a3 + 16);
    v15 = CMILMatrix::IsIdentity<0>(v14);
  }
  else
  {
    v15 = 1;
    *(_DWORD *)v14 = 1065353216;
    *(_QWORD *)((char *)this + 100) = 0LL;
    *(_QWORD *)((char *)this + 108) = 0LL;
    *(_QWORD *)((char *)this + 116) = 1065353216LL;
    *(_QWORD *)((char *)this + 124) = 0LL;
    *((_DWORD *)this + 33) = 0;
    *((_QWORD *)this + 17) = 1065353216LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = 1065353216;
    *((_WORD *)this + 80) = 32085;
  }
  *((_BYTE *)this + 5952) = v15;
  if ( a4 )
  {
    *((struct _D3DCOLORVALUE *)this + 5) = *(const struct _D3DCOLORVALUE *)&a4->r;
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 6) = a5;
  *((_DWORD *)this + 68) = 1;
  *(_QWORD *)((char *)this + 276) = 1LL;
  *(_QWORD *)((char *)this + 284) = 0LL;
  v42 = 0LL;
  LOBYTE(v43) = 1;
  v16 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 3448, &v42);
  v12 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x117u, 0LL);
    return v12;
  }
  for ( i = 0; i < *((_DWORD *)this + 156); ++i )
  {
    v40 = *(_QWORD *)(*((_QWORD *)this + 75) + 16LL * i);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  *((_DWORD *)this + 156) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 600, 16LL);
  v19 = *((_QWORD *)this + 88);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    *((_QWORD *)this + 88) = 0LL;
  }
  *((_DWORD *)this + 202) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 784, 8LL);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v21 = (unsigned int)tls_index;
  v22 = lpMem;
  *((_DWORD *)this + 1487) = 0;
  v23 = ThreadLocalStoragePointer[v21];
  *((_QWORD *)this + 435) = 0LL;
  if ( dword_18034B160 > *(_DWORD *)(v23 + 4) )
  {
    Init_thread_header(&dword_18034B160);
    if ( dword_18034B160 == -1 )
    {
      v33 = CProcessAttributionManager::CreateProcessAttribution(
              v22,
              -1,
              (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_1803475B0,
              0,
              &v45);
      if ( v33 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v33, retaddr);
      qword_180347560 = (__int64)v45;
      Init_thread_footer(&dword_18034B160);
    }
  }
  v24 = (struct CProcessAttribution *)qword_180347560;
  LODWORD(v42) = 11;
  v43 = 0LL;
  v25 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 376, &v42);
  if ( v25 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v25, retaddr);
  v27 = *((_DWORD *)this + 216);
  v45 = v24;
  v28 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v32 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v28 <= *((_DWORD *)this + 215) )
    {
      *(_QWORD *)(*((_QWORD *)this + 105) + 8LL * v27) = v24;
      *((_DWORD *)this + 216) = v28;
      return v12;
    }
    v30 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 840, 8LL, 1LL, &v45);
    v32 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC0u, 0LL);
  }
  if ( v32 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v32, retaddr);
  return v12;
}
