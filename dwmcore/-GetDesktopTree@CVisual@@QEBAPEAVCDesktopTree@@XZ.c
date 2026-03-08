/*
 * XREFs of ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18003A490
 * Callers:
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x1800AC200 (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801E7FA8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180225968 (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18003A594 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CDesktopTree *__fastcall CVisual::GetDesktopTree(CVisual *this)
{
  __int64 v1; // rbx
  CVisual *v2; // rdi
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CVisualTree *v4; // rsi

  v1 = 0LL;
  v2 = this;
  if ( this )
  {
    while ( 1 )
    {
      VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v2);
      v4 = VisualTreeNoRef;
      if ( VisualTreeNoRef )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 184LL))(VisualTreeNoRef) )
          break;
      }
      v2 = (CVisual *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        return (struct CDesktopTree *)v1;
    }
    return v4;
  }
  return (struct CDesktopTree *)v1;
}
