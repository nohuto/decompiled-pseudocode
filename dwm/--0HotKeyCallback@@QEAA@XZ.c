/*
 * XREFs of ??0HotKeyCallback@@QEAA@XZ @ 0x14000A76C
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000A694 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

HotKeyCallback *__fastcall HotKeyCallback::HotKeyCallback(HotKeyCallback *this)
{
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::UI::Internal::Text::IHotKeyClientOwner>::`vftable'{for `Windows::UI::Internal::Text::IHotKeyClientOwner'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::UI::Internal::Text::IHotKeyClientOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HotKeyCallback::`vftable'{for `Windows::UI::Internal::Text::IHotKeyClientOwner'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::UI::Internal::Text::IHotKeyClientOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  return this;
}
