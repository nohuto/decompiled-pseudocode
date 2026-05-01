/*
 * XREFs of wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18011B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180124FD4 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        _DWORD *a2)
{
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback(
           *(_QWORD *)(a1 + 32),
           *a2,
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 8LL * *(int *)(a1 + 8));
}
