/*
 * XREFs of ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x180122AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1800A30C4 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F45A4 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F63D0 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x180122430 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180125AD8 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180256AEC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  unsigned int v6; // eax
  winrt::impl **v7; // rax
  winrt::impl *v8; // rbx
  unsigned int v9; // eax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v10; // rcx
  winrt::impl **v11; // rbx
  winrt::impl **v12; // rax
  _DWORD *v14; // rax
  __int64 v15; // rcx
  winrt::impl *v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  __int64 v18[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v16, &szAgent);
  v23 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v3 + 64LL))(*v3, &v23);
  try
  {
    winrt::check_hresult(v6);
    v18[0] = v23;
    winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
      v18,
      &v17);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v18);
    v7 = (winrt::impl **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                           &v17,
                           &v23);
    if ( &v16 != v7 )
    {
      v8 = *v7;
      *v7 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v16);
      v16 = v8;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v23);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v3 + 80LL))(*v3, &v23);
    winrt::check_hresult(v9);
    if ( (_BYTE)v23
      && winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
           v10,
           (struct winrt::Windows::ApplicationModel::PackageId *)&v17) )
    {
      v18[1] = (__int64)&v23;
      v11 = (winrt::impl **)winrt::hstring::hstring((winrt::hstring *)&v23, L"Update");
      v12 = (winrt::impl **)winrt::hstring::hstring((winrt::hstring *)v18, &v16);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(a1, v12, v11);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  }
  catch ( ... )
  {
    v18[0] = (__int64)WINRT_WindowsGetStringRawBuffer((HSTRING)v16, 0LL);
    v14 = (_DWORD *)winrt::to_hresult(&v23);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[53],winrt::hresult,unsigned short const *>(
      v15,
      v14,
      v18);
    v3 = a3;
    v4 = a2;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v16);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v4);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v3);
}
