/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180280EF0
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027E518 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180242D18 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18027A398 (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x18027B970 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18027BE54 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18027C110 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  CortanaFlightingHelpers *v4; // rcx
  char v5; // si
  bool v6; // al
  unsigned int v7; // ecx
  int v8; // edx
  LANGID ThreadUILanguage; // ax
  char v10; // r15
  HMONITOR v11; // rax
  int MonitorInformation; // eax
  unsigned int v14; // edi
  LONG left; // ecx
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 BorderFlagFromStuckEdge; // rdx
  __int64 v20; // rcx
  void (__fastcall *v21)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  bool v22; // [rsp+44h] [rbp-45h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-41h] BYREF
  int v24[4]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v28; // [rsp+90h] [rbp+7h] BYREF
  RECT rc; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v5 = 1;
  v6 = !IsSearchAndCortanaSplitEnabled()
    && (CortanaFlightingHelpers::IsWideQFDeltaEnabled(v4) || *((_BYTE *)this + 259));
  v7 = *((_DWORD *)this + 36);
  if ( v7 > 9 || (v8 = 582, !_bittest(&v8, v7)) || *((_BYTE *)this + 257) || v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 128LL))(
      *((_QWORD *)this + 21),
      0LL,
      0LL);
    v5 = 0;
  }
  else
  {
    ThreadUILanguage = GetThreadUILanguage();
    v10 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
    CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
    v11 = MonitorFromRect(&rc, 0);
    if ( !v11 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           this,
                           v11,
                           &v27,
                           &v26,
                           &v25,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v24,
                           &v22);
    v14 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBAC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return v14;
    }
    v28 = v26;
    if ( v24[0] )
    {
      if ( v24[0] == 1 )
      {
        if ( v25.bottom > v26.top )
          v28.top = v25.bottom;
      }
      else if ( v24[0] == 2 )
      {
        if ( v25.left < v26.right )
          v28.right = v25.left;
      }
      else if ( v24[0] == 3 && v25.top < v26.bottom )
      {
        v28.bottom = v25.top;
      }
    }
    else
    {
      left = v28.left;
      if ( v25.right > v26.left )
        left = v25.right;
      v28.left = left;
    }
    Point.x = v28.left;
    Point.y = v28.top;
    if ( a2 )
    {
      x = v28.left - a2->left;
      y = v28.top - a2->top;
      Point.y = y;
      Point.x = x;
    }
    else
    {
      Hwnd = (HWND)CortanaDesktopExperienceView::GetHwnd(this);
      ScreenToClient(Hwnd, &Point);
      y = Point.y;
      x = Point.x;
    }
    OffsetRect(&v28, x - v28.left, y - v28.top);
    BorderFlagFromStuckEdge = (unsigned int)CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                              (__int64)this,
                                              v24[0],
                                              v10,
                                              *((_BYTE *)this + 240));
    *(float *)&v25.left = (float)v28.left;
    v20 = *((_QWORD *)this + 21);
    *(float *)&v25.top = (float)v28.top;
    *(float *)&v25.right = (float)(v28.right - v28.left);
    v21 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v20 + 136LL);
    *(float *)&v25.bottom = (float)(v28.bottom - v28.top);
    v21(v20, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v25);
  }
  *((_BYTE *)this + 241) = v5;
  return 0LL;
}
