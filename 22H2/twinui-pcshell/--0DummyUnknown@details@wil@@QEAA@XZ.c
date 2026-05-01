/*
 * XREFs of ??0DummyUnknown@details@wil@@QEAA@XZ @ 0x1804ED8A4
 * Callers:
 *     ??$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVDummyUnknown@details@wil@@AEBU_GUID@@$$QEA$$T@Z @ 0x1804ED814 (--$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPersist@@UIOleWindow@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803F202C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPersist@@UIOleWindow@.c)
 */

wil::details::DummyUnknown *__fastcall wil::details::DummyUnknown::DummyUnknown(wil::details::DummyUnknown *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPersist,IOleWindow>::`vftable'{for `IPersist'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPersist,IOleWindow>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IOleWindow>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &wil::details::DummyUnknown::`vftable'{for `IPersist'};
  *((_QWORD *)this + 1) = &wil::details::DummyUnknown::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IOleWindow>'};
  return this;
}
