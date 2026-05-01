/*
 * XREFs of ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x18040C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 */

void __fastcall CSnapAssistViewController::OnActivationLost(
        CSnapAssistViewController *this,
        struct IMultitaskingViewFrame *a2,
        HWND a3)
{
  if ( !*((_BYTE *)this + 168) || TabletModeHelpers::IsTabletMode(this, a2) )
    CMultitaskingViewControllerBase::_AnimateDismissView((CSnapAssistViewController *)((char *)this - 8), 0LL);
  else
    CMultitaskingViewControllerBase::_DismissView((CSnapAssistViewController *)((char *)this - 8));
}
