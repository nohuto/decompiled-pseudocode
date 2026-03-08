/*
 * XREFs of ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1801DA42C
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1801E41C0 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18012B918 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::FindMajorityScreenContent(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v5; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v6; // rsi

  v2 = *(_QWORD *)(a1 + 11168);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3) == 1 )
        return *(_QWORD *)(*(_QWORD *)(a1 + 11168) + 16LL);
    }
  }
  v5 = *(const struct COverlayContext::OverlayPlaneInfo **)(a1 + 7304);
  v6 = *(const struct COverlayContext::OverlayPlaneInfo **)(a1 + 7312);
  while ( v5 != v6 )
  {
    if ( COverlayContext::IsFullscreen((__int64 **)a1, v5)
      && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 2) + 88LL))(*((_QWORD *)v5 + 2)) == 1 )
    {
      return *((_QWORD *)v5 + 2);
    }
    v5 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v5 + 224);
  }
  return 0LL;
}
