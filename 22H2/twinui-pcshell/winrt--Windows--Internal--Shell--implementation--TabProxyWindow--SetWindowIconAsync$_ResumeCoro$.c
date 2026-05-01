/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800F8270
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$1 @ 0x1800F8100 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_InitCoro$1.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008CD70 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShouldForceItemVisible@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x18008D020 (-ShouldForceItemVisible@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008D2A0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ?_Get@?$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEBAPEBXXZ @ 0x18008D3B0 (-_Get@-$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU-$pair@V-$shared_p.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1338 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1800A30A4 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800EE184 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE220 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800EF0F8 (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ?Get@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAPEBGXZ @ 0x1800F0668 (-Get@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAPEBGXZ.c)
 *     ??$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x1800F3D5C (--$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1800F3E50 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-De.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800F44F8 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$.c)
 *     ??4?$com_ptr@UIStream@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800F47A8 (--4-$com_ptr@UIStream@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?GetIconAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1800F5830 (-GetIconAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Intern.c)
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180100D98 (-await_ready@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Stor.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x180100DB8 (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180100EB4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x1801010C4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamReferen.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180101330 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x18010186C (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ?wait_for@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180101BE0 (-wait_for@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamRe.c)
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x18014F52C (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x1802678CC (--$-0_JU-$ratio@$00$0DOI@@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803EB178 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D50FC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1804D6220 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  struct ISwitchItemElement *v3; // rdx
  MultitaskingViewAnimationCoordinatorBase *v4; // rcx
  struct ISwitchItemElement *v5; // rdx
  HMONITOR v6; // rax
  winrt::immersive_shell_component *v7; // rax
  struct IServiceProvider *v8; // rdx
  struct IProfferService *v9; // r8
  winrt::immersive_shell_component *v10; // rax
  struct IServiceProvider *v11; // rdx
  struct IProfferService *v12; // r8
  winrt::immersive_shell_component *v13; // rax
  struct IServiceProvider *v14; // rdx
  struct IProfferService *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  winrt::immersive_shell_component *v18; // rax
  struct IServiceProvider *v19; // rdx
  struct IProfferService *v20; // r8
  struct IServiceProvider *v21; // rdx
  struct IProfferService *v22; // r8
  struct IProfferService *v23; // r8
  char v24; // [rsp+32h] [rbp-7E6h]
  char v25; // [rsp+35h] [rbp-7E3h]
  char v26; // [rsp+36h] [rbp-7E2h]
  int SystemMetricsForDpi; // [rsp+64h] [rbp-7B4h]
  int v28; // [rsp+78h] [rbp-7A0h]
  __int64 v29; // [rsp+F0h] [rbp-728h]
  RTL_SRWLOCK *v30; // [rsp+1B0h] [rbp-668h]
  __int64 *v31; // [rsp+280h] [rbp-598h]
  HICON *v32; // [rsp+520h] [rbp-2F8h]
  struct IStream *v33; // [rsp+528h] [rbp-2F0h]
  struct IWICImagingFactory *v34; // [rsp+530h] [rbp-2E8h]
  __int64 lParam; // [rsp+570h] [rbp-2A8h]
  __int64 v36; // [rsp+590h] [rbp-288h]
  HICON *v37; // [rsp+658h] [rbp-1C0h]
  struct IStream *v38; // [rsp+660h] [rbp-1B8h]
  struct IWICImagingFactory *v39; // [rsp+668h] [rbp-1B0h]
  __int64 v40; // [rsp+6A8h] [rbp-170h]
  __int64 v41; // [rsp+6C8h] [rbp-150h]
  __int64 v42; // [rsp+728h] [rbp-F0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 1:
    case 3:
      goto LABEL_39;
    case 2:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 624), a2, a3);
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        *(_QWORD *)(a1 + 624),
        a1 + 16);
      *(_BYTE *)(a1 + 160) = MultitaskingViewAnimationCoordinatorBase::ShouldForceItemVisible(v4, v3);
      *(_QWORD *)(a1 + 152) = a1 + 160;
      if ( !MultitaskingViewAnimationCoordinatorBase::ShouldForceItemVisible(
              *(MultitaskingViewAnimationCoordinatorBase **)(a1 + 152),
              v5) )
      {
        *(_QWORD *)(a1 + 176) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                   (_QWORD *)(a1 + 168),
                                   a1);
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(*(_QWORD *)(a1 + 152), *(_QWORD *)(a1 + 176));
        return;
      }
      *(_DWORD *)(a1 + 256) = 0;
LABEL_7:
      winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 152), a2, a3);
      v30 = (RTL_SRWLOCK *)(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 16)
                          + 160);
      wil::srwlock::lock_exclusive(v30, (RTL_SRWLOCK **)(a1 + 24));
      v6 = MonitorFromWindow(0LL, 1u);
      *(_DWORD *)(a1 + 432) = GetDpiForMonitorInternal(v6, 0LL, a1 + 188, a1 + 184);
      if ( *(_DWORD *)(a1 + 432) )
      {
        SystemMetricsForDpi = GetSystemMetricsForDpi(50LL, *(unsigned int *)(a1 + 184));
        if ( (int)GetSystemMetricsForDpi(49LL, *(unsigned int *)(a1 + 188)) <= SystemMetricsForDpi )
          *(_DWORD *)(a1 + 272) = GetSystemMetricsForDpi(50LL, *(unsigned int *)(a1 + 184));
        else
          *(_DWORD *)(a1 + 272) = GetSystemMetricsForDpi(49LL, *(unsigned int *)(a1 + 188));
        *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 272);
        v28 = GetSystemMetricsForDpi(12LL, *(unsigned int *)(a1 + 184));
        if ( (int)GetSystemMetricsForDpi(11LL, *(unsigned int *)(a1 + 188)) <= v28 )
          *(_DWORD *)(a1 + 288) = GetSystemMetricsForDpi(12LL, *(unsigned int *)(a1 + 184));
        else
          *(_DWORD *)(a1 + 288) = GetSystemMetricsForDpi(11LL, *(unsigned int *)(a1 + 188));
        *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 288);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>((_QWORD *)(a1 + 32));
        v31 = (__int64 *)(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 16)
                        + 48);
        winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetIconAsync(
          v31,
          (_QWORD *)(a1 + 40));
        std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
          a1 + 200,
          &unk_180565B20);
        *(_DWORD *)(a1 + 448) = winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::wait_for(
                                  a1 + 40,
                                  a1 + 200);
        if ( *(_DWORD *)(a1 + 448) == 1 )
        {
          winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::get(
            a1 + 40,
            a1 + 48);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>((_QWORD *)(a1 + 56));
          v24 = winrt::Windows::Foundation::operator==(a1 + 48, a1 + 56);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 56));
          if ( v24 )
          {
            v13 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
            winrt::immersive_shell_component::publish_services(v13, v14, v15);
            winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 48));
            winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 40));
            winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a1 + 32));
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
          }
          else
          {
            *(_QWORD *)(a1 + 464) = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
                                      (__int64 *)(a1 + 48),
                                      (_QWORD *)(a1 + 64));
            *(_QWORD *)(a1 + 480) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                      (_QWORD *)(a1 + 216),
                                      *(_QWORD *)(a1 + 464));
            *(_QWORD *)(a1 + 208) = *(_QWORD *)(a1 + 480);
            *(_BYTE *)(a1 + 496) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready(*(_QWORD *)(a1 + 208));
            if ( !*(_BYTE *)(a1 + 496) )
            {
              *(_QWORD *)(a1 + 232) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                         (_QWORD *)(a1 + 224),
                                         a1);
              *(_WORD *)(a1 + 8) = 6;
              winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend(
                *(_QWORD *)(a1 + 208),
                *(_QWORD *)(a1 + 232));
              return;
            }
            *(_DWORD *)(a1 + 304) = 0;
LABEL_24:
            winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_resume(
              *(_QWORD *)(a1 + 208),
              a1 + 72);
            winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 64));
            *(_QWORD *)(a1 + 240) = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 72);
            *(_QWORD *)(a1 + 416) = winrt::capture<IStream,long (*)(IUnknown *,_GUID const &,void * *),IUnknown *>(
                                      (_QWORD *)(a1 + 80),
                                      CreateStreamOverRandomAccessStream,
                                      (_QWORD *)(a1 + 240));
            winrt::com_ptr<IStream>::operator=((__int64 *)(a1 + 32), *(__int64 **)(a1 + 416));
            winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a1 + 80));
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>((_QWORD *)(a1 + 88));
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>((_QWORD *)(a1 + 96));
            *(_QWORD *)(a1 + 512) = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(
                                      a1 + 104,
                                      a1 + 88);
            *(_QWORD *)(a1 + 528) = std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::_Get(*(_QWORD *)(a1 + 512));
            v32 = *(HICON **)(a1 + 528);
            v33 = (struct IStream *)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 32);
            v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 16);
            v34 = (struct IWICImagingFactory *)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(v16 + 104);
            *(_DWORD *)(a1 + 544) = CreateIconFromStreamWithWIC(v34, v33, *(_DWORD *)(a1 + 192), 1, v32);
            *(_DWORD *)(a1 + 368) = *(int *)(a1 + 544) >= 0;
            v25 = *(_BYTE *)(a1 + 368);
            wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(a1 + 104);
            if ( v25 )
            {
              lParam = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 88);
              SendMessageW(*(HWND *)(*(_QWORD *)(a1 + 624) + 32LL), 0x80u, 0LL, lParam);
              v36 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 16)
                  + 88;
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                v36,
                a1 + 88);
            }
            *(_DWORD *)(a1 + 320) = 0;
            memset((void *)(a1 + 324), 0, 4uLL);
            v29 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 32);
            *(_DWORD *)(a1 + 560) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v29 + 40LL))(
                                      v29,
                                      *(_QWORD *)(a1 + 320),
                                      0LL,
                                      0LL);
            if ( *(int *)(a1 + 560) >= 0 )
            {
              *(_QWORD *)(a1 + 576) = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(
                                        a1 + 128,
                                        a1 + 96);
              *(_QWORD *)(a1 + 592) = std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::_Get(*(_QWORD *)(a1 + 576));
              v37 = *(HICON **)(a1 + 592);
              v38 = (struct IStream *)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 32);
              v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 16);
              v39 = (struct IWICImagingFactory *)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(v17 + 104);
              *(_DWORD *)(a1 + 608) = CreateIconFromStreamWithWIC(v39, v38, *(_DWORD *)(a1 + 196), 1, v37);
              *(_DWORD *)(a1 + 384) = *(int *)(a1 + 608) >= 0;
              v26 = *(_BYTE *)(a1 + 384);
              wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(a1 + 128);
              if ( v26 )
              {
                v40 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 96);
                SendMessageW(*(HWND *)(*(_QWORD *)(a1 + 624) + 32LL), 0x80u, 1uLL, v40);
                v41 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Get(a1 + 16)
                    + 96;
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  v41,
                  a1 + 96);
              }
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>(a1 + 96);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>(a1 + 88);
            winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 72));
            winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 48));
            winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 40));
            winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a1 + 32));
            v18 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
            winrt::immersive_shell_component::publish_services(v18, v19, v20);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
          }
        }
        else
        {
          v10 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
          winrt::immersive_shell_component::publish_services(v10, v11, v12);
          winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 40));
          winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a1 + 32));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
        }
      }
      else
      {
        v7 = (winrt::immersive_shell_component *)std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
        winrt::immersive_shell_component::publish_services(v7, v8, v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
      }
      v42 = std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1);
      *(_QWORD *)(a1 + 328) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
                                v42,
                                (_BYTE *)(a1 + 336));
      if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 328)) )
      {
        *(_DWORD *)(a1 + 400) = 0;
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 328), v21, v22);
LABEL_39:
        winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x278);
      }
      else
      {
        *(_QWORD *)(a1 + 352) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                   (_QWORD *)(a1 + 344),
                                   a1);
        *(_WORD *)(a1 + 8) = 0;
        winrt::immersive_shell_component::publish_services(
          *(winrt::immersive_shell_component **)(a1 + 328),
          *(struct IServiceProvider **)(a1 + 352),
          v23);
      }
      return;
    case 4:
      *(_DWORD *)(a1 + 256) = 0;
      goto LABEL_7;
    case 5:
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
      goto LABEL_39;
    case 6:
      *(_DWORD *)(a1 + 304) = 0;
      goto LABEL_24;
    case 7:
      winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 64));
      winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 48));
      winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a1 + 40));
      winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a1 + 32));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 24));
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 16));
      goto LABEL_39;
    default:
      __debugbreak();
      return;
  }
}
