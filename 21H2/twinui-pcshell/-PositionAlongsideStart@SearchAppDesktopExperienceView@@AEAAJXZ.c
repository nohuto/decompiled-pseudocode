/*
 * XREFs of ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180075778
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180073520 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180277670 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800757C4 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180075900 (-GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::PositionAlongsideStart(SearchAppDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v6; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v4 = 1644LL;
  }
  else
  {
    ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v6);
    if ( ImmersiveLauncherMonitor >= 0 )
      return 0LL;
    v4 = 1645LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)ImmersiveLauncherMonitor);
  return (unsigned int)ImmersiveLauncherMonitor;
}
