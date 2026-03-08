/*
 * XREFs of ?_Change_array@?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@AEAAXQEAPEAVCKeyframeAnimation@@_K1@Z @ 0x180023508
 * Callers:
 *     ??$_Insert_range@PEAPEAVCKeyframeAnimation@@@?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCKeyframeAnimation@@@std@@@std@@@1@PEAPEAVCKeyframeAnimation@@1Uforward_iterator_tag@1@@Z @ 0x180022F2C (--$_Insert_range@PEAPEAVCKeyframeAnimation@@@-$vector@PEAVCKeyframeAnimation@@V-$allocator@PEAVC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CKeyframeAnimation *>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
