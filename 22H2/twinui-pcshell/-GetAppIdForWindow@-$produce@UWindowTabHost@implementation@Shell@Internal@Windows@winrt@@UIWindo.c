/*
 * XREFs of ?GetAppIdForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1800EAEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x1800EAF40 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetAppIdForWindow(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 *AppIdForWindow; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  HSTRING v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (a1 - 32) & -(__int64)(a1 != 0);
  try
  {
    AppIdForWindow = (__int64 *)winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
                                  v4,
                                  &v8,
                                  a2);
    v6 = *AppIdForWindow;
    *AppIdForWindow = 0LL;
    *a3 = v6;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
