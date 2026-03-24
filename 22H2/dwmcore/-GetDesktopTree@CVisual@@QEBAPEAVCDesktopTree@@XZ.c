/*
 * XREFs of ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18003DFB4
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800D0F14 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018664C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18003E01C (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
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
        if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 200LL))(VisualTreeNoRef) )
          break;
      }
      v2 = (CVisual *)*((_QWORD *)v2 + 10);
      if ( !v2 )
        return (struct CDesktopTree *)v1;
    }
    return v4;
  }
  return (struct CDesktopTree *)v1;
}
