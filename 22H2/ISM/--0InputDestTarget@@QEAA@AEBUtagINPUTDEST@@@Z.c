/*
 * XREFs of ??0InputDestTarget@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x18013A664
 * Callers:
 *     ?Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x18013A7EC (-Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

InputDestTarget *__fastcall InputDestTarget::InputDestTarget(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable,IInputDestInputTarget>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable,IInputDestInputTarget>::`vftable'{for `IInputDestComparable'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable,IInputDestInputTarget>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDestInputTarget>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &InputDestTarget::`vftable';
  *((_QWORD *)this + 1) = &InputDestTarget::`vftable'{for `IInputDestComparable'};
  *((_QWORD *)this + 2) = &InputDestTarget::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDestInputTarget>'};
  *((_OWORD *)this + 2) = *(_OWORD *)((char *)a2 + 40);
  *((_OWORD *)this + 3) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 9);
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
  return this;
}
