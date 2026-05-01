/*
 * XREFs of ??0HolographicForegroundAssistant@@QEAA@XZ @ 0x1802B6D34
 * Callers:
 *     ??$MakeAndInitialize@VHolographicForegroundAssistant@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802B6B40 (--$MakeAndInitialize@VHolographicForegroundAssistant@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802B6C40 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1802B6C40.c)
 */

HolographicForegroundAssistant *__fastcall HolographicForegroundAssistant::HolographicForegroundAssistant(
        HolographicForegroundAssistant *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 1) = &HolographicForegroundAssistant::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &HolographicForegroundAssistant::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &HolographicForegroundAssistant::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &HolographicForegroundAssistant::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &HolographicForegroundAssistant::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 17) = &HolographicForegroundAssistant::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
