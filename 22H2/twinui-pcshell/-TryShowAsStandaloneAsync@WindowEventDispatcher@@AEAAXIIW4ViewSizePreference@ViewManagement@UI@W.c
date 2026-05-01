/*
 * XREFs of ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18001CC30
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18007C6A0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18001C270 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D038 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18001D120 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800216A0 (-GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundati.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18004675C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x180076F84 (--$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAE.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x18007E7A8 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180085584 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CAAB0 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 WindowEventDispatcher::TryShowAsStandaloneAsync(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3, int a4, ...)
{
  struct Windows::Foundation::Collections::IPropertySet **CachedView; // rax
  struct Windows::Foundation::Collections::IPropertySet *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *SharedListener; // rax
  __int64 v13; // rax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rax
  int PendingActivationData; // ecx
  int v16; // eax
  std::_Ref_count_base *v17; // rbx
  int v18; // eax
  struct IInspectable *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v23; // [rsp+28h] [rbp-91h]
  int v24; // [rsp+28h] [rbp-91h]
  __int64 v25; // [rsp+58h] [rbp-61h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+60h] [rbp-59h] BYREF
  __int64 v27; // [rsp+68h] [rbp-51h] BYREF
  __int64 v28; // [rsp+70h] [rbp-49h] BYREF
  __int64 v29; // [rsp+78h] [rbp-41h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+80h] [rbp-39h] BYREF
  __int64 v31; // [rsp+88h] [rbp-31h] BYREF
  __int64 v32; // [rsp+90h] [rbp-29h] BYREF
  __int64 v33; // [rsp+98h] [rbp-21h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-19h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v35; // [rsp+A8h] [rbp-11h] BYREF
  std::_Ref_count_base *v36; // [rsp+B0h] [rbp-9h]
  std::_Ref_count_base *v37[2]; // [rsp+B8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  struct IInspectable *v39; // [rsp+108h] [rbp+4Fh] BYREF
  unsigned int v40; // [rsp+110h] [rbp+57h] BYREF
  unsigned int v41; // [rsp+118h] [rbp+5Fh] BYREF
  int v42; // [rsp+120h] [rbp+67h] BYREF
  __int64 v43; // [rsp+128h] [rbp+6Fh] BYREF
  va_list va; // [rsp+128h] [rbp+6Fh]
  unsigned __int64 v45; // [rsp+130h] [rbp+77h] BYREF
  va_list va1; // [rsp+130h] [rbp+77h]
  va_list va2; // [rsp+138h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v43 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v45 = va_arg(va2, _QWORD);
  v42 = a4;
  v41 = a3;
  v40 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsStandaloneAsync<unsigned int &,unsigned int &>(
    &v40,
    &v41);
  v30 = 0LL;
  v29 = 0LL;
  *(_OWORD *)v37 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  v33 = (__int64)&a1[59];
  CachedView = (struct Windows::Foundation::Collections::IPropertySet **)WindowEventDispatcher::GetCachedView(
                                                                           a1,
                                                                           &v25,
                                                                           a2);
  v8 = *CachedView;
  *CachedView = 0LL;
  v30 = v8;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v25);
  if ( !v8 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x991,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v23);
    __debugbreak();
  }
  v9 = (__int64 *)WindowEventDispatcher::GetCachedView(a1, &v25, a3);
  v10 = *v9;
  *v9 = 0LL;
  v29 = v10;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v25);
  if ( !v10 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x993,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v23);
    __debugbreak();
  }
  v25 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v26 = v8;
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v8 + 8LL))(v8);
  SharedListener = WindowEventDispatcher::GetSharedListener(v11, &v35, &v26, &v25);
  std::shared_ptr<ViewEventRegistration>::operator=(v37, SharedListener);
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  if ( a1 != (RTL_SRWLOCK *)-472LL )
    ReleaseSRWLockShared(a1 + 59);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v30,
    &v28);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v29,
    &v32);
  v27 = 0LL;
  v13 = *(_QWORD *)v8;
  v27 = 0LL;
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, __int64 *))(v13 + 400))(v8, &v27);
  v14 = 0LL;
  v26 = 0LL;
  if ( v45 )
  {
    v26 = 0LL;
    PendingActivationData = WindowEventDispatcher::GetPendingActivationData((WindowEventDispatcher *)&a1[3], v45, &v26);
    v14 = v26;
    if ( PendingActivationData < 0 || !v26 )
      v45 = 0LL;
  }
  v34 = v27;
  v35 = v14;
  v31 = v32;
  v33 = v28;
  v25 = 0LL;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
          (unsigned int)&v25,
          (unsigned int)&v33,
          (unsigned int)&v31,
          (unsigned int)&v42,
          (__int64)va,
          (__int64)va1,
          (__int64)va2,
          (__int64)&v35,
          (__int64)&v34);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9B1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v24);
  }
  else
  {
    v39 = 0LL;
    v17 = v37[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    if ( *((_QWORD *)v17 + 3) )
    {
      v18 = Microsoft::WRL::WeakRef::InternalResolve(
              (std::_Ref_count_base *)((char *)v17 + 24),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v39);
      v19 = v39;
      goto LABEL_13;
    }
  }
  v19 = 0LL;
  v39 = 0LL;
  v18 = -2147024809;
LABEL_13:
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9B5,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v18,
      v24);
    __debugbreak();
  }
  v20 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v19->lpVtbl->GetIids)(v19, v28, v25);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9B6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v20,
      v24);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    v21 = v27;
    if ( !v27 )
      goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_16:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  if ( v37[1] )
    std::_Ref_count_base::_Decref(v37[1]);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v29);
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v30);
}
