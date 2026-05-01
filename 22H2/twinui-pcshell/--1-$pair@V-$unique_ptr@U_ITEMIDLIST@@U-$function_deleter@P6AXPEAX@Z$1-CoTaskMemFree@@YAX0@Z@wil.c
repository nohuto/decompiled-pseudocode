/*
 * XREFs of ??1?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x180135CD8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C760 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2_::_1_::dtor$0 @ 0x18013D868 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeC.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::pair<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>,std::wstring>::~pair<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>,std::wstring>(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 8));
  return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
           a1,
           0LL);
}
