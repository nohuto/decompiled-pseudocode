/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x180250CA4
 * Callers:
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180250D6C (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x18010CE64 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

SIZE_T __fastcall std::vector<unsigned char>::_Clear_and_reserve_geometric(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T v3; // rdi

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v3 = std::vector<char>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>((void *)*a1, a1[2] - *a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<unsigned char>::_Buy_raw(a1, v3);
}
