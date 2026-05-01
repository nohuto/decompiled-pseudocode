/*
 * XREFs of ??0LegacyViewWrapper@@QEAA@XZ @ 0x18030FAB4
 * Callers:
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18030D9E8 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLif.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18030DB48 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifet.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18030F908 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UILegacyViewWrapper@.c)
 */

LegacyViewWrapper *__fastcall LegacyViewWrapper::LegacyViewWrapper(LegacyViewWrapper *this)
{
  LegacyViewWrapper *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,ILegacyViewWrapper>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,ILegacyViewWrapper>(this);
  *(_QWORD *)this = &LegacyViewWrapper::`vftable';
  *((_QWORD *)this + 1) = &LegacyViewWrapper::`vftable'{for `INtUserViewWrapper'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &LegacyViewWrapper::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 5) = &LegacyViewWrapper::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *((_QWORD *)this + 6) = &LegacyViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 7) = &LegacyViewWrapper::`vftable'{for `IFramedViewWrapper'};
  *((_QWORD *)this + 8) = &LegacyViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 66) = &LegacyViewWrapper::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 67) = &LegacyViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILegacyViewWrapper>'};
  *((_QWORD *)this + 71) = 0LL;
  *((_BYTE *)this + 580) = 0;
  result = this;
  *((_QWORD *)this + 70) = 1LL;
  return result;
}
