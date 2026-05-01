/*
 * XREFs of ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x180482760
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x180481C20 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnPointerCancel(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
