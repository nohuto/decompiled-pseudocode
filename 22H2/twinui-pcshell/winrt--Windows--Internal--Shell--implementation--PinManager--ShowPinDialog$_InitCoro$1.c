/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$1 @ 0x180140164
 * Callers:
 *     ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x1801415D8 (-ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-$IAsyncOperation@.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE184 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF0F8 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ?_Promise_from_frame@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@SAPEAUpromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@23@PEAX@Z @ 0x180100C94 (-_Promise_from_frame@-$_Resumable_helper_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1801012F0 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IRefere.c)
 *     ??0_parameters_@?L@??ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z@QEAA@QEAU234567@01Ususpend_never@experimental@std@@@Z @ 0x180134F44 (--0_parameters_@-L@--ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ??0?$shared_ptr@VPinOperationContext@@@std@@QEAA@$$QEAV01@@Z @ 0x1801353CC (--0-$shared_ptr@VPinOperationContext@@@std@@QEAA@$$QEAV01@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x180140370 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@SAXPEAX0H@Z @ 0x180144794 (-_ConstructPromise@-$_Resumable_helper_traits@U-$IAsyncOperation@_N@Foundation@Wind_ea_180144794.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__InitCoro_1(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char *a5,
        __int64 a6)
{
  struct IProfferService *v6; // r8
  _BYTE v7[7]; // [rsp+31h] [rbp-77h] BYREF
  __int64 v8; // [rsp+38h] [rbp-70h]
  _QWORD *v9; // [rsp+40h] [rbp-68h]
  _QWORD *v10; // [rsp+48h] [rbp-60h]
  _QWORD *v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  struct IServiceProvider *v14; // [rsp+68h] [rbp-40h]
  winrt::immersive_shell_component *v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+88h] [rbp-20h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::_ConstructPromise(
    a2,
    winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_2,
    *a1);
  v12 = a2 + 528;
  v8 = std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::_Promise_from_frame(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v8,
    v7);
  v9 = v17;
  v10 = std::shared_ptr<PinOperationContext>::shared_ptr<PinOperationContext>(v17, a4);
  v11 = v10;
  `winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog'::`11'::_parameters_::_parameters_(
    v12,
    a6,
    v10,
    *a5);
  v13 = std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::_Promise_from_frame(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::get_return_object(
    v13,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 528)) )
  {
    winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_2(a2);
  }
  else
  {
    v15 = (winrt::immersive_shell_component *)(a2 + 528);
    v14 = (struct IServiceProvider *)*std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                        &v16,
                                        a2);
    winrt::immersive_shell_component::publish_services(v15, v14, v6);
  }
}
