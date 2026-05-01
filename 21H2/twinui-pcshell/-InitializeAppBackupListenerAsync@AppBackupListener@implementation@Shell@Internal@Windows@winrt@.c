/*
 * XREFs of ?InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18012451C
 * Callers:
 *     ?perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180128B90 (-perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_InitCoro$1 @ 0x180122CC0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+1E8h] [rbp+10h] BYREF

  v4 = operator new(0x1A8uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__InitCoro_1(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
