/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1803D909C
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1803C756C (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A2210 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A9880 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Ch_ea_1801A9880.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CD84C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1803D72B8 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1803D85A0 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1803D9AC4 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(volatile int **this)
{
  KeyboardHosting::PositionAndSizeOptionsProvider **v2; // rbx
  void *v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  KeyboardHosting::PositionAndSizeOptionsProvider *v7; // rax
  volatile int *v8; // rdx
  KeyboardHosting::PositionAndSizeOptionsProvider *v9; // r10
  _DWORD *v10; // rax
  volatile int *v11; // rdx
  __int64 v12; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  void *v15; // [rsp+50h] [rbp+28h] BYREF
  void *v16; // [rsp+58h] [rbp+30h] BYREF
  KeyboardHosting::PositionAndSizeOptionsProvider *v17; // [rsp+60h] [rbp+38h] BYREF
  volatile int *v18; // [rsp+68h] [rbp+40h] BYREF

  v2 = (KeyboardHosting::PositionAndSizeOptionsProvider **)(this + 27);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 27);
  *v2 = 0LL;
  v3 = operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v3;
  v16 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
    v4 = -2147024882;
    v5 = 29LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v17 = (KeyboardHosting::PositionAndSizeOptionsProvider *)v3;
  v7 = KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider((KeyboardHosting::PositionAndSizeOptionsProvider *)v3);
  v9 = v7;
  v17 = v7;
  v15 = 0LL;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      (__int64)v7,
      v8);
  *v2 = v9;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v17);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 28);
  this[28] = 0LL;
  v10 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (__int64)v10;
  v16 = v10;
  if ( v10 )
  {
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v12 = &KeyboardHosting::ViewRectProvider::`vftable';
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_OWORD *)(v12 + 24) = 0LL;
    *(_OWORD *)(v12 + 40) = 0LL;
    *(_DWORD *)(v12 + 56) = 100;
    *(_QWORD *)(v12 + 64) = 0LL;
    *(_OWORD *)(v12 + 72) = 0LL;
    *(_OWORD *)(v12 + 88) = 0LL;
    *(_DWORD *)(v12 + 104) = 100;
    *(_QWORD *)(v12 + 112) = 0LL;
    *(_OWORD *)(v12 + 120) = 0LL;
    *(_OWORD *)(v12 + 136) = 0LL;
    *(_DWORD *)(v12 + 152) = 100;
    v18 = (volatile int *)v12;
    v16 = 0LL;
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(
        v12,
        v11);
    this[28] = (volatile int *)v12;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v18);
    v4 = 0;
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
  if ( v4 < 0 )
  {
    v5 = 30LL;
    goto LABEL_3;
  }
  v4 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v4 < 0 )
  {
    v5 = 31LL;
    goto LABEL_3;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
