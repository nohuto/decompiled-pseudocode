/*
 * XREFs of ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1803AD348
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x1803AF69C (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicatio.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800D37A4 (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x1801C94B4 (-end@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180219D64 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1802DA594 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Wind.c)
 *     ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803AB1F8 (-AddItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compos.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1803AB4E0 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1803AC204 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1803AF9C0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall AppViewDataSourceAdapter::InitializeItems(AppViewDataSourceAdapter *this)
{
  AppViewDataSourceAdapter *v1; // rsi
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rax
  const char *v13; // r9
  struct IApplicationView *v14; // rbx
  const char *v15; // r9
  int v16[2]; // [rsp+20h] [rbp-A8h] BYREF
  struct IApplicationView *v17; // [rsp+28h] [rbp-A0h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **v18; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+38h] [rbp-90h] BYREF
  struct IApplicationView *v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **v22; // [rsp+50h] [rbp-78h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v23; // [rsp+58h] [rbp-70h] BYREF
  int v24; // [rsp+60h] [rbp-68h]
  struct IApplicationView *v25; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-58h] BYREF
  int v27; // [rsp+78h] [rbp-50h]
  __int64 v28; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v29[8]; // [rsp+88h] [rbp-40h] BYREF
  int v30; // [rsp+90h] [rbp-38h]
  __int64 v31[6]; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  struct IApplicationView *v36; // [rsp+D8h] [rbp+10h] BYREF
  struct IApplicationView *v37; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v38; // [rsp+E8h] [rbp+20h] BYREF

  v1 = this;
  if ( !*((_QWORD *)this + 5) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      214LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v38 = 0LL;
  v2 = *((_QWORD *)this + 5);
  v38 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v38);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      217LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v23,
    v38);
  v16[0] = 0;
  v17 = 0LL;
  v18 = &v23;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject((__int64 *)v16);
  LODWORD(v20) = v24;
  v21 = 0LL;
  v22 = &v23;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject((__int64 *)&v20);
  while ( v16[0] != (_DWORD)v20 || v18 != v22 )
  {
    v14 = v17;
    v36 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
    try
    {
      if ( AppViewDataSourceAdapter::ShouldIncludeView((AppViewDataSourceAdapter *)((char *)v1 + 8), v14) )
      {
        AppViewDataSourceAdapterBase::AddItemForView((AppViewDataSourceAdapter *)((char *)v1 + 8), (__int64 *)&v37, v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xE5,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        v15);
      v1 = this;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    ++v16[0];
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject((__int64 *)v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v19 = 0LL;
  v4 = *((_QWORD *)v1 + 5);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v19);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL))(v4, &v19);
  if ( v19 )
  {
    AppViewDataSourceAdapterBase::FindItemForView((__int64)v1 + 8, &v36, v19);
    if ( v36 )
    {
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v36 + 72LL))(v36, v5);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
  }
  if ( *((_QWORD *)v1 + 9) && *((_DWORD *)v1 + 84) == 2 )
  {
    v37 = 0LL;
    v6 = *((_QWORD *)v1 + 9);
    v37 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v6 + 48LL))(v6, &v37);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        248LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v36 = v37;
    *(_QWORD *)v16 = v37;
    LODWORD(v17) = 0;
    v18 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v36,
      (__int64)v29);
    v8 = (int)v17;
    while ( v8 != v30 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem ***))(**(_QWORD **)v16 + 48LL))(
             *(_QWORD *)v16,
             (unsigned int)v17,
             &v18);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5495LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v36 = 0LL;
      v10 = (*((__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **, struct IApplicationView **))*v18
             + 7))(
              v18,
              &v36);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          253LL,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      v25 = v36;
      v20 = v36;
      LODWORD(v21) = 0;
      v22 = 0LL;
      wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
        &v25,
        (__int64)v26);
      v11 = v21;
      while ( v11 != v27 )
      {
        v12 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v20);
        try
        {
          AppViewDataSourceAdapter::AddItemForTab(
            v1,
            &v23,
            (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)*v12);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x106,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
            v13);
          v1 = this;
        }
        v11 = v21 + 1;
        LODWORD(v21) = v21 + 1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
      v8 = (_DWORD)v17 + 1;
      LODWORD(v17) = (_DWORD)v17 + 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( v37 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
}
