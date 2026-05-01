/*
 * XREFs of ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x1803ACCEC
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x1803AF3CC (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicatio.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180072488 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801CA244 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180212FE0 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ??$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803A852C (--$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA.c)
 *     ??$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803A8754 (--$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@V_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAV_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@@Z @ 0x1803A8A1C (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal.c)
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x1803AEAC4 (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x1803AEBBC (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AppViewDataSourceAdapterBase::InitializeDataSource(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IImmersiveShellHookService *a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a5,
        struct IInspectable *a6,
        struct IInspectable *a7,
        struct ITabViewManager *a8)
{
  __int64 *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rbx
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v18; // rcx
  const WCHAR *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct IInspectable *v22; // rbx
  struct IInspectable *v23; // rsi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  _QWORD *v29; // rsi
  int v30; // eax
  __int64 *v31; // rax
  int v32; // eax
  int v33; // eax
  struct IInspectable *v34; // rcx
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v35; // rcx
  int v36; // eax
  int v37; // eax
  AppViewDataSourceAdapterBase *v38; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v39; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **v41; // [rsp+60h] [rbp+30h] BYREF

  v12 = (__int64 *)wil::ActivateInstance<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSink>(
                     (__int64)&v41,
                     (__int64)a2,
                     (unsigned int)a3);
  v13 = *v12;
  *v12 = 0LL;
  v14 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v13;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 5, (__int64)a3);
  v17 = *((_QWORD *)this + 7);
  v18 = a5;
  *((_QWORD *)this + 7) = a5;
  if ( v18 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v19 = wil::GetActivationFactory<Windows::Internal::Shell::Multitasking::Desktop::IDesktopIconFactoryStatics>(
          (const WCHAR *)&a5,
          v15,
          v16);
  v20 = *(_QWORD *)v19;
  *(_QWORD *)v19 = 0LL;
  v21 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v20;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&a5);
  v22 = a6;
  if ( a6 )
  {
    v23 = a7;
    if ( a7 )
    {
      if ( a8 )
      {
        wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
          (__int64 *)this + 10,
          (__int64)a8);
        v24 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = 0LL;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v25 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, char *))v22->lpVtbl->QueryInterface)(
                v22,
                &GUID_de815fce_67de_41ea_8c7f_37a65bf92294,
                (char *)this + 64);
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            306LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
            (const char *)(unsigned int)v25);
          __debugbreak();
        }
        v26 = *((_QWORD *)this + 9);
        *((_QWORD *)this + 9) = 0LL;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        v27 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, char *))v23->lpVtbl->QueryInterface)(
                v23,
                &GUID_947c042a_0955_4e95_b853_d3c1877d5ef2,
                (char *)this + 72);
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            307LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
            (const char *)(unsigned int)v27);
          __debugbreak();
        }
        v28 = *((_QWORD *)this + 8);
        v29 = (_QWORD *)((char *)this + 88);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 11);
        v30 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 112LL))(v28, (char *)this + 88);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            308LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
            (const char *)(unsigned int)v30);
          __debugbreak();
        }
        a5 = 0LL;
        v41 = &a5;
        v31 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v41);
        v32 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(
                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
                v31);
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            311LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
            (const char *)(unsigned int)v32);
          __debugbreak();
        }
        v38 = this;
        v39 = a5;
        if ( a5 )
          (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)a5 + 8LL))(a5);
        wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_>(
          (__int64 *)&a6,
          (__int64)&v38);
        if ( v39 )
          (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v39 + 16LL))(v39);
        v33 = (*(__int64 (__fastcall **)(_QWORD, struct IInspectable *, char *))(*(_QWORD *)*v29 + 152LL))(
                *v29,
                a6,
                (char *)this + 128);
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            332LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
            (const char *)(unsigned int)v33);
          __debugbreak();
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 56LL))(*v29);
        v34 = a6;
        if ( a6 )
        {
          a6 = 0LL;
          ((void (__fastcall *)(struct IInspectable *))v34->lpVtbl->Release)(v34);
        }
        v35 = a5;
        if ( a5 )
        {
          a5 = 0LL;
          (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
  }
  v36 = AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Register(
          (char *)this + 96,
          *((_QWORD *)this + 4));
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      337LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v36);
    __debugbreak();
  }
  if ( a4 )
  {
    v37 = AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Register(
            (char *)this + 112,
            a4);
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        342LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v37);
      __debugbreak();
    }
  }
}
