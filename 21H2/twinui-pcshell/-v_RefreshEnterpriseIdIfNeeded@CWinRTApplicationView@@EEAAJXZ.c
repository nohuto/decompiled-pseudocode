/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180055160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800554A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180055500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8930 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITag_ea_1801B8930.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801FDE60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_1801FDE60.c)
 */

__int64 __fastcall CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded(CWinRTApplicationView *this)
{
  CWinRTApplicationView *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  LPUNKNOWN v4; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  LPUNKNOWN v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // r14d
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  int v15; // edi
  HKEY v16; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+20h] [rbp-49h]
  __int64 v20[3]; // [rsp+38h] [rbp-31h] BYREF
  void **v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h]
  __int128 v23; // [rsp+60h] [rbp-9h] BYREF
  HKEY hKey[2]; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v27; // [rsp+D0h] [rbp+67h]
  LPUNKNOWN ppunkMarshal; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+E0h] [rbp+77h]
  CWinRTApplicationView *v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = this;
  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  v2 = *((_QWORD *)this + 25);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 25, v2 + 1, v2);
      if ( v3 != v2 )
        continue;
    }
    goto LABEL_8;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v2 + 16));
LABEL_8:
  v30 = v1;
  v20[1] = 0LL;
  v25 = 0LL;
  ppunkMarshal = 0LL;
  v22 = 0LL;
  v21 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v23 = 0uLL;
  *(_OWORD *)hKey = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v4 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    if ( *((_QWORD *)&v23 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 16LL))(*((_QWORD *)&v23 + 1));
    ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))QueryInterface)(
      v4,
      &GUID_00000003_0000_0000_c000_000000000046,
      (char *)&v23 + 8);
  }
  v6 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v6->lpVtbl->Release)(v6);
  }
  HIDWORD(hKey[0]) = 1;
  v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  hKey[1] = 0LL;
  v21 = &ApplicationViewManagement::CGlobals::`vftable';
  v25 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v8 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  v9 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::AddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v20[0] = 0LL;
    v7 = v8;
    v29 = v8;
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(v20);
    v9 = v8;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v7 + 48);
    if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IObservableObjectArrayChanged,IVirtualDesktopContainerElement,IScrollableElement>::AddRef(v10);
      v27 = v10;
    }
    v29 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v9);
  }
  v11 = *(_DWORD *)(v27 + 280);
  v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  v14 = 0LL;
  if ( v12 )
  {
    *((_DWORD *)v12 + 3) = 1;
    *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v13[2] = 0LL;
    if ( v13 + 2 != &v30 )
    {
      v13[2] = v1;
      v1 = 0LL;
      v30 = 0LL;
    }
    v14 = v13;
    *v13 = off_180500DE0;
  }
  v20[2] = 0LL;
  v15 = SHTaskPoolQueueTask(3LL, 2LL, v11, 0LL, v14, 0LL);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  if ( v27 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release();
  if ( v25 )
  {
    v25 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release();
  }
  v16 = hKey[1];
  hKey[1] = 0LL;
  if ( v16 )
    RegCloseKey(v16);
  v17 = *((_QWORD *)&v23 + 1);
  HIDWORD(hKey[0]) = -1073741823;
  if ( *((_QWORD *)&v23 + 1) )
  {
    *((_QWORD *)&v23 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v15 >= 0 )
  {
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release((__int64)v1);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v15,
    v19);
  if ( v1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release((__int64)v1);
  return (unsigned int)v15;
}
