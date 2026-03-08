/*
 * XREFs of ?_Change_array@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@AEAAXQEAUParticleBindingData@@_K1@Z @ 0x1801C79DC
 * Callers:
 *     ??$_Insert_range@PEBUParticleBindingData@@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1Uforward_iterator_tag@1@@Z @ 0x1801BC7DC (--$_Insert_range@PEBUParticleBindingData@@@-$vector@UParticleBindingData@@V-$allocator@UParticle.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ParticleBindingData>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
