/*
 * XREFs of ??$try_as@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@3@XZ @ 0x18011A030
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2 @ 0x18011FD10 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall **v4)(_QWORD, void *, __int64 *); // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v4 = *v2;
    v6 = 0LL;
    (*v4)(
      v2,
      &winrt::impl::guid_storage<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::value,
      &v6);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
