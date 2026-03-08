/*
 * XREFs of ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1800E135C
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x1800E1264 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x18025FCFC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800E5C4C (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV-$allocat.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Change_array(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, 8 * ((__int64)(a1[2] - *a1) >> 3));
  }
  *a1 = a2;
  a1[1] = a2 + 104 * a3;
  result = a2 + 104 * a4;
  a1[2] = result;
  return result;
}
