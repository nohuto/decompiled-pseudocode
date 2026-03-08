/*
 * XREFs of ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1801E41C0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1801DA42C (-FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType.c)
 */

void __fastcall CFSVPProvider::CheckForFullscreenVideoNotifications(CFSVPProvider *this)
{
  struct CCompositionSurfaceInfo *MajorityScreenContent; // rbx
  __int64 v3; // rax

  MajorityScreenContent = 0LL;
  if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
    && *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    MajorityScreenContent = (struct CCompositionSurfaceInfo *)COverlayContext::FindMajorityScreenContent(v3);
  }
  CFSVPProvider::CheckForMajorityScreenVideoNotificationsWithCompSurfInfo(this, MajorityScreenContent);
}
