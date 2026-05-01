/*
 * XREFs of ?GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800C2934
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C42F8 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4BB8 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C26F0 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::GetAnimationClipRect(
        ShellFeedsDesktopExperienceView *this,
        LPRECT lprcDst)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm1_4
  HMONITOR v10; // rax
  const char *v11; // r9
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-60h] BYREF
  RECT rc; // [rsp+28h] [rbp-58h] BYREF
  RECT v18; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = *((float *)this + 34);
  v4 = *((float *)this + 35);
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 36);
  rc.left = v6;
  v8 = (int)v4;
  v9 = v4 + *((float *)this + 37);
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v9;
  v10 = MonitorFromRect(&rc, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v10, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x51F,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
             v11);
  if ( !CopyRect(lprcDst, &mi.rcWork) )
  {
    v13 = -2147467259;
    v14 = 1312LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  v18 = 0LL;
  v13 = ShellFeedsDesktopExperienceView::EnsureInputHostManager(this);
  if ( v13 < 0 )
  {
    v14 = 1316LL;
    goto LABEL_5;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 12) + 40LL))(
          *((_QWORD *)this + 12),
          &v18,
          &v16);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x525,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v15);
  if ( !IsRectEmpty(&v18) && lprcDst->bottom > v18.top && ((v16 - 1) & 0xFFFFFFFD) == 0 )
    lprcDst->bottom = v18.top;
  return 0LL;
}
