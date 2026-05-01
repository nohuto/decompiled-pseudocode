/*
 * XREFs of ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1802773F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019A5C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180019E58 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180276008 (--1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180276E50 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180277C14 (-StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::OnPearlRectChanged(SearchAppDesktopExperienceView *this)
{
  int v2; // eax
  WINBOOL v3; // edx
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"CortanaExperienceManager_PearlRectMayHaveChanged");
  *(_QWORD *)v6 = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v6);
  SearchAppDesktopExperienceView::NotifyTaskbarSearchBoxChanged((SearchAppDesktopExperienceView *)((char *)this - 16));
  v2 = SearchAppDesktopExperienceView::PositionCortanaWindow(
         (SearchAppDesktopExperienceView *)((char *)this - 16),
         1,
         0);
  v4 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v6,
      v3);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::~CortanaExperienceManager_PearlRectMayHaveChanged((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v6);
  return v4;
}
