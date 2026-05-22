/*
 * XREFs of _std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::_Emplace_reallocate_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch$47 @ 0x180151A2F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@@Z @ 0x18015177C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::_Emplace_reallocate_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch_47(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
    *(_QWORD **)(a2 + 112),
    *(_QWORD **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
