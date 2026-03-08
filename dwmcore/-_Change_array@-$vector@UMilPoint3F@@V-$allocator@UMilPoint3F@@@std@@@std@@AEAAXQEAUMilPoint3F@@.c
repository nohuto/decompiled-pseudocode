/*
 * XREFs of ?_Change_array@?$vector@UMilPoint3F@@V?$allocator@UMilPoint3F@@@std@@@std@@AEAAXQEAUMilPoint3F@@_K1@Z @ 0x1801C7954
 * Callers:
 *     ??$_Insert_range@PEBUMilPoint3F@@@?$vector@UMilPoint3F@@V?$allocator@UMilPoint3F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@PEBUMilPoint3F@@1Uforward_iterator_tag@1@@Z @ 0x1801BC584 (--$_Insert_range@PEBUMilPoint3F@@@-$vector@UMilPoint3F@@V-$allocator@UMilPoint3F@@@std@@@std@@AE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<MilPoint3F>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
