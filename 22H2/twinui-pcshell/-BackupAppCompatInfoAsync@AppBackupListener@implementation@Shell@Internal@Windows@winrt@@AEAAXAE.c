/*
 * XREFs of ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18011EFE8
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F1B0 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180120890 (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z @ 0x1801173B0 (--$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z @ 0x180117EA0 (--$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z.c)
 *     ??$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@Z @ 0x180119900 (--$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x180260FB4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  HSTRING *v4; // rbx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, void *, HSTRING **); // rax
  __int64 v7; // rcx
  char result; // al
  _QWORD *v9; // rcx
  void (__fastcall ***v10)(_QWORD, void *, HSTRING **); // [rsp+20h] [rbp-A8h] BYREF
  HSTRING *v11; // [rsp+28h] [rbp-A0h] BYREF
  HSTRING *v12; // [rsp+30h] [rbp-98h] BYREF
  __int64 v13; // [rsp+38h] [rbp-90h]
  _QWORD *v14; // [rsp+40h] [rbp-88h] BYREF
  const winrt::hresult_error *v15; // [rsp+48h] [rbp-80h] BYREF
  HSTRING v16[4]; // [rsp+50h] [rbp-78h] BYREF
  HSTRING string[4]; // [rsp+70h] [rbp-58h] BYREF
  HSTRING v18; // [rsp+90h] [rbp-38h] BYREF

  v2 = a2;
  v14 = a2;
  v12 = (HSTRING *)L"WindowsUdk.System.UserProfile.AppListBackupExtension";
  v13 = 52LL;
  winrt::param::hstring::hstring(string, (__int64)&v12);
  winrt::param::hstring::hstring(v16, L"com.microsoft.windows.extension.applistbackup");
  v12 = v16;
  v13 = (__int64)string;
  try
  {
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_ &>(
      v3,
      (__int64)&v10,
      &v12);
    if ( v10 )
    {
      v11 = 0LL;
      (**v10)(
        v10,
        &winrt::impl::guid_storage<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics4>::value,
        &v11);
      v4 = v11;
    }
    else
    {
      v4 = 0LL;
    }
    v12 = v4;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v10);
    if ( v4 )
    {
      v6 = (void (__fastcall ***)(_QWORD, void *, HSTRING **))v2;
      if ( v2[3] >= 8uLL )
        v6 = (void (__fastcall ***)(_QWORD, void *, HSTRING **))*v2;
      v10 = v6;
      CAppBackupListenerTelemetry::AttemptCompatInfoBackup<unsigned short const *>((__int64 *)&v10);
      if ( v2[3] >= 8uLL )
        v2 = (_QWORD *)*v2;
      winrt::param::hstring::hstring(&v18, (PCWSTR)v2);
      v10 = 0LL;
      v7 = (*((unsigned int (__fastcall **)(HSTRING *, HSTRING, _QWORD))*v4 + 6))(v4, v18, &v10);
      winrt::check_hresult(v7);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v10);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[85]>(v5);
    }
    result = winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v12);
  }
  catch ( const winrt::hresult_error *v15 )
  {
    v9 = v14;
    if ( v14[3] >= 8uLL )
      v9 = (_QWORD *)*v14;
    v14 = v9;
    return CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
             *((unsigned int *)v15 + 3),
             &v11,
             (__int64 *)&v14);
  }
  return result;
}
