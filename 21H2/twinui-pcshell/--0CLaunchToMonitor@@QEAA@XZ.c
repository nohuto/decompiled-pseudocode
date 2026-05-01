/*
 * XREFs of ??0CLaunchToMonitor@@QEAA@XZ @ 0x1804E1C50
 * Callers:
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x1804E1BAC (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
 * Callees:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180078A74 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSour.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CLaunchToMonitor *__fastcall CLaunchToMonitor::CLaunchToMonitor(CLaunchToMonitor *this)
{
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>((__int64)this);
  *((_QWORD *)this + 2) = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 15) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithGITSite>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithGITSite>::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithGITSite>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CLaunchToMonitor::`vftable';
  *((_QWORD *)this + 1) = &CLaunchToMonitor::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithGITSite>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>>'};
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
