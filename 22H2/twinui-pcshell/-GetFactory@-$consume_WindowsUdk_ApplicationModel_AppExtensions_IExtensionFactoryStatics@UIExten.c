/*
 * XREFs of ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@0@Z @ 0x1801221A4
 * Callers:
 *     ??$?RAEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@QEBA?AUIInspectable@Foundation@Windows@winrt@@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@4@@Z @ 0x180116E10 (--$-RAEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@_lambda_0f3f.c)
 *     ??$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@Z @ 0x180119900 (--$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@-$factory_cache_entry@UExtensionFactory@.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  unsigned int v6; // eax
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)v4 + 80LL))(v4, *a3, *a4, &v8);
  winrt::check_hresult(v6);
  *a2 = v8;
  return a2;
}
