/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$1 @ 0x18011C0F4
 * Callers:
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x18011D1F0 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800ED8F0 (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@impl.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE2F4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF268 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_13_::_parameters_::_parameters_ @ 0x18011A200 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_--_13_--_par.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C380 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 *     ??0SecondaryTile@StartScreen@UI@Windows@winrt@@QEAA@$$QEAU01234@@Z @ 0x180135654 (--0SecondaryTile@StartScreen@UI@Windows@winrt@@QEAA@$$QEAU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_1(
        int *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  struct IProfferService *v8; // r8
  _BYTE v9[5]; // [rsp+43h] [rbp-A5h] BYREF
  __int64 v10; // [rsp+48h] [rbp-A0h]
  _BYTE *v11; // [rsp+50h] [rbp-98h]
  HSTRING *v12; // [rsp+58h] [rbp-90h]
  _BYTE *v13; // [rsp+60h] [rbp-88h]
  HSTRING *v14; // [rsp+68h] [rbp-80h]
  _BYTE *v15; // [rsp+70h] [rbp-78h]
  HSTRING *v16; // [rsp+78h] [rbp-70h]
  HSTRING *v17; // [rsp+80h] [rbp-68h]
  HSTRING *v18; // [rsp+88h] [rbp-60h]
  HSTRING *v19; // [rsp+90h] [rbp-58h]
  __int64 v20; // [rsp+98h] [rbp-50h]
  __int64 v21; // [rsp+A0h] [rbp-48h]
  struct IServiceProvider *v22; // [rsp+A8h] [rbp-40h]
  winrt::immersive_shell_component *v23; // [rsp+B0h] [rbp-38h]
  _BYTE v24[8]; // [rsp+B8h] [rbp-30h] BYREF
  _BYTE v25[8]; // [rsp+C0h] [rbp-28h] BYREF
  _BYTE v26[8]; // [rsp+C8h] [rbp-20h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-18h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *>::_ConstructPromise(
    a2,
    (__int64)winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_2,
    *a1);
  v20 = a2 + 448;
  v10 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v10,
    v9);
  v11 = v24;
  v12 = (HSTRING *)winrt::Windows::UI::StartScreen::SecondaryTile::SecondaryTile(v24, a6);
  v17 = v12;
  v13 = v25;
  v14 = (HSTRING *)winrt::Windows::UI::StartScreen::SecondaryTile::SecondaryTile(v25, a5);
  v18 = v14;
  v15 = v26;
  v16 = (HSTRING *)winrt::Windows::UI::StartScreen::SecondaryTile::SecondaryTile(v26, a4);
  v19 = v16;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_13_::_parameters_::_parameters_(
    v20,
    a8,
    v16,
    v18,
    v17,
    *a7);
  v21 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v21,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 448)) )
  {
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_2(a2);
  }
  else
  {
    v23 = (winrt::immersive_shell_component *)(a2 + 448);
    v22 = (struct IServiceProvider *)*std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                        &v27,
                                        a2);
    winrt::immersive_shell_component::publish_services(v23, v22, v8);
  }
}
