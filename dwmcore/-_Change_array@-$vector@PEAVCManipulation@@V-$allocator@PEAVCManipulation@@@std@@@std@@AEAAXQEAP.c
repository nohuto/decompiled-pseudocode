/*
 * XREFs of ?_Change_array@?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@AEAAXQEAPEAVCManipulation@@_K1@Z @ 0x1802720D0
 * Callers:
 *     ??$_Emplace_reallocate@PEAVCManipulation@@@?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@QEAAPEAPEAVCManipulation@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1802702F0 (--$_Emplace_reallocate@PEAVCManipulation@@@-$vector@PEAVCManipulation@@V-$allocator@PEAVCManipul.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CManipulation *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
