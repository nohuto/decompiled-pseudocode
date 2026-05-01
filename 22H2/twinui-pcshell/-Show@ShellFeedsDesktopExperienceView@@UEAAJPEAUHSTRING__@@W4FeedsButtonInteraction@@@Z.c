/*
 * XREFs of ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@@@Z @ 0x1800C5A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C276C (-GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800C5C1C (-ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::Show(__int64 a1, HSTRING a2, int a3)
{
  ShellFeedsDesktopExperienceView *v5; // rdi
  int ActivateArgs; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v5 = (ShellFeedsDesktopExperienceView *)(a1 - 24);
  WindowsDeleteString(0LL);
  string = 0LL;
  ActivateArgs = ShellFeedsDesktopExperienceView::GetActivateArgs(v5, a2, &string);
  v7 = ActivateArgs;
  if ( ActivateArgs >= 0 )
  {
    v9 = 2LL;
    if ( a3 != 1 )
      v9 = 0LL;
    if ( !a3 )
      v9 = 2LL;
    ActivateArgs = ShellFeedsDesktopExperienceView::ShowInternal(v5, string, v9);
    v7 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v8 = 491LL;
  }
  else
  {
    v8 = 482LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)ActivateArgs);
LABEL_11:
  WindowsDeleteString(string);
  return v7;
}
