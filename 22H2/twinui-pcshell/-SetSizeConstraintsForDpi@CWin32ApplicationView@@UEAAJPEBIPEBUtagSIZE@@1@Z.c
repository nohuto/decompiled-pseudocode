/*
 * XREFs of ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180057A90
 * Callers:
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x180057E90 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002D0A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180055500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801FE924 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        const unsigned int *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r10
  volatile int *v11; // rdx
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+70h] [rbp+30h]
  unsigned __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+48h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, this + 6);
  (*(void (__fastcall **)(PVOID, __int128 *, _QWORD))(*(_QWORD *)this[28].Ptr + 24LL))(this[28].Ptr, &v13, *a2);
  v17 = (unsigned __int64)*a4;
  v14[0] = *a3;
  v14[1] = v17;
  if ( v13 == __PAIR128__(v17, v14[0]) )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD *))(*(_QWORD *)this[28].Ptr + 32LL))(this[28].Ptr, *a2, v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v17);
    if ( v17 && *(_QWORD *)(v17 + 48) )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(*(_QWORD *)(v17 + 48));
      v16 = v10;
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)&v17);
    CApplicationViewManager::RaiseApplicationViewChanged(v16 + 136, (__int64)this, 0xFu, 0LL);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
        v16,
        v11);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A8,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v8,
    v13);
LABEL_10:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return v9;
}
