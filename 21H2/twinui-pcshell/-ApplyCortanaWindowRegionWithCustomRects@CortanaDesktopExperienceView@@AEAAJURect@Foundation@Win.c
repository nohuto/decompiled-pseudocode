/*
 * XREFs of ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x180279A58
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027E518 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18001B450 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18027A398 (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(
        CortanaDesktopExperienceView *a1,
        float *a2)
{
  HMONITOR v4; // r14
  unsigned int v5; // ebx
  HMONITOR v6; // r8
  int v7; // ebp
  unsigned int v8; // esi
  HMONITOR v9; // r8
  HMONITOR v10; // r8
  int v11; // ebx
  HMONITOR v12; // r8
  int v13; // eax
  HRGN RectRgn; // rax
  __int64 v15; // r8
  HGDIOBJ v16; // rbx
  unsigned int v17; // edi
  int v18; // eax
  HGDIOBJ ho; // [rsp+20h] [rbp-48h] BYREF
  RECT rc; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &rc);
  v4 = MonitorFromRect(&rc, 0);
  ho = 0LL;
  v5 = (int)a2[1];
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v5 + (int)a2[3]), (__int64)v4, v6);
  v8 = (int)*a2;
  LODWORD(a2) = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)(v8 + (int)a2[2]),
                  (__int64)v4,
                  v9);
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v5, (__int64)v4, v10);
  v13 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, (__int64)v4, v12);
  RectRgn = CreateRectRgn(v13, v11, (int)a2, v7);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    &ho,
    RectRgn);
  v16 = ho;
  if ( ho )
  {
    LOBYTE(v15) = 1;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, HGDIOBJ, __int64))(**((_QWORD **)a1 + 21) + 144LL))(
            *((_QWORD **)a1 + 21),
            ho,
            v15);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x878,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v18);
    v17 = 0;
  }
  else
  {
    v17 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x876,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
  }
  if ( v16 )
    DeleteObject(v16);
  return v17;
}
