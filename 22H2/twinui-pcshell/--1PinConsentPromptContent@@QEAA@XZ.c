/*
 * XREFs of ??1PinConsentPromptContent@@QEAA@XZ @ 0x180135F98
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x180140370 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2_::_1_::dtor$2 @ 0x1801414B4 (_winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2_--_1_-.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x180144974 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 */

void __fastcall PinConsentPromptContent::~PinConsentPromptContent(PinConsentPromptContent *this)
{
  char *v2; // rcx

  v2 = (char *)this + 88;
  if ( v2[16] )
    std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy(v2);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 7);
  if ( *((_BYTE *)this + 48) )
    std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy((char *)this + 32);
  std::wstring::_Tidy_deallocate(this);
}
