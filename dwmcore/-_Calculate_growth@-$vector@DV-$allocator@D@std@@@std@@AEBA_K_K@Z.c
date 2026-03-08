/*
 * XREFs of ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x18010CE64
 * Callers:
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1800AB670 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800AB7E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x18010AF14 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x18010CCDC (--$_Emplace_reallocate@E@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z.c)
 *     ??$_Emplace_reallocate@D@?$vector@DV?$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z @ 0x18010CDA0 (--$_Emplace_reallocate@D@-$vector@DV-$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x180250CA4 (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<char>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFFLL;
  v3 = a1[2] - *a1;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
