/*
 * XREFs of ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180124AB8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122CC0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122CC0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180101330 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXUPackageCatalog@ApplicationModel@45@UPackageInstallingEventArgs@745@@Z@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageInstallingEventArgs@234@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAAXUPackageCatalog@ApplicationModel@23@UPackageInstallingEventArgs@ApplicationModel@23@@Z@Z @ 0x180116850 (--$-0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXUPackageCatalo.c)
 *     ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXUPackageCatalog@ApplicationModel@45@UPackageUninstallingEventArgs@745@@Z@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAAXUPackageCatalog@ApplicationModel@23@UPackageUninstallingEventArgs@ApplicationModel@23@@Z@Z @ 0x1801168E8 (--$-0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXU_ea_1801168E8.c)
 *     ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXUPackageCatalog@ApplicationModel@45@UPackageUpdatingEventArgs@745@@Z@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUpdatingEventArgs@234@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAAXUPackageCatalog@ApplicationModel@23@UPackageUpdatingEventArgs@ApplicationModel@23@@Z@Z @ 0x180116980 (--$-0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXU_ea_180116980.c)
 *     ??$swap@U?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@X@std@@YAXAEAU?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@0@Z @ 0x180119E2C (--$swap@U-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@X@std@@YAXAEAU-$wea.c)
 *     ??0?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x18011A40C (--0-$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotific.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x18011AE84 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x18011AEC4 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18011AEC4.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18011AF04 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18011AF04.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterPackageListeners(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  _QWORD *v2; // r15
  __int64 *strong; // rax
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h]
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF

  v2 = (_QWORD *)((char *)this + 96);
  strong = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
             (__int64)this,
             &v23);
  *(_QWORD *)&v18 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent;
  DWORD2(v18) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageInstallingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageInstallingEventArgs>(
    &v21,
    strong,
    &v18);
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*v2 + 64LL))(*v2, v21, &v22);
  winrt::check_hresult(v4);
  v5 = v22;
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    &v19,
    v2);
  v20 = v5;
  v6 = v19;
  v19 = 0LL;
  *(_QWORD *)&v18 = v6;
  *((_QWORD *)&v18 + 1) = v5;
  std::swap<winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>,void>(
    (__int64 *)&v18,
    (__int64 *)this + 13);
  v7 = *((_QWORD *)&v18 + 1);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = v7;
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BEI_AA_impl_winrt__QEAA_XZ((__int64 *)&v18);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BEI_AA_impl_winrt__QEAA_XZ(&v19);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v8 = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
         (__int64)this,
         &v23);
  *(_QWORD *)&v18 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent;
  DWORD2(v18) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUpdatingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUpdatingEventArgs>(
    &v21,
    v8,
    &v18);
  v22 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*v2 + 80LL))(*v2, v21, &v22);
  winrt::check_hresult(v9);
  v10 = v22;
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    &v19,
    v2);
  v20 = v10;
  v11 = v19;
  v19 = 0LL;
  *(_QWORD *)&v18 = v11;
  *((_QWORD *)&v18 + 1) = v10;
  std::swap<winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>,void>(
    (__int64 *)&v18,
    (__int64 *)this + 15);
  v12 = *((_QWORD *)&v18 + 1);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = v12;
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BFI_AA_impl_winrt__QEAA_XZ((__int64 *)&v18);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BFI_AA_impl_winrt__QEAA_XZ(&v19);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v13 = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          (__int64)this,
          &v23);
  *(_QWORD *)&v18 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent;
  DWORD2(v18) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>(
    &v21,
    v13,
    &v18);
  v22 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*v2 + 96LL))(*v2, v21, &v22);
  winrt::check_hresult(v14);
  v15 = v22;
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    &v19,
    v2);
  v20 = v15;
  v16 = v19;
  v19 = 0LL;
  *(_QWORD *)&v18 = v16;
  *((_QWORD *)&v18 + 1) = v15;
  std::swap<winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>,void>(
    (__int64 *)&v18,
    (__int64 *)this + 17);
  v17 = *((_QWORD *)&v18 + 1);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v17;
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)&v18);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BGI_AA_impl_winrt__QEAA_XZ(&v19);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
}
