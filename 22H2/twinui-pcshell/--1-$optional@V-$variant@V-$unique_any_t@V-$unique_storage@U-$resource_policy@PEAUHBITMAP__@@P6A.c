/*
 * XREFs of ??1?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180135C8C
 * Callers:
 *     __anonymous_namespace_::GetPinRequestPromptContent_::_1_::dtor$4 @ 0x180139D30 (__anonymous_namespace_--GetPinRequestPromptContent_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetPinRequestPromptContent_::_1_::dtor$39 @ 0x180139D54 (__anonymous_namespace_--GetPinRequestPromptContent_--_1_--dtor$39.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$2 @ 0x180143F84 (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$2.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$4 @ 0x180143F9C (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$4.c)
 *     __anonymous_namespace_::TryGetTargetDisplayInformation_::_1_::dtor$2 @ 0x1801442A2 (__anonymous_namespace_--TryGetTargetDisplayInformation_--_1_--dtor$2.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x180144974 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 */

__int64 __fastcall std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::~optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy(a1);
  return result;
}
