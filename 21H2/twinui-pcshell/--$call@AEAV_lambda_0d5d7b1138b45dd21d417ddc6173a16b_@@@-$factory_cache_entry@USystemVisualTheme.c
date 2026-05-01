/*
 * XREFs of ??$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@Z @ 0x180133734
 * Callers:
 *     _anonymous_namespace_::GetLogoTileTheme @ 0x1801399CC (_anonymous_namespace_--GetLogoTileTheme.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUISystemVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180134108 (--$get_activation_factory@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA-AUIS.c)
 *     ?Current@?$consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW4VisualTheme@Themes@UI@WindowsUdk@3@XZ @ 0x180138D30 (-Current@-$consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics@UISystemVisualThemeStatics@The.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<_lambda_0d5d7b1138b45dd21d417ddc6173a16b_ &>()
{
  __int64 result; // rax
  __int64 v1; // rbx
  unsigned int v2; // ebx
  __int64 v3; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v4[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v6; // [rsp+68h] [rbp-18h] BYREF

  v4[2] = &qword_1806511C8;
  _InterlockedIncrement64(&qword_1806511C8);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics,_lambda_0d5d7b1138b45dd21d417ddc6173a16b_>'::`2'::factory )
  {
    result = winrt::impl::consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::Current(&`winrt::impl::call_factory<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics,_lambda_0d5d7b1138b45dd21d417ddc6173a16b_>'::`2'::factory);
    _InterlockedDecrement64(&qword_1806511C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1806511C8);
    v4[0] = L"WindowsUdk.UI.Themes.SystemVisualTheme";
    v4[1] = 38LL;
    winrt::param::hstring::hstring(string, (__int64)v4);
    winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>(&v6, string);
    v1 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v6, &v3);
    if ( v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v3);
    if ( v1 )
    {
      v4[3] = &qword_1806511C8;
      _InterlockedIncrement64(&qword_1806511C8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics,_lambda_0d5d7b1138b45dd21d417ddc6173a16b_>'::`2'::factory,
              v6,
              0LL) )
      {
        v6 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806511D0);
      }
      v2 = winrt::impl::consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::Current(&`winrt::impl::call_factory<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics,_lambda_0d5d7b1138b45dd21d417ddc6173a16b_>'::`2'::factory);
      _InterlockedDecrement64(&qword_1806511C8);
    }
    else
    {
      v2 = winrt::impl::consume_WindowsUdk_UI_Themes_ISystemVisualThemeStatics<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::Current(&v6);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
    return v2;
  }
  return result;
}
