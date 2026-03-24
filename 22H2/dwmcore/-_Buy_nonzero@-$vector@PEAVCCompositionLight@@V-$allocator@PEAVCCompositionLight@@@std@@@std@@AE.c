/*
 * XREFs of ?_Buy_nonzero@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAX_K@Z @ 0x18019F180
 * Callers:
 *     ??$?0V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x18019E9D8 (--$-0V-$span_iterator@V-$span@PEAVCCompositionLight@@$0-0@gsl@@$0A@@details@gsl@@X@-$vector@PEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CCompositionLight *>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v3 = 8 * a2;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * a2);
  *a1 = v4;
  a1[1] = v4;
  result = v3 + v4;
  a1[2] = result;
  return result;
}
