/*
 * XREFs of ??_G?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E8918
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@WFA@EAAPEAXI@Z @ 0x180171460 (--_E-$heap_implements@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x1800E80CC (--1-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@w.c)
 */

winrt::Windows::Internal::Shell::implementation::WindowTabHost *__fastcall winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *a1,
        char a2)
{
  winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x348);
  return a1;
}
