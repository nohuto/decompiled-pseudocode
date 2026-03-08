/*
 * XREFs of ?_Change_array@?$vector@PEAVCGeometry2D@@V?$allocator@PEAVCGeometry2D@@@std@@@std@@AEAAXQEAPEAVCGeometry2D@@_K1@Z @ 0x1801C75C4
 * Callers:
 *     ??$_Insert_range@PEAPEAVCGeometry2D@@@?$vector@PEAVCGeometry2D@@V?$allocator@PEAVCGeometry2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCGeometry2D@@@std@@@std@@@1@PEAPEAVCGeometry2D@@1Uforward_iterator_tag@1@@Z @ 0x1801BB608 (--$_Insert_range@PEAPEAVCGeometry2D@@@-$vector@PEAVCGeometry2D@@V-$allocator@PEAVCGeometry2D@@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CGeometry2D *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
