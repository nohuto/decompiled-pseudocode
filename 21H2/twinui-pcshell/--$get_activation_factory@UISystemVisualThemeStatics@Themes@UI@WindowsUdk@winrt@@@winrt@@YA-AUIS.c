/*
 * XREFs of ??$get_activation_factory@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUISystemVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180134108
 * Callers:
 *     ??$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@Z @ 0x180133734 (--$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@-$factory_cache_entry@USystemVisualTheme.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  result = a1;
  *a1 = v6;
  return result;
}
