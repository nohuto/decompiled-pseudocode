/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1803FEC58
 * Callers:
 *     ??0CPPIAllUpViewHost@@QEAA@XZ @ 0x1803FED18 (--0CPPIAllUpViewHost@@QEAA@XZ.c)
 * Callees:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180078A74 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSour.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1801B6830 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 *     ??0?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIPPIAllUpViewHost@@UIMultitaskingViewHost@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1803FEC24 (--0-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UIPPIAllUpViewHost@@U.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>(
        __int64 a1)
{
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(a1 + 24, 0);
  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IPPIAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveMonitorNotification>::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IPPIAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveMonitorNotification>((_QWORD *)a1);
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = &CMultitaskingViewHostBase<IPPIAllUpViewHost>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IPPIAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 8) = &CMultitaskingViewHostBase<IPPIAllUpViewHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 96) = a1 + 8;
  *(_BYTE *)(a1 + 112) = 0;
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>(a1 + 120);
  *(_DWORD *)(a1 + 132) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IPPIAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *(_QWORD *)(a1 + 120) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
