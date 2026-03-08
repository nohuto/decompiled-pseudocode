/*
 * XREFs of ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8
 * Callers:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800C8F1C (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800C9100 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x18012CD90 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E52AC (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801E63B4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801E7DE8 (-Present@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801EA180 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F63E0 (-Present@CDDARenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ScheduleCompositionPass(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( g_pComposition )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pComposition + 82) + 32LL))(
             *((_QWORD *)g_pComposition + 82),
             a1,
             a2);
  return result;
}
