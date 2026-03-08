/*
 * XREFs of ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18021E320
 * Callers:
 *     ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x18021D658 (--$_Insert_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18021E3F0 (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x180244958 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CContent::LayoutData>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x666666666666666LL;
  v3 = (0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x666666666666666LL - v3 )
  {
    result = v3 - 0x3333333333333333LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
