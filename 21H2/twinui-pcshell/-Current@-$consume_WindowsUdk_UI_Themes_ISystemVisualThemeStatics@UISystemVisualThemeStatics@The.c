/*
 * XREFs of ?Current@?$consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW4VisualTheme@Themes@UI@WindowsUdk@3@XZ @ 0x180138D30
 * Callers:
 *     ??$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@Z @ 0x180133734 (--$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@-$factory_cache_entry@USystemVisualTheme.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::Current(
        _QWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 48LL))(*a1, &v3);
  winrt::check_hresult(v1);
  return v3;
}
