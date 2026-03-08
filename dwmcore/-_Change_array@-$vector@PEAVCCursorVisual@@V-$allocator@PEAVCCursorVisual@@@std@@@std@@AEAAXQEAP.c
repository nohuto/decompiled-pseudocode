/*
 * XREFs of ?_Change_array@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@AEAAXQEAPEAVCCursorVisual@@_K1@Z @ 0x1801EFA38
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCCursorVisual@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@QEAAPEAPEAVCCursorVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801EF26C (--$_Emplace_reallocate@AEBQEAVCCursorVisual@@@-$vector@PEAVCCursorVisual@@V-$allocator@PEAVCCurs.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801EF368 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAVCCursorVisual@@V-$allocator@PEAVCCurso.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CCursorVisual *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
