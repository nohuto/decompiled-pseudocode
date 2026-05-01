/*
 * XREFs of ?LowLevelKeyboardHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C3910
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3E74 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fo.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall ShellFeedsDesktopExperienceView::LowLevelKeyboardHookProc(int code, WPARAM wParam, _DWORD *lParam)
{
  HSTRING_HEADER *v6; // rax
  HSTRING_HEADER v8; // [rsp+20h] [rbp-48h] BYREF

  if ( wParam == 256 && `anonymous namespace'::g_shellFeedsExperienceView && *lParam == 27 )
  {
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &v8,
           (const WCHAR **)off_180509B20,
           (unsigned int)lParam);
    ShellFeedsDesktopExperienceView::NotifyView(
      `anonymous namespace'::g_shellFeedsExperienceView,
      (HSTRING)v6[1].Reserved.Reserved1,
      0LL);
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
