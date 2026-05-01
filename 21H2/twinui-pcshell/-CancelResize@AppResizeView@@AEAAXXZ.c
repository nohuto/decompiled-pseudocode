/*
 * XREFs of ?CancelResize@AppResizeView@@AEAAXXZ @ 0x180481C20
 * Callers:
 *     ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x180482760 (-OnPointerCancel@AppResizeView@@UEAAJXZ.c)
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x180482790 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x180482880 (-OnKeyUp@AppResizeView@@UEAAJK@Z.c)
 * Callees:
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x180481C64 (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x180482060 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x180483098 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

void __fastcall AppResizeView::CancelResize(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
    AppResizeView::Cleanup(this);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, 0xFFFFFFFFLL);
  }
}
