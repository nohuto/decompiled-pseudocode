/*
 * XREFs of ?EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C267C
 * Callers:
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C26F0 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetEdgeUIManager@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800C2EA4 (-GetEdgeUIManager@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@.c)
 *     ?GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800C301C (-GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::EnsureImmersiveShell(ShellFeedsDesktopExperienceView *this)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 88);
  if ( *((_QWORD *)this + 11) )
    return 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               ppv);
  v3 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C3,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)Instance);
  return v3;
}
