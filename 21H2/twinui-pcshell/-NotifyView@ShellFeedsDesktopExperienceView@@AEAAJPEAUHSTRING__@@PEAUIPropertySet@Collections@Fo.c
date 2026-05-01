/*
 * XREFs of ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3E74
 * Callers:
 *     ?LowLevelKeyboardHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C3910 (-LowLevelKeyboardHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3EC4 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::NotifyView(
        ShellFeedsDesktopExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 13);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v3 + 120LL))(
         v3,
         a2,
         a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5BF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
