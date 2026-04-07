/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800C1EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x1800563A0 (-Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1800C1B54 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800C1CA0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C1CF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800C1FC4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::GetWeakReference(
        volatile signed __int64 *a1,
        struct WPF::HeapBase *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rdx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v14; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 5);
  *(_QWORD *)a2 = 0LL;
  if ( v2 >= 0 )
  {
    v7 = (Microsoft::WRL::Details::WeakReferenceImpl *)WPF::Alloc((WPF *)a1, a2, 32LL);
    if ( !v7 )
      return 2147942414LL;
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v7, (struct IUnknown *)a1 - 1);
    v14 = v8;
    v9 = v8;
    if ( !v8 )
      return 2147942414LL;
    *((_DWORD *)v8 + 4) = v2;
    v10 = ((__int64)v8 >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64(a1 + 5, v10, v2);
    for ( i = v2 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        *(_QWORD *)a2 = v14;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      *((_DWORD *)v9 + 4) = v12;
      v12 = _InterlockedCompareExchange64(a1 + 5, v10, v12);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v14, 1);
    v5 = 2 * v13;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::AddRef();
  }
  else
  {
    v5 = 2 * v2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::InternalAddRef(v5);
  }
  *(_QWORD *)a2 = v5;
  return 0LL;
}
