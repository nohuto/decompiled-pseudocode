/*
 * XREFs of ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180125AD8
 * Callers:
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x180122510 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x180122720 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x180122AB0 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1800A0F1C (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA?AUPackage@ApplicationModel@Windows@3@XZ @ 0x1800A2ED4 (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1800A30C4 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ?HasCurrent@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA_NXZ @ 0x1800A6E90 (-HasCurrent@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@Application.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F63D0 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?FindPackagesForUserWithPackageTypes@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA?AU?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@3@AEBUhstring@param@3@0AEBW4PackageTypes@Deployment@Management@73@@Z @ 0x180120D38 (-FindPackagesForUserWithPackageTypes@-$consume_Windows_Management_Deployment_IPackageManager2@UP.c)
 *     ?FullName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180120DE4 (-FullName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@win.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256D88 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x180261164 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1804BAC08 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1804D65B0 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
char __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        struct winrt::Windows::ApplicationModel::PackageId *a2)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 *v5; // rax
  _QWORD *v6; // rax
  char v7; // di
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-98h] BYREF
  HSTRING v13; // [rsp+48h] [rbp-90h] BYREF
  __int64 v14; // [rsp+50h] [rbp-88h] BYREF
  HSTRING v15; // [rsp+58h] [rbp-80h] BYREF
  __int64 v16; // [rsp+60h] [rbp-78h] BYREF
  struct IUnknown v17; // [rsp+68h] [rbp-70h] BYREF
  HSTRING v18; // [rsp+70h] [rbp-68h] BYREF
  __int64 v19; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+A0h] [rbp-38h] BYREF

  winrt::Windows::Management::Deployment::PackageManager::PackageManager(&v17);
  LODWORD(v11) = 1;
  v20[0] = *winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
              (__int64 *)a2,
              &v13);
  winrt::param::hstring::hstring(string, &szAgent);
  winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::FindPackagesForUserWithPackageTypes(
    &v17,
    &v16,
    string,
    v20,
    (unsigned int *)&v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FullName(
    (__int64 *)a2,
    &v15);
  winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
    &v16,
    &v12);
  if ( winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::HasCurrent(&v12) )
  {
    v3 = v12;
    v12 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v11 = v3;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
  v14 = 0LL;
  v4 = 1;
  while ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v11, &v14) )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
      &v11,
      (winrt *)&v12);
    v4 |= 2u;
    v5 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
           &v12,
           &v19);
    v6 = winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FullName(
           v5,
           &v18);
    v7 = winrt::operator==(v6, &v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
    if ( v7 )
    {
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v14);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v11);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v16);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v17);
      return 1;
    }
    v9 = (*(unsigned int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 64LL))(v3, v10);
    winrt::check_hresult(v9);
    if ( !v10[0] )
    {
      v13 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(&v11, &v13);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v13);
      v3 = v11;
    }
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v14);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v16);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v17);
  return 0;
}
