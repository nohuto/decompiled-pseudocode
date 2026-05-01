/*
 * XREFs of ??0XamlLauncherState@@QEAA@XZ @ 0x18039AC14
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x18039F848 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180011BB0 (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18039A9B4 (--0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::XamlLauncherState(XamlLauncherState *this)
{
  *(_QWORD *)this = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 15) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::`vftable'{for `IXamlLauncherState'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &XamlLauncherState::`vftable';
  *((_QWORD *)this + 3) = &XamlLauncherState::`vftable'{for `IXamlLauncherState'};
  *((_QWORD *)this + 4) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 5) = &XamlLauncherState::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 6) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 5;
  *((_DWORD *)this + 18) = 1000;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  memset_0((char *)this + 136, 0, 0x88uLL);
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity((XamlLauncherState *)((char *)this + 296));
  StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity((XamlLauncherState *)((char *)this + 608));
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_BYTE *)this + 976) = 0;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_DWORD *)this + 256) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_DWORD *)this + 266) = 0;
  return this;
}
