/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$1 @ 0x18013E0CC
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x18013F874 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE184 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF0F8 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ?_Promise_from_frame@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@SAPEAUpromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@23@PEAX@Z @ 0x180100C94 (-_Promise_from_frame@-$_Resumable_helper_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_ @ 0x180134C18 (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent_--_4_--_parameters_--_paramet.c)
 *     ??0?$shared_ptr@VPinOperationContext@@@std@@QEAA@$$QEAV01@@Z @ 0x1801353CC (--0-$shared_ptr@VPinOperationContext@@@std@@QEAA@$$QEAV01@@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     std::experimental::_Resumable_helper_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::_ConstructPromise @ 0x1801446F4 (std--experimental--_Resumable_helper_traits_winrt--Windows--Foundation--IAsyncOperation_winrt--W.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::get_return_object @ 0x18014577C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18014577C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_1(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  struct IProfferService *v6; // r8
  _BYTE v7[7]; // [rsp+31h] [rbp-77h] BYREF
  __int64 v8; // [rsp+38h] [rbp-70h]
  _QWORD *v9; // [rsp+40h] [rbp-68h]
  _QWORD *v10; // [rsp+48h] [rbp-60h]
  _QWORD *v11; // [rsp+50h] [rbp-58h]
  _QWORD *v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  struct IServiceProvider *v14; // [rsp+68h] [rbp-40h]
  winrt::immersive_shell_component *v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+88h] [rbp-20h] BYREF

  std::experimental::_Resumable_helper_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::_ConstructPromise(
    a2,
    anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_2,
    *a1);
  v12 = (_QWORD *)(a2 + 592);
  v8 = std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::_Promise_from_frame(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v8,
    v7);
  v9 = v17;
  v10 = std::shared_ptr<PinOperationContext>::shared_ptr<PinOperationContext>(v17, a4);
  v11 = v10;
  _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_(v12, a6, v10, a5);
  v13 = std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::_Promise_from_frame(a2);
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::get_return_object(
    v13,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 592)) )
  {
    anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_2(a2);
  }
  else
  {
    v15 = (winrt::immersive_shell_component *)(a2 + 592);
    v14 = (struct IServiceProvider *)*std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                        &v16,
                                        a2);
    winrt::immersive_shell_component::publish_services(v15, v14, v6);
  }
}
