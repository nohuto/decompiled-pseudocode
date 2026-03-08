/*
 * XREFs of ?_Change_array@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@AEAAXQEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_K1@Z @ 0x180266FD4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180265140 (--$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@-$vector@UAreaTriangle@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 28 * a3;
  result = a2 + 28 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
