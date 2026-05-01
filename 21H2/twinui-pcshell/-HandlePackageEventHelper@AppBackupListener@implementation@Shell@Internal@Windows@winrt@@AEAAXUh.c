/*
 * XREFs of ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x180122430
 * Callers:
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x180122510 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x180122720 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x180122AB0 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F45A4 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x18011D1F0 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180256AEC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(
        __int64 a1,
        winrt::impl **a2,
        winrt::impl **a3)
{
  HSTRING *v6; // rdi
  HSTRING *v7; // rbx
  HSTRING *v8; // rax
  int v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-40h]
  _BYTE *v15; // [rsp+50h] [rbp-38h]
  char v16; // [rsp+A8h] [rbp+20h] BYREF

  v14 = &v11;
  v6 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)&v11, L"MSIX");
  v15 = v12;
  v7 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v12, a3);
  v8 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)v13, a2);
  v10 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v16, v8, v7, v6, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)a2);
  return winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)a3);
}
