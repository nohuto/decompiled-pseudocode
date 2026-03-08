/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020BD4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E6D30 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801E8770 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801EAAB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EE3F8 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F6508 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008C568 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  CDrawingContext::PopAllStacks(this);
  if ( *((_QWORD *)this + 4) )
  {
    v4 = CDrawingContext::PopRenderTargetInternal(this, 1);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x143u, 0LL);
  }
  v6 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) == 2 )
    {
      *(_QWORD *)(v6 + 1496) = GetCurrentFrameId() + 5;
      ScheduleCompositionPass(1000LL, 0x20000LL);
    }
    CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 428) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
      v3,
      1LL,
      v8);
  return v2;
}
