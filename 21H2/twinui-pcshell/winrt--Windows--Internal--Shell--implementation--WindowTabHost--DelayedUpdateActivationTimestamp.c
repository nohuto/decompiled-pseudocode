/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800E8ED8
 * Callers:
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1800EA5AC (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     _lambda_74486eaaeca8e264bd14b205336c09f8_::_lambda_74486eaaeca8e264bd14b205336c09f8_ @ 0x1800E717C (_lambda_74486eaaeca8e264bd14b205336c09f8_--_lambda_74486eaaeca8e264bd14b205336c09f8_.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800E9050 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800E9050.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800ED8F0 (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@impl.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE2F4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF268 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__InitCoro_1(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct IProfferService *v5; // r8
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+28h] [rbp-40h]
  _QWORD *v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  struct IServiceProvider *v10; // [rsp+40h] [rbp-28h]
  winrt::immersive_shell_component *v11; // [rsp+48h] [rbp-20h]
  _BYTE v12[8]; // [rsp+50h] [rbp-18h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *>::_ConstructPromise(
    a2,
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_2,
    *a1);
  v8 = (_QWORD *)(a2 + 560);
  v7 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v7,
    v6);
  lambda_74486eaaeca8e264bd14b205336c09f8_::_lambda_74486eaaeca8e264bd14b205336c09f8_(v8, a5, a4);
  v9 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v9,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 560)) )
  {
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_2(a2);
  }
  else
  {
    v11 = (winrt::immersive_shell_component *)(a2 + 560);
    v10 = *(struct IServiceProvider **)std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                         v12,
                                         a2);
    winrt::immersive_shell_component::publish_services(v11, v10, v5);
  }
}
