/*
 * XREFs of ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x18011D080
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2 @ 0x18011D320 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1801222C0 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180124FD4 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$1 @ 0x18011BF84 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
        __int64 a1,
        _BYTE *a2,
        HSTRING *a3,
        HSTRING *a4,
        HSTRING *a5,
        ...)
{
  void *v9; // rax
  HSTRING *v10; // rbx
  __int64 v12; // [rsp+38h] [rbp-220h]
  int v13; // [rsp+268h] [rbp+10h] BYREF
  HSTRING *v14; // [rsp+270h] [rbp+18h]
  HSTRING *v15; // [rsp+278h] [rbp+20h]
  va_list va; // [rsp+288h] [rbp+30h] BYREF

  va_start(va, a5);
  v15 = a4;
  v14 = a3;
  v9 = operator new(0x1E8uLL);
  v13 = 0;
  v12 = a1;
  v10 = a5;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_1(
    &v13,
    (__int64)v9,
    a2,
    (__int64)a3,
    (__int64)a4,
    (__int64)a5,
    (int *)va,
    v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v10);
  return a2;
}
