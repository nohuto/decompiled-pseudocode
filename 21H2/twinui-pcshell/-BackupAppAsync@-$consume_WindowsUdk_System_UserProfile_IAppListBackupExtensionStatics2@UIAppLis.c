/*
 * XREFs of ?BackupAppAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics2@UIAppListBackupExtensionStatics2@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@AEBUhstring@param@3@00@Z @ 0x18011D190
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C380 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics2<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics2>::BackupAppAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rcx
  unsigned int v7; // eax
  _QWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = *a1;
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)v5 + 48LL))(
         v5,
         *a3,
         *a4,
         *a5,
         &v9);
  winrt::check_hresult(v7);
  *a2 = v9;
  return a2;
}
