/*
 * XREFs of ??0TrayInfoTipActivator@SystemTray@@QEAA@XZ @ 0x1803EA440
 * Callers:
 *     ??$MakeAndInitialize@VTrayInfoTipActivator@SystemTray@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1803EA35C (--$MakeAndInitialize@VTrayInfoTipActivator@SystemTray@@UIInspectable@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

SystemTray::TrayInfoTipActivator *__fastcall SystemTray::TrayInfoTipActivator::TrayInfoTipActivator(
        SystemTray::TrayInfoTipActivator *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((SystemTray::TrayInfoTipActivator *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SystemTray::TrayInfoTipActivator::`vftable';
  *((_QWORD *)this + 1) = &SystemTray::TrayInfoTipActivator::`vftable'{for `IWeakReferenceSource'};
  *v1 = &SystemTray::TrayInfoTipActivator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
