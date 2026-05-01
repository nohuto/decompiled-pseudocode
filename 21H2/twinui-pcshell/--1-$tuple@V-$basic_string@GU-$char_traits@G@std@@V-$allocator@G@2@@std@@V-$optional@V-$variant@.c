/*
 * XREFs of ??1?$tuple@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x180135F4C
 * Callers:
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x180139C40 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     __anonymous_namespace_::GetPinRequestPromptContent_::_1_::dtor$2 @ 0x180139E88 (__anonymous_namespace_--GetPinRequestPromptContent_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetPinRequestPromptContent_::_1_::dtor$6 @ 0x180139EAC (__anonymous_namespace_--GetPinRequestPromptContent_--_1_--dtor$6.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$11 @ 0x180144197 (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$11.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x180144AE4 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 */

__int64 __fastcall std::tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>::~tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>(
        __int64 a1)
{
  __int64 result; // rax

  result = std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 16) )
    return std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy(a1);
  return result;
}
