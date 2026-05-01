/*
 * XREFs of ?OnSettingChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1800EBA90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800ECAD4 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnSettingChanged(__int64 a1, int a2)
{
  if ( a2 == 13 )
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)(a1 - 8));
  return 0LL;
}
