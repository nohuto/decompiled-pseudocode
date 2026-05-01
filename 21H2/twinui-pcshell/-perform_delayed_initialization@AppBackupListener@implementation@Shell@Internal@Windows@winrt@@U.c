/*
 * XREFs of ?perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180128B90
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18012451C (-InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  char v1; // [rsp+38h] [rbp+10h] BYREF

  winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync(
    (__int64)this,
    &v1);
}
