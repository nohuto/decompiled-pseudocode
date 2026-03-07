__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // r10
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rcx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a2 = 0LL;
  if ( v2 >= 0 )
  {
    v7 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(
                                                         0x20uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
    if ( !v7 )
      return 2147942414LL;
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v7, (struct IUnknown *)(a1 - 8));
    v9 = v8;
    if ( !v8 )
      return 2147942414LL;
    *((_DWORD *)v8 + 4) = v2;
    v10 = ((__int64)v8 >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v2);
    for ( i = v2 == v12; ; i = v12 == v2 )
    {
      v2 = v12;
      if ( i )
      {
        *(_QWORD *)a2 = v9;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      *((_DWORD *)v9 + 4) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v9, 1);
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 12), a2);
  *(_QWORD *)a2 = v5;
  return 0LL;
}
