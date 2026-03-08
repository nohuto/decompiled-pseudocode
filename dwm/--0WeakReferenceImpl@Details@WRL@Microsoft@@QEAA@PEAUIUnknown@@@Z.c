/*
 * XREFs of ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x14000A7E4
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14000AB90 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        struct IUnknown *a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 4) = 0x3FFFFFFF;
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  result = this;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 3) = 2;
  return result;
}
