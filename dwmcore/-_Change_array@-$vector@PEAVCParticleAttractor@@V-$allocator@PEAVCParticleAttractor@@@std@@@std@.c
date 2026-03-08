/*
 * XREFs of ?_Change_array@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAXQEAPEAVCParticleAttractor@@_K1@Z @ 0x1801C762C
 * Callers:
 *     ??$_Insert_range@PEAPEAVCParticleAttractor@@@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCParticleAttractor@@@std@@@std@@@1@PEAPEAVCParticleAttractor@@1Uforward_iterator_tag@1@@Z @ 0x1801BB7F0 (--$_Insert_range@PEAPEAVCParticleAttractor@@@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CParticleAttractor *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
