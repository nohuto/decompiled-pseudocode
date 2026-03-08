/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180292D70
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18028F960 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180291004 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180294CB8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rdi
  struct IUnknownVtbl *v5; // r10
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v7; // r8
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 56);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 8), a2);
    v7 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v9 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v9, v2);
    for ( i = v2 == v11; ; i = v11 == v2 )
    {
      v2 = v11;
      if ( i )
      {
        a2->lpVtbl = v7;
        return 0LL;
      }
      if ( v11 < 0 )
        break;
      LODWORD(v7->Release) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v9, v11);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v7,
      1);
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 12), (volatile int *)a2);
  a2->lpVtbl = v5;
  return 0LL;
}
