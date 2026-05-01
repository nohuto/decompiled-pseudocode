/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC9F0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$1 @ 0x1800FC88C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     ?ShouldForceItemVisible@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x18008D020 (-ShouldForceItemVisible@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??__Lwinrt@@YA?AUawaitable@?1??resume_after@0@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@0@Z @ 0x1800E8B00 (--__Lwinrt@@YA-AUawaitable@-1--resume_after@0@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chron.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE2F4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF268 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ??$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z @ 0x1800F3CE4 (--$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z.c)
 *     ??$WindowTabHostThumbnailQueued@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z @ 0x1800F3D6C (--$WindowTabHostThumbnailQueued@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z.c)
 *     ?TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ @ 0x180100A60 (-TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801014A0 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x180267A7C (--$-0_JU-$ratio@$00$0DOI@@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-.c)
 *     ?try_lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18028254C (-try_lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x18028EE20 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ??B_Atomic_bool@std@@QEBA_NXZ @ 0x18028EEA8 (--B_Atomic_bool@std@@QEBA_NXZ.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1804D191C (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1804D5134 (-await_ready@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NX.c)
 *     ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x1804D51B4 (-await_ready@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1804D5204 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D5334 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1804D5424 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D548C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  struct ISwitchItemElement *v3; // rdx
  MultitaskingViewAnimationCoordinatorBase *v4; // rcx
  struct ISwitchItemElement *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  winrt::immersive_shell_component *v8; // rax
  struct IServiceProvider *v9; // rdx
  struct IProfferService *v10; // r8
  winrt::immersive_shell_component *v11; // rax
  struct IServiceProvider *v12; // rdx
  struct IProfferService *v13; // r8
  struct IServiceProvider *v14; // rdx
  struct IProfferService *v15; // r8
  struct IProfferService *v16; // r8
  char v17; // [rsp+2Dh] [rbp-4EBh]
  __int64 v18; // [rsp+470h] [rbp-A8h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 1:
    case 3:
      goto LABEL_35;
    case 2:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 368), a2, a3);
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        *(_QWORD *)(a1 + 368),
        a1 + 16);
      *(_BYTE *)(a1 + 64) = MultitaskingViewAnimationCoordinatorBase::ShouldForceItemVisible(v4, v3);
      *(_QWORD *)(a1 + 56) = a1 + 64;
      if ( !MultitaskingViewAnimationCoordinatorBase::ShouldForceItemVisible(
              *(MultitaskingViewAnimationCoordinatorBase **)(a1 + 56),
              v5) )
      {
        *(_QWORD *)(a1 + 80) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                  (_QWORD *)(a1 + 72),
                                  a1);
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 80));
        return;
      }
      *(_DWORD *)(a1 + 192) = 0;
LABEL_7:
      winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 56), a2, a3);
      *(_DWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 92) = 0;
      wil::srwlock::try_lock_exclusive(*(_QWORD *)(a1 + 368) + 168LL, a1 + 24);
      if ( !Microsoft::WRL::operator!=<IApplicationViewCollection>((_QWORD *)(a1 + 24)) )
      {
        LOBYTE(v6) = 1;
        std::atomic<bool>::operator=(*(_QWORD *)(a1 + 368) + 136LL, v6);
        *(_BYTE *)(a1 + 168) = 0;
        WindowTabHostTelemetry::WindowTabHostThumbnailQueued<bool>((char *)(a1 + 168));
        v8 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
        winrt::immersive_shell_component::publish_services(v8, v9, v10);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
        goto LABEL_32;
      }
      *(_DWORD *)(a1 + 96) = 0;
      LOBYTE(v6) = 1;
      std::atomic<bool>::operator=(*(_QWORD *)(a1 + 368) + 136LL, v6);
      break;
    case 4:
      *(_DWORD *)(a1 + 192) = 0;
      goto LABEL_7;
    case 5:
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
      goto LABEL_35;
    case 6:
      *(_DWORD *)(a1 + 208) = 0;
      goto LABEL_16;
    case 7:
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 32));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
      goto LABEL_35;
    case 8:
      *(_DWORD *)(a1 + 224) = 0;
      goto LABEL_25;
    case 9:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 40);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
      goto LABEL_35;
    default:
      __debugbreak();
      return;
  }
  while ( (unsigned __int8)std::_Atomic_bool::operator bool(*(_QWORD *)(a1 + 368) + 136LL) )
  {
    std::atomic<bool>::operator=(*(_QWORD *)(a1 + 368) + 136LL, 0LL);
    *(_QWORD *)(a1 + 272) = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync(
                              *(_QWORD *)(a1 + 368),
                              a1 + 32);
    *(_QWORD *)(a1 + 320) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                              (_QWORD *)(a1 + 112),
                              *(_QWORD *)(a1 + 272));
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 320);
    *(_BYTE *)(a1 + 304) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_ready(*(_QWORD *)(a1 + 104));
    if ( !*(_BYTE *)(a1 + 304) )
    {
      *(_QWORD *)(a1 + 128) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                 (_QWORD *)(a1 + 120),
                                 a1);
      *(_WORD *)(a1 + 8) = 6;
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend(
        *(_QWORD *)(a1 + 104),
        *(_QWORD *)(a1 + 128));
      return;
    }
    *(_DWORD *)(a1 + 208) = 0;
LABEL_16:
    *(_BYTE *)(a1 + 288) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_resume(*(_QWORD *)(a1 + 104));
    v17 = *(_BYTE *)(a1 + 288);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 32));
    if ( v17 )
    {
      *(_DWORD *)(a1 + 92) += *(_DWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 96) = 0;
    }
    else
    {
      if ( ++*(_DWORD *)(a1 + 96) >= 3u )
      {
        *(_DWORD *)(a1 + 92) += *(_DWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 96) = 0;
        std::atomic<bool>::operator=(*(_QWORD *)(a1 + 368) + 136LL, 0LL);
        break;
      }
      LOBYTE(v7) = 1;
      std::atomic<bool>::operator=(*(_QWORD *)(a1 + 368) + 136LL, v7);
      if ( *(_DWORD *)(a1 + 96) > 1u )
      {
        *(_QWORD *)(a1 + 336) = std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                                  a1 + 144,
                                  &unk_180565BC0);
        *(_QWORD *)(a1 + 352) = winrt::operator co_await((_QWORD *)(a1 + 40), **(_QWORD **)(a1 + 336));
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 352);
        if ( !(unsigned __int8)`winrt::resume_after'::`2'::awaitable::await_ready(*(_QWORD *)(a1 + 136)) )
        {
          *(_QWORD *)(a1 + 160) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                     (_QWORD *)(a1 + 152),
                                     a1);
          *(_WORD *)(a1 + 8) = 8;
          `winrt::resume_after'::`2'::awaitable::await_suspend(*(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 160));
          return;
        }
        *(_DWORD *)(a1 + 224) = 0;
LABEL_25:
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 136), a2, a3);
        `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 40);
      }
    }
    ++*(_DWORD *)(a1 + 88);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
  *(_BYTE *)(a1 + 169) = 1;
  WindowTabHostTelemetry::WindowTabHostThumbnailQueued<bool>((char *)(a1 + 169));
  if ( *(_DWORD *)(a1 + 88) > 1u )
  {
    *(_DWORD *)(a1 + 172) = *(_DWORD *)(a1 + 88) - 1;
    WindowTabHostTelemetry::WindowTabHostThumbnailQueueChurn<unsigned int,unsigned int &>(
      (int *)(a1 + 172),
      (int *)(a1 + 92));
  }
  v11 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
  winrt::immersive_shell_component::publish_services(v11, v12, v13);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
LABEL_32:
  v18 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
  *(_QWORD *)(a1 + 176) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
                            v18,
                            (_BYTE *)(a1 + 184));
  if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 176)) )
  {
    *(_DWORD *)(a1 + 256) = 0;
    winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 176), v14, v15);
LABEL_35:
    winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
    if ( *(_WORD *)(a1 + 10) )
      operator delete((void *)a1, (const struct std::nothrow_t *)0x178);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                               (_QWORD *)(a1 + 240),
                               a1);
    *(_WORD *)(a1 + 8) = 0;
    winrt::immersive_shell_component::publish_services(
      *(winrt::immersive_shell_component **)(a1 + 176),
      *(struct IServiceProvider **)(a1 + 248),
      v16);
  }
}
