/*
 * XREFs of ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001CF20
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x1803269D0 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D038 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x18001D328 (--$WindowEventDispatcher_OnAppViewRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001D3F0 (-RemoveCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_except.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x1800371E0 (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180085584 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CAAB0 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18031F800 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180327130 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::AppViewRemoved(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IUnknown *v3; // rdi
  char *v4; // r15
  int v7; // eax
  struct IUnknown **v8; // rax
  __int64 v10; // rax
  RTL_SRWLOCK *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  char *v13; // [rsp+28h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-48h]
  std::_Ref_count_base *v15[2]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v17; // [rsp+88h] [rbp+10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+90h] [rbp+18h] BYREF
  struct IUnknown *v19; // [rsp+98h] [rbp+20h] BYREF

  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v17);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x23D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v12);
  }
  else
  {
    v19 = 0LL;
    v2 = (RTL_SRWLOCK *)((char *)this + 456);
    AcquireSRWLockExclusive((PSRWLOCK)this + 57);
    v13 = (char *)this + 456;
    v4 = (char *)this - 16;
    v8 = (struct IUnknown **)WindowEventDispatcher::RemoveCachedView((char *)this - 16, &v18, v17);
    v3 = *v8;
    *v8 = 0LL;
    v19 = v3;
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v18);
    if ( !(unsigned int)SHIsSameObject(v3, *((struct IUnknown **)this + 55)) )
      goto LABEL_3;
  }
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((char *)this + 440);
LABEL_3:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v3 )
  {
    *(_OWORD *)v15 = 0LL;
    AcquireSRWLockShared(v2);
    v18 = v2;
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, char **))v3->lpVtbl[11].QueryInterface)(v3, &v13);
    std::shared_ptr<ViewEventRegistration>::operator=(v15, v10);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      &v19,
      &v12);
    v11 = (RTL_SRWLOCK *)*((_QWORD *)v15[0] + 3);
    v18 = v11;
    if ( v11 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v11->Ptr + 1))(v11);
    WindowEventDispatcher::RaiseViewEvent(v4, v12, 4LL, &v18);
    LODWORD(v18) = ((__int64 (__fastcall *)(struct IUnknown *))v3->lpVtbl[12].QueryInterface)(v3);
    v13 = (char *)((__int64 (__fastcall *)(struct IUnknown *))v3->lpVtbl[11].AddRef)(v3);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
      &v13,
      &v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    if ( v15[1] )
      std::_Ref_count_base::_Decref(v15[1]);
  }
  else
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned int &>(&v17);
    WindowEventDispatcher::UpdateAudioState(v4, a2, 3LL);
  }
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v19);
  return 0LL;
}
