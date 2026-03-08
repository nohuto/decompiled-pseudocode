/*
 * XREFs of ??0?$ValueReference@I@@QEAA@XZ @ 0x18028E6E4
 * Callers:
 *     ??$MakeAndInitialize@V?$ValueReference@I@@U?$IReference@I@Foundation@Windows@@J@Details@WRL@Microsoft@@YAJPEAPEAU?$IReference@I@Foundation@Windows@@$$QEAJ@Z @ 0x18028DC88 (--$MakeAndInitialize@V-$ValueReference@I@@U-$IReference@I@Foundation@Windows@@J@Details@WRL@Micr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18028EB68 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall ValueReference<unsigned int>::ValueReference<unsigned int>(__int64 a1)
{
  _QWORD *v2; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v2 = (_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = &IDDASwapChain::`vftable'{for `IDeviceResource'};
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 56) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &ValueReference<unsigned int>::`vftable';
  *(_QWORD *)(a1 + 8) = &ValueReference<unsigned int>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &ValueReference<unsigned int>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
