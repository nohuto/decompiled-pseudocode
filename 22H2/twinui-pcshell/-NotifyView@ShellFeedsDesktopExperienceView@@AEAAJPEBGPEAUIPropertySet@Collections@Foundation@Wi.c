/*
 * XREFs of ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3EA4
 * Callers:
 *     ?NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C3C68 (-NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800C3F40 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C42D8 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4B98 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z @ 0x1800C542C (-Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3E54 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::NotifyView(
        ShellFeedsDesktopExperienceView *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  const WCHAR *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a2;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, (unsigned int)a3);
  v6 = ShellFeedsDesktopExperienceView::NotifyView(this, (HSTRING)v5[1].Reserved.Reserved1, a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
