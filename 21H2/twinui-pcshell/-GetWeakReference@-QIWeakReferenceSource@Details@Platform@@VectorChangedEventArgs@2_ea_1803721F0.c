/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1803721F0
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x18016B060 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18037A158 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18037A158.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__VectorChangedEventArgs_2Collections_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 48));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
