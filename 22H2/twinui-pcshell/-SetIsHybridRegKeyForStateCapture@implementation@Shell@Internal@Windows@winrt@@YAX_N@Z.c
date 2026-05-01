/*
 * XREFs of ?SetIsHybridRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x180125724
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122CC0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122CC0.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SetIsHybridRegKeyForStateCapture(
        winrt::Windows::Internal::Shell::implementation *this)
{
  int Data; // [rsp+40h] [rbp+8h] BYREF

  Data = (unsigned __int8)this;
  RegSetKeyValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
    L"IsHybridAttached",
    4u,
    &Data,
    4u);
}
