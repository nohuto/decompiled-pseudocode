/*
 * XREFs of ?_Change_array@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUVailSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x1801CA1C4
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801C82F0 (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 120 * a3;
  result = a2 + 120 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
