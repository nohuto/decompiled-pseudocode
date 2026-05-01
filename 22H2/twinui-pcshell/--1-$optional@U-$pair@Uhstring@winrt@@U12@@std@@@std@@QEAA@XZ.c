/*
 * XREFs of ??1?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@QEAA@XZ @ 0x18011B0D0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$8 @ 0x1801215DD (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1801215DD.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::dtor$5 @ 0x180125293 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_180125293.c)
 * Callees:
 *     ??1?$pair@Uhstring@winrt@@U12@@std@@QEAA@XZ @ 0x18011B1AC (--1-$pair@Uhstring@winrt@@U12@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::optional<std::pair<winrt::hstring,winrt::hstring>>::~optional<std::pair<winrt::hstring,winrt::hstring>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return std::pair<winrt::hstring,winrt::hstring>::~pair<winrt::hstring,winrt::hstring>();
  return result;
}
