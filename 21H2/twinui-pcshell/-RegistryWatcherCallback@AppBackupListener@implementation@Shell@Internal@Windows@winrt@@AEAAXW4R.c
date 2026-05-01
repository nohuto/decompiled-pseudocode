/*
 * XREFs of ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180125144
 * Callers:
 *     wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18011BB50 (wistd--__function--__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800E864C (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F45A4 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??1?$optional@Uhstring@winrt@@@std@@QEAA@XZ @ 0x18011B25C (--1-$optional@Uhstring@winrt@@@std@@QEAA@XZ.c)
 *     ??1?$pair@Uhstring@winrt@@U12@@std@@QEAA@XZ @ 0x18011B31C (--1-$pair@Uhstring@winrt@@U12@@std@@QEAA@XZ.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x18011D1F0 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x18011F0D4 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120E2C (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18012113C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?value@?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEGBAAEBV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@XZ @ 0x180129628 (-value@-$optional@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x18012966C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801B2050 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180256AEC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x180256D50 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback(
        __int64 a1,
        int a2,
        HKEY a3,
        const WCHAR *a4,
        _QWORD *a5)
{
  __int64 v10; // rax
  HSTRING *v11; // r14
  HSTRING *v12; // rdi
  HSTRING *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  HSTRING *v16; // rax
  HSTRING *v17; // r14
  HSTRING *v18; // rdi
  HSTRING *v19; // rax
  winrt::impl *v20; // [rsp+30h] [rbp-78h] BYREF
  winrt::impl *v21; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-68h] BYREF
  winrt::impl **v23; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE *v25; // [rsp+58h] [rbp-50h]
  _BYTE v26[16]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE *v27; // [rsp+70h] [rbp-38h]
  HSTRING v28[2]; // [rsp+78h] [rbp-30h] BYREF
  char v29; // [rsp+88h] [rbp-20h]
  char v30; // [rsp+B8h] [rbp+10h] BYREF

  winrt::hstring::hstring((winrt::hstring *)&v20, &szAgent);
  if ( a2 == 1 )
  {
    if ( *a5 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        a5,
        0LL);
      return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
    }
    return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
  }
  if ( a2 )
    return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted(a1, v26, a3, a4);
  if ( v26[8] )
  {
    v10 = std::optional<winrt::hstring>::value(v26);
    winrt::hstring::operator=(&v20, v10);
    v23 = &v21;
    v11 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)&v21, L"Win32");
    v27 = v24;
    v12 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v24, L"Uninstall");
    v13 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v22, &v20);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v30, v13, v12, v11, 0);
    std::optional<winrt::hstring>::~optional<winrt::hstring>((__int64)v26);
    return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
  }
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled(
    a1,
    (HSTRING)v28,
    a3,
    a4);
  if ( !v29 )
  {
    std::optional<winrt::hstring>::~optional<winrt::hstring>((__int64)v26);
    return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
  }
  v14 = std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::value(v28);
  winrt::hstring::operator=(&v20, v14);
  v15 = std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::value(v28);
  winrt::hstring::hstring((winrt::hstring *)&v21, (winrt::impl **)(v15 + 8));
  if ( winrt::operator==((__int64)&v21, L"Install") )
  {
    v16 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v22, &v20);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry(a1, &v30, v16);
  }
  else
  {
    v25 = v22;
    v17 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v22, L"Win32");
    v27 = v24;
    v18 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v24, &v21);
    v19 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)&v23, &v20);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v30, v19, v18, v17, 0);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v21);
  if ( v29 )
    std::pair<winrt::hstring,winrt::hstring>::~pair<winrt::hstring,winrt::hstring>(v28);
  std::optional<winrt::hstring>::~optional<winrt::hstring>((__int64)v26);
  return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
}
