/*
 * XREFs of ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1801FBE7C
 * Callers:
 *     ??$InitializeGlobals@PEAVCApplicationViewManager@@@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SAJPEAVCApplicationViewManager@@@Z @ 0x1801FB964 (--$InitializeGlobals@PEAVCApplicationViewManager@@@-$CGlobals@V0ApplicationViewManagement@@@Glob.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180055500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8930 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITag_ea_1801B8930.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x1801FD030 (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801FEAD4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x1802066A0 (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagement::CGlobals,ApplicationViewManagement::CGlobals,CApplicationViewManager * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  ApplicationViewManagement::CGlobals *v5; // rax
  __int64 v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (ApplicationViewManagement::CGlobals *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = ApplicationViewManagement::CGlobals::CGlobals(v5);
    v8 = *a2;
    v9 = v6;
    v12 = v6;
    v10 = *(_QWORD *)(v6 + 48);
    if ( v10 != v8 )
    {
      if ( v8 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(v8);
        v10 = *(_QWORD *)(v9 + 48);
      }
      *(_QWORD *)(v9 + 48) = v8;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
          v10,
          v7);
    }
    ApplicationViewManagement::CPersistence::Initialize((PHKEY)(v9 + 40));
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::AddRef(v9);
    *a1 = v9;
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
