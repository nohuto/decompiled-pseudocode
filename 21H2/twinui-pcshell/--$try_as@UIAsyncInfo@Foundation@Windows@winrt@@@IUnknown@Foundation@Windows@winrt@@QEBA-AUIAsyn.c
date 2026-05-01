/*
 * XREFs of ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x180260ED8
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@1@AEBU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@451@@Z @ 0x1800A080C (--$wait_get@U-$IAsyncOperation@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Col.c)
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x1800E70A4 (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1800FE1E0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamReference.c)
 *     ??$wait_get@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@1@AEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@451@@Z @ 0x180134B30 (--$wait_get@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsI.c)
 *     _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18013614C (_anonymous_namespace_--PinConsentPromptManager--_PinConsentPromptManager.c)
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x18014506C (-await_ready@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Foun.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(
        void (__fastcall ****a1)(_QWORD, const wchar_t *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, const wchar_t *, __int64 *); // rcx
  void (__fastcall **v4)(_QWORD, const wchar_t *, __int64 *); // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v4 = *v2;
    v6 = 0LL;
    (*v4)(v2, L"6", &v6);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
