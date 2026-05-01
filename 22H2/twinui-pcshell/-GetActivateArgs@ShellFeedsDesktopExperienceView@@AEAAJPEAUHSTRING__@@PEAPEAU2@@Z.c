/*
 * XREFs of ?GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C276C
 * Callers:
 *     ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@@@Z @ 0x1800C5A90 (-Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING__@@@Z @ 0x1800C1F54 (-BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::GetActivateArgs(
        ShellFeedsDesktopExperienceView *this,
        HSTRING string1,
        HSTRING *newString)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rdx
  HSTRING newStringa; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  RECT rc; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  *newString = 0LL;
  v6 = *((float *)this + 34);
  rc.left = (int)v6;
  v7 = *((float *)this + 35);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 36));
  rc.bottom = (int)(float)(v7 + *((float *)this + 37));
  v8 = MonitorFromRect(&rc, 0);
  if ( v8 )
  {
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v10 = ShellFeedsDesktopExperienceView::BuildAdditionalArgsString(this, v8, &string2);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x400,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
LABEL_12:
      WindowsDeleteString(string2);
      return v9;
    }
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v11 = WindowsConcatString(string1, string2, &newStringa);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v11 = WindowsDuplicateString(newStringa, newString);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v9 = 0;
        goto LABEL_11;
      }
      v12 = 1028LL;
    }
    else
    {
      v12 = 1027LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    WindowsDeleteString(newStringa);
    newStringa = 0LL;
    goto LABEL_12;
  }
  v9 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3FD,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v9;
}
