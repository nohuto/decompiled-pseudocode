/*
 * XREFs of ?GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800C32C0
 * Callers:
 *     ?BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING__@@@Z @ 0x1800C1F54 (-BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEdgeUIManager@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800C2E84 (-GetEdgeUIManager@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::GetStuckPlace(
        ShellFeedsDesktopExperienceView *this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3)
{
  int EdgeUIManager; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IEdgeUiManager *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  EdgeUIManager = ShellFeedsDesktopExperienceView::GetEdgeUIManager(this, a2, &v11);
  v7 = EdgeUIManager;
  if ( EdgeUIManager >= 0 )
  {
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v11 + 80LL))(
                      v11,
                      a3);
    v7 = EdgeUIManager;
    if ( EdgeUIManager >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 1064LL;
  }
  else
  {
    v8 = 1063LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)EdgeUIManager);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
