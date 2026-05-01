/*
 * XREFs of ??0BrokeredViewTabConverterImpl@@QEAA@XZ @ 0x1802D23F0
 * Callers:
 *     ??$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU23456@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU34567@@Z @ 0x1802D21AC (--$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableSh.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

BrokeredViewTabConverterImpl *__fastcall BrokeredViewTabConverterImpl::BrokeredViewTabConverterImpl(
        BrokeredViewTabConverterImpl *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((BrokeredViewTabConverterImpl *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &BrokeredViewTabConverterImpl::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &BrokeredViewTabConverterImpl::`vftable';
  *((_QWORD *)this + 1) = &BrokeredViewTabConverterImpl::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
