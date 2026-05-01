/*
 * XREFs of ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180075720
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180073944 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180277000 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_ae759bb6a49203d43b2f683c42612f3e_::operator() @ 0x1800BF2C8 (_lambda_ae759bb6a49203d43b2f683c42612f3e_--operator().c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::GetSearchBoxHeight(
        SearchAppDesktopExperienceView *this,
        __int64 a2,
        HMONITOR a3)
{
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-20h]
  unsigned int *v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, a2, a3);
  *(_QWORD *)v6 = this;
  v7 = &v11;
  v8 = &v10;
  v4 = lambda_ae759bb6a49203d43b2f683c42612f3e_::operator()(v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x858,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  return v10;
}
