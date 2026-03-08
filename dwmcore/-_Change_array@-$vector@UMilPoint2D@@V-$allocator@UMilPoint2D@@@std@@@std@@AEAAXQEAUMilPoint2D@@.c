/*
 * XREFs of ?_Change_array@?$vector@UMilPoint2D@@V?$allocator@UMilPoint2D@@@std@@@std@@AEAAXQEAUMilPoint2D@@_K1@Z @ 0x1801C78E4
 * Callers:
 *     ??$_Insert_range@PEBUMilPoint2D@@@?$vector@UMilPoint2D@@V?$allocator@UMilPoint2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint2D@@@std@@@std@@@1@PEBUMilPoint2D@@1Uforward_iterator_tag@1@@Z @ 0x1801BC390 (--$_Insert_range@PEBUMilPoint2D@@@-$vector@UMilPoint2D@@V-$allocator@UMilPoint2D@@@std@@@std@@AE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<MilPoint2D>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
