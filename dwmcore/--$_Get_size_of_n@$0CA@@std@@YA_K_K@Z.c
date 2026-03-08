/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180085FC4
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801FF1D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UScribbleFrame@CComputeScribbleScheduler@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802207CC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@QEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x180269ECC (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 *     ??$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@QEAAPEAUDDisplayPrimaryBufferResources@@QEAU2@$$QEAU2@@Z @ 0x18028DF20 (--$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@-$vector@UDDisplayPrimaryBufferResource.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}
