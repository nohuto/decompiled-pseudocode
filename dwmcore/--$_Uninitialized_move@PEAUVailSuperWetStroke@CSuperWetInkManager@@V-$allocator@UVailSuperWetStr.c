/*
 * XREFs of ??$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1801C84DC
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801C82F0 (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(a3 + 96) = *(_OWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 112) = *(_QWORD *)(a1 + 112);
    a3 += 120LL;
    a1 += 120LL;
  }
  return a3;
}
