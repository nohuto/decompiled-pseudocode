/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18006E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18006E1D4 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A2210 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A9880 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Ch_ea_1801A9880.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801B02D0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  bool i; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rbx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v16 = a1 - 16;
    v6 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v15, &v16);
    v8 = *v6;
    *v6 = 0LL;
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        v9,
        v7);
    }
    if ( !v8 )
      return 2147942414LL;
    *(_DWORD *)(v8 + 16) = v2;
    v11 = (v8 >> 1) | 0x8000000000000000uLL;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v11, v2);
    for ( i = v2 == v13; ; i = v13 == v14 )
    {
      v14 = v13;
      if ( i )
      {
        *a2 = v8;
        return 0LL;
      }
      if ( v13 < 0 )
        break;
      *(_DWORD *)(v8 + 16) = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v11, v13);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
      1u);
    v5 = 2 * v14;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(v5);
  }
  else
  {
    v5 = 2 * v2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(v5);
  }
  *a2 = v5;
  return 0LL;
}
