/*
 * XREFs of ?Release@?$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListener@3456@X@impl@winrt@@UEAAIXZ @ 0x1801254E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener,void>::Release(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 88) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
