/*
 * XREFs of ?_Buy_nonzero@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z @ 0x1801D3F20
 * Callers:
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801CFC10 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0PEAUMilRectF@@$0A@@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@PEAUMilRectF@@0AEBV?$allocator@UMilRectF@@@1@@Z @ 0x18020CCF4 (--$-0PEAUMilRectF@@$0A@@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@PEAUMilRect.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<MilRectF>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<16>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
