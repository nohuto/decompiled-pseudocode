/*
 * XREFs of _anonymous_namespace_::GetLogoTileTheme @ 0x18013985C
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1801433AC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@Z @ 0x1801335C4 (--$call@AEAV_lambda_0d5d7b1138b45dd21d417ddc6173a16b_@@@-$factory_cache_entry@USystemVisualTheme.c)
 */

__int64 anonymous_namespace_::GetLogoTileTheme()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax

  v0 = winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<_lambda_0d5d7b1138b45dd21d417ddc6173a16b_ &>();
  if ( !v0 )
    return 3LL;
  v1 = v0 - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
    return 2LL;
  return 0LL;
}
