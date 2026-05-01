/*
 * XREFs of winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x1801051A0
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_InitCoro$1 @ 0x180105034 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--TryWriteFeedsAv.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??__Lwinrt@@YA?AUawaitable@?1??resume_after@0@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@0@Z @ 0x1800E8990 (--__Lwinrt@@YA-AUawaitable@-1--resume_after@0@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chron.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE184 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE220 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF0F8 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ??$?0HX@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z @ 0x180101C1C (--$-0HX@-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z.c)
 *     ??$?0V_lambda_26d3ef13f760514ffe3067a0565e182b_@@@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@V_lambda_26d3ef13f760514ffe3067a0565e182b_@@@Z @ 0x180101C30 (--$-0V_lambda_26d3ef13f760514ffe3067a0565e182b_@@@NetworkStatusChangedEventHandler@Connectivity@.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x180102760 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUNetworkSt.c)
 *     ?RetryConsentChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1801041CC (-RetryConsentChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ShellFeedsLauncher_ListenForFeedsConsentChanges@ShellFeedsTelemetry@@SAXXZ @ 0x180104F38 (-ShellFeedsLauncher_ListenForFeedsConsentChanges@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ @ 0x180104F8C (-ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?TryWriteFeedsDeviceEnterpriseStatus@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x180106854 (-TryWriteFeedsDeviceEnterpriseStatus@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1801081B8 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     HandleToULong @ 0x1801A899C (HandleToULong.c)
 *     ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x1802678CC (--$-0_JU-$ratio@$00$0DOI@@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1804D158C (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x1804D4E24 (-await_ready@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1804D5094 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  unsigned __int8 *v3; // r9
  __int64 v4; // rcx
  winrt::immersive_shell_component *v5; // rax
  struct IServiceProvider *v6; // rdx
  struct IProfferService *v7; // r8
  struct IServiceProvider *v8; // rdx
  struct IProfferService *v9; // r8
  struct IProfferService *v10; // r8
  __int64 v11; // [rsp+2C8h] [rbp-A0h]
  _UNKNOWN *retaddr; // [rsp+368h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 1:
    case 3:
      goto LABEL_16;
    case 2:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 304), a2, a3);
      *(_QWORD *)(a1 + 56) = a1 + 48;
      *(_DWORD *)(a1 + 72) = 1;
      *(_QWORD *)(a1 + 240) = std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
                                (_QWORD *)(a1 + 64),
                                (int *)(a1 + 72));
      *(_QWORD *)(a1 + 192) = std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                                *(_QWORD *)(a1 + 56),
                                *(_QWORD *)(a1 + 240));
      *(_QWORD *)(a1 + 208) = winrt::operator co_await((_QWORD *)(a1 + 16), **(_QWORD **)(a1 + 192));
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 208);
      if ( (unsigned __int8)`winrt::resume_after'::`2'::awaitable::await_ready(*(_QWORD *)(a1 + 40)) )
      {
        *(_DWORD *)(a1 + 144) = 0;
LABEL_7:
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 40), a2, a3);
        `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 16);
        *(_BYTE *)(a1 + 96) = 0;
        *(_BYTE *)(a1 + 97) = 0;
        *(_DWORD *)(a1 + 224) = ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
                                  0LL,
                                  (unsigned __int8)a1 + 96,
                                  (unsigned __int8 *)(a1 + 97),
                                  v3);
        *(_DWORD *)(a1 + 288) = HandleToULong((const void *)*(unsigned int *)(a1 + 224));
        *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 288);
        *(_QWORD *)(a1 + 184) = retaddr;
        if ( *(int *)(a1 + 176) < 0 )
          wil::details::in1diag3::_Log_Hr(
            *(wil::details::in1diag3 **)(a1 + 184),
            (void *)0x87,
            (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
            (const char *)*(unsigned int *)(a1 + 176));
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus(
          *(_QWORD *)(a1 + 304),
          a1 + 98);
        if ( *(_BYTE *)(a1 + 97) )
        {
          ShellFeedsTelemetry::ShellFeedsLauncher_ListenForFeedsConsentChanges(v4);
          winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks(
            *(_QWORD *)(a1 + 304),
            (_BYTE *)(a1 + 99));
        }
        else if ( *(_BYTE *)(a1 + 96) )
        {
          ShellFeedsTelemetry::ShellFeedsLauncher_NetworkStatusChangeListenerStarted(v4);
          *(_QWORD *)(a1 + 272) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                    (_QWORD *)(a1 + 104),
                                    *(_QWORD *)(a1 + 304));
          winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
            (_QWORD *)(a1 + 32),
            **(_QWORD **)(a1 + 272));
          *(_QWORD *)(a1 + 256) = winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged((const struct winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler *)(a1 + 32));
          *(_QWORD *)(*(_QWORD *)(a1 + 304) + 104LL) = *(_QWORD *)(a1 + 256);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 32));
        }
        v5 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
        winrt::immersive_shell_component::publish_services(v5, v6, v7);
        v11 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
        *(_QWORD *)(a1 + 112) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
                                  v11,
                                  (_BYTE *)(a1 + 120));
        if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 112)) )
        {
          *(_DWORD *)(a1 + 160) = 0;
          winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 112), v8, v9);
LABEL_16:
          winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x138);
        }
        else
        {
          *(_QWORD *)(a1 + 136) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                     (_QWORD *)(a1 + 128),
                                     a1);
          *(_WORD *)(a1 + 8) = 0;
          winrt::immersive_shell_component::publish_services(
            *(winrt::immersive_shell_component **)(a1 + 112),
            *(struct IServiceProvider **)(a1 + 136),
            v10);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                  (_QWORD *)(a1 + 80),
                                  a1);
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_after'::`2'::awaitable::await_suspend(*(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 88));
      }
      return;
    case 4:
      *(_DWORD *)(a1 + 144) = 0;
      goto LABEL_7;
    case 5:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 16);
      goto LABEL_16;
    default:
      __debugbreak();
      return;
  }
}
