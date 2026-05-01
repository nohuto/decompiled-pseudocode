/*
 * XREFs of ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1801FFC20
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002D0A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180041D70 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::WindowShowEnterpriseIndicatorChanged(RTL_SRWLOCK *this, HWND a2)
{
  int ViewForHwnd; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 7, a2, &v8);
  if ( ViewForHwnd >= 0 )
  {
    v5 = CApplicationViewManager::RaiseApplicationViewChanged((__int64)&this[-7], (__int64)v8, 0x13u, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x357,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v5);
    ViewForHwnd = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ViewForHwnd;
}
