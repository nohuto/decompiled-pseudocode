/*
 * XREFs of ?HomeGeographicRegion@?$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800ECAD8
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800EA6B8 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@?$factory_cache_entry@UGlobalizationPreferences@UserProfile@System@Windows@winrt@@UIGlobalizationPreferencesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@Z @ 0x180108CAC (--$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@-$factory_cache_entry@UGlobalizationPref.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  unsigned int v4; // eax
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v2 + 80LL))(v2, &v6);
  winrt::check_hresult(v4);
  *a2 = v6;
  return a2;
}
