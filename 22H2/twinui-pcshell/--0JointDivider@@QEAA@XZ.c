/*
 * XREFs of ??0JointDivider@@QEAA@XZ @ 0x180485EBC
 * Callers:
 *     ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDivider@@AEAPEAUHWND__@@@Z @ 0x180485E30 (--$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDiv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

JointDivider *__fastcall JointDivider::JointDivider(JointDivider *this)
{
  JointDivider *result; // rax

  *(_QWORD *)this = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,ITabletModeChrome>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChrome>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,ITabletModeChrome>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChrome>>'};
  *((_DWORD *)this + 9) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &JointDivider::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChrome>>'};
  *((_QWORD *)this + 3) = &JointDivider::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,ITabletModeChrome>>'};
  *((_QWORD *)this + 5) = &JointDivider::`vftable';
  result = this;
  *((_DWORD *)this + 20) = 100;
  *((_DWORD *)this + 24) = 240;
  return result;
}
