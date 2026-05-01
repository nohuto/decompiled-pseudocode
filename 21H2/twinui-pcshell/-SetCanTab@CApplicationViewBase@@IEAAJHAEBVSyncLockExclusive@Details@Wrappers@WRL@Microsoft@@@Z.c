/*
 * XREFs of ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180206FB4
 * Callers:
 *     ?RefreshCanTab@CApplicationViewBase@@UEAAJXZ @ 0x180206E70 (-RefreshCanTab@CApplicationViewBase@@UEAAJXZ.c)
 *     ?SetCanTab@CApplicationViewBase@@UEAAJH@Z @ 0x180207150 (-SetCanTab@CApplicationViewBase@@UEAAJH@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002D0A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180055500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180077700 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801FEAD4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 *     ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x180206804 (-Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewBase::SetCanTab(
        CApplicationViewBase *this,
        int a2,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a3)
{
  int v4; // ebx
  int v5; // edi
  __int64 v6; // r9
  _DWORD *v7; // rcx
  volatile int *v8; // rdx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v9; // r10
  __int64 v10; // rcx
  int v11; // eax
  volatile int *v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v16; // [rsp+60h] [rbp+28h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp+30h] BYREF
  const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v18; // [rsp+70h] [rbp+38h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+40h] BYREF

  v18 = a3;
  v4 = 2 - (a2 != 0);
  v5 = *((_DWORD *)this + 33);
  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = qword_1806505D0;
    qword_1806505D0[0] = &IamTraceLogging::`vftable';
    atexit(_lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
    ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)qword_1806505D0);
    InitOnceComplete(&`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper, 0, qword_1806505D0);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v7 > 5u )
  {
    LODWORD(v18) = v4;
    LODWORD(v16) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_1805749E3,
      0LL,
      v6,
      (__int64)&v16,
      (__int64)&v18);
  }
  if ( v5 != v4 )
  {
    *((_DWORD *)this + 33) = v4;
    if ( v5 )
    {
      v18 = 0LL;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v16);
      if ( v16 )
      {
        v9 = *(const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive **)(v16 + 48);
        v10 = (__int64)v18;
        if ( v18 != v9 )
        {
          if ( v9 )
          {
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(
              *(_QWORD *)(v16 + 48),
              v8);
            v10 = (__int64)v18;
          }
          v18 = v9;
          if ( v10 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
              v10,
              v8);
        }
      }
      Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v16);
      v11 = CApplicationViewManager::RaiseApplicationViewChanged((__int64)v18 + 136, (__int64)this, 0x14u, 0LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x16E,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
          (const char *)(unsigned int)v11);
      v13 = (__int64)v18;
      if ( v18 )
      {
        v18 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
          v13,
          v12);
      }
    }
  }
  return 0LL;
}
