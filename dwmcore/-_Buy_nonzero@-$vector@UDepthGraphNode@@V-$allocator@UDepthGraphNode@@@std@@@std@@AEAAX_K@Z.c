/*
 * XREFs of ?_Buy_nonzero@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z @ 0x180269ADC
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180269718 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180036EEC (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<DepthGraphNode>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 result; // rax

  if ( a2 > 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<56>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 56 * a2;
  return result;
}
