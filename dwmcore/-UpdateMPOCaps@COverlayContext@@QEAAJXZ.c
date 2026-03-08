/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C8D58
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800C8744 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C8D30 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C71C0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801D9EF8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1801F3CD0 (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(CDirectFlipInfo **this)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  CDirectFlipInfo *v4; // rcx
  struct COverlayContext::OverlayPlaneInfo *v5; // rbx
  struct COverlayContext::OverlayPlaneInfo *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)*this + 176LL))(*this);
  if ( v3 )
  {
    v4 = this[1396];
    if ( v4 )
      CDirectFlipInfo::DisableIndependentFlip(v4);
    v5 = this[913];
    v6 = this[914];
    while ( v5 != v6 )
    {
      COverlayContext::EnsureIndependentFlipState((COverlayContext *)this, v5, 0);
      *((_DWORD *)v5 + 49) = 0;
      v5 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v5 + 224);
    }
    if ( !CDeviceManager::s_bXbox )
      this[1411] = (CDirectFlipInfo *)GetCurrentFrameId();
    *((_BYTE *)this + 11309) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 136LL))(v3, (char *)this + 44);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x673u, 0LL);
    }
    else
    {
      if ( this[914] != this[913] || *((_BYTE *)this + 11025) )
        *((_BYTE *)this + 11310) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_OVERLAY_GETCAPS,
          *((unsigned int *)this + 11),
          *((unsigned int *)this + 14));
    }
  }
  return v2;
}
