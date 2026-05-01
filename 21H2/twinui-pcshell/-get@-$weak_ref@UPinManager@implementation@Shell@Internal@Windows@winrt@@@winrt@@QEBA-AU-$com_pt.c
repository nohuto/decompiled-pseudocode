/*
 * XREFs of ?get@?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA?AU?$com_ptr@UPinManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180145638
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802675A8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::PinManager>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  unsigned __int64 v6; // rcx
  __int128 v7; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v9 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v9, a2);
    v4(v2, &winrt::impl::guid_storage<winrt::Windows::Internal::Shell::IPinManager>::value, v5);
    v6 = v9 - 8;
    v7 = -(__int128)v9;
    v9 = 0LL;
    a2->lpVtbl = (struct IUnknownVtbl *)(v6 & *((_QWORD *)&v7 + 1));
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v9);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
