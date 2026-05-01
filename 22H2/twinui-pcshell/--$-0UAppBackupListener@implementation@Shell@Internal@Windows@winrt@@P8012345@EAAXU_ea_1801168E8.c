/*
 * XREFs of ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXUPackageCatalog@ApplicationModel@45@UPackageUninstallingEventArgs@745@@Z@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAAXUPackageCatalog@ApplicationModel@23@UPackageUninstallingEventArgs@ApplicationModel@23@@Z@Z @ 0x1801168E8
 * Callers:
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180124AB8 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  v4 = *a2;
  *a2 = 0LL;
  v7 = v4;
  v8 = *a3;
  v9 = operator new(0x28uLL);
  v5 = v7;
  v7 = 0LL;
  v9[1] = v5;
  *((_OWORD *)v9 + 1) = v8;
  *((_DWORD *)v9 + 8) = 1;
  *v9 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>,_lambda_79887c6917a6e943a4ef83581189e082_>::`vftable';
  *a1 = v9;
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return a1;
}
