/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback__const_&__::_1_::catch$33 @ 0x1801518D8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD87C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graph.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback__const____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
