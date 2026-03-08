/*
 * XREFs of ?_Buy_nonzero@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAX_K@Z @ 0x1801FAE54
 * Callers:
 *     ??$?0V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801FA5C8 (--$-0V-$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@-$vector@PEAVCCompositionLight@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<CCompositionLight *>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<8>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 8 * a2;
  a1[2] = result;
  return result;
}
