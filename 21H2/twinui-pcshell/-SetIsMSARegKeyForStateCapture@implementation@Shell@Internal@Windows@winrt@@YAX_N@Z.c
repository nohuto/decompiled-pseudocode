/*
 * XREFs of ?SetIsMSARegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x180125918
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122E30 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122E30.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SetIsMSARegKeyForStateCapture(
        winrt::Windows::Internal::Shell::implementation *this)
{
  int Data; // [rsp+40h] [rbp+8h] BYREF

  Data = (unsigned __int8)this;
  RegSetKeyValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
    L"IsMSAAttached",
    4u,
    &Data,
    4u);
}
