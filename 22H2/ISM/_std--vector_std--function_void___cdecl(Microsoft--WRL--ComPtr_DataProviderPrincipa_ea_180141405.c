/*
 * XREFs of _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__const_&__::_1_::catch$40 @ 0x180141405
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@0@Z @ 0x1801450CC (-_Destroy@-$vector@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal______std::allocator_std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_________::_Emplace_reallocate_std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal______const____::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 160),
    *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 48), (const struct std::nothrow_t *)(*(_QWORD *)(a2 + 168) << 6));
  throw;
}
