/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800AB7E0
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x18010D4F0 (_anonymous_namespace_--Compressor--Compress.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180285C04 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1802B54E0 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x18010CE64 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rbp
  char *v6; // r14
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v4 = a1[1] - *a1;
  v5 = std::vector<char>::_Calculate_growth(a1, a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memset_0(&v6[v4], 0, a2 - v4);
  memmove_0(v6, (const void *)*a1, a1[1] - *a1);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, a1[2] - *a1);
  *a1 = v6;
  a1[1] = &v6[a2];
  result = &v6[v5];
  a1[2] = &v6[v5];
  return result;
}
