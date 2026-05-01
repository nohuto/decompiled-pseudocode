/*
 * XREFs of ?Get@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@XZ @ 0x1803713C0
 * Callers:
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1803684EC (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Get(
        __int64 a1)
{
  HRESULT ContextToken; // eax
  Platform::Details *v3; // rcx
  int ProxyImpl; // eax
  unsigned int (__fastcall *v5)(struct IUnknownVtbl *, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  struct IUnknown **savedregs; // [rsp+20h] [rbp+0h]
  struct IUnknown v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  ULONG_PTR pToken; // [rsp+50h] [rbp+30h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 || !*(_QWORD *)a1 )
  {
    v3 = *(Platform::Details **)a1;
    return __abi_winrt_ptr_ctor((__int64)v3);
  }
  ContextToken = CoGetContextToken(&pToken);
  if ( ContextToken < 0 )
  {
    __abi_WinRTraiseException(ContextToken);
    __debugbreak();
  }
  v3 = *(Platform::Details **)a1;
  if ( pToken == *(_QWORD *)(a1 + 16) )
    return __abi_winrt_ptr_ctor((__int64)v3);
  v9.lpVtbl = 0LL;
  ProxyImpl = Platform::Details::GetProxyImpl(
                v3,
                (struct IUnknown *)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__,
                *(const struct _GUID **)(a1 + 8),
                &v9,
                savedregs);
  if ( ProxyImpl < 0 )
  {
    __abi_WinRTraiseException(ProxyImpl);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 24) != 2 )
    goto LABEL_15;
  v10 = 0LL;
  v5 = *(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v9.lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v5(v9.lpVtbl, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v10) )
  {
    *(_DWORD *)(a1 + 24) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
LABEL_15:
    v6 = __abi_winrt_ptr_ctor((__int64)v9.lpVtbl);
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
  v6 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
LABEL_11:
  if ( v9.lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v9.lpVtbl->QueryInterface + 2))(v9.lpVtbl);
  return v6;
}
