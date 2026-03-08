/*
 * XREFs of ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x1800B9F14
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x1800B9E5C (-_Reallocate_exactly@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x180249E08 (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((a1[2] - v6) >> 2));
  *a1 = a2;
  a1[1] = a2 + 20 * a3;
  result = 5 * a4;
  a1[2] = a2 + 20 * a4;
  return result;
}
