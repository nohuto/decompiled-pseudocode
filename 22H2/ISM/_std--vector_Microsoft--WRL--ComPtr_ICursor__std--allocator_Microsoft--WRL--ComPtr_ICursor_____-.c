/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch$58 @ 0x18004E741
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
    *(__int64 **)(a2 + 120),
    *(__int64 **)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 112), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 136)));
  throw;
}
