/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18011BD90
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x180171690 (--_E-$heap_implements@V-$module_count_wrapper@UAppBackupListener@implementation@She_ea_180171690.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x18011B06C (--1-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@detai.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *a1,
        char a2)
{
  winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x210);
  return a1;
}
