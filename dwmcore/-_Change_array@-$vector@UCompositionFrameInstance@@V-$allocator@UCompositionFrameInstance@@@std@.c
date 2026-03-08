/*
 * XREFs of ?_Change_array@?$vector@UCompositionFrameInstance@@V?$allocator@UCompositionFrameInstance@@@std@@@std@@AEAAXQEAUCompositionFrameInstance@@_K1@Z @ 0x18026A6B4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompositionFrameInstance@@@?$vector@UCompositionFrameInstance@@V?$allocator@UCompositionFrameInstance@@@std@@@std@@QEAAPEAUCompositionFrameInstance@@QEAU2@AEBU2@@Z @ 0x180269D58 (--$_Emplace_reallocate@AEBUCompositionFrameInstance@@@-$vector@UCompositionFrameInstance@@V-$all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CompositionFrameInstance>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 60 * a3;
  result = a2 + 60 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
