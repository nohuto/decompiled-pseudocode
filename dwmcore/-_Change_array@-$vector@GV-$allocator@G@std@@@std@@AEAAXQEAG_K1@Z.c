/*
 * XREFs of ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x1800429F4
 * Callers:
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1800426C8 (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x180208044 (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 2 * ((a1[2] - v6) >> 1));
  *a1 = a2;
  a1[1] = a2 + 2 * a3;
  result = a2 + 2 * a4;
  a1[2] = result;
  return result;
}
