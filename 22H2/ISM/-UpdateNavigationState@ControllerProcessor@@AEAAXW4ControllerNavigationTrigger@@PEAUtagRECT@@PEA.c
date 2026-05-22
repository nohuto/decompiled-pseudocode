/*
 * XREFs of ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123B10
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019070 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011CE3C (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011D484 (-PauseNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18011DB40 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011F9D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1801214B0 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x180121520 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180123804 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801230B0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180123354 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180123588 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180123954 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 */

void __fastcall ControllerProcessor::UpdateNavigationState(__int64 a1, int a2, struct tagRECT *a3, struct tagPOINT *a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int updated; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_DWORD *)(a1 + 280);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        if ( a2 )
        {
          if ( a2 == 3 )
            *(_DWORD *)(a1 + 280) = 2;
          return;
        }
        v8 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            872LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v8);
          __debugbreak();
        }
LABEL_40:
        *(_DWORD *)(a1 + 280) = 1;
        return;
      }
      if ( a2 )
      {
        if ( a2 != 1 )
          return;
LABEL_13:
        *(_DWORD *)(a1 + 280) = 3;
        return;
      }
      v9 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          852LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      *(_DWORD *)(a1 + 280) = 0;
      v10 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          854LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    else if ( a2 )
    {
      v11 = a2 - 2;
      if ( !v11 )
      {
        *(_DWORD *)(a1 + 328) = 0;
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_DWORD *)(a1 + 404) = 0;
        *(_QWORD *)(a1 + 340) = 0LL;
        *(_BYTE *)(a1 + 396) = 0;
        goto LABEL_13;
      }
      if ( v11 == 1 )
      {
        if ( a3 && a4 )
        {
          *(_BYTE *)(a1 + 376) = 1;
          *(struct tagRECT *)(a1 + 360) = *a3;
          v12 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, (struct tagRECT *)(a1 + 312), a4);
          if ( v12 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              831LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)v12);
            __debugbreak();
          }
        }
        else
        {
          *(_BYTE *)(a1 + 376) = 0;
        }
        v13 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            838LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        *(_DWORD *)(a1 + 280) = 0;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
      if ( updated < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          815LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)updated);
        __debugbreak();
      }
    }
  }
  else if ( a2 )
  {
    v15 = a2 - 1;
    if ( !v15 )
    {
      v17 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          794LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      goto LABEL_40;
    }
    if ( v15 == 1 )
    {
      v16 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          800LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      *(_DWORD *)(a1 + 280) = 2;
      *(_DWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 408) = 0LL;
      *(_DWORD *)(a1 + 404) = 0;
      *(_QWORD *)(a1 + 340) = 0LL;
      *(_BYTE *)(a1 + 396) = 0;
    }
  }
  else
  {
    v18 = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        789LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v18);
      JUMPOUT(0x180123DC1LL);
    }
  }
}
