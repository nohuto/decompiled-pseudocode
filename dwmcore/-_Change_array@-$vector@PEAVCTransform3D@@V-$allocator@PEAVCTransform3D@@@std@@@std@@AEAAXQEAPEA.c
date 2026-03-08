/*
 * XREFs of ?_Change_array@?$vector@PEAVCTransform3D@@V?$allocator@PEAVCTransform3D@@@std@@@std@@AEAAXQEAPEAVCTransform3D@@_K1@Z @ 0x1801C7764
 * Callers:
 *     ??$_Insert_range@PEAPEAVCTransform3D@@@?$vector@PEAVCTransform3D@@V?$allocator@PEAVCTransform3D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform3D@@@std@@@std@@@1@PEAPEAVCTransform3D@@1Uforward_iterator_tag@1@@Z @ 0x1801BBD88 (--$_Insert_range@PEAPEAVCTransform3D@@@-$vector@PEAVCTransform3D@@V-$allocator@PEAVCTransform3D@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CTransform3D *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
