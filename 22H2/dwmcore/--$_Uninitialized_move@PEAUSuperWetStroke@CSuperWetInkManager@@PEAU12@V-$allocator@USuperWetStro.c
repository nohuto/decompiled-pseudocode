/*
 * XREFs of ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180194940
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180194594 (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@0AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180154634 (--$_Destroy_range@V-$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetS.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *,std::allocator<CSuperWetInkManager::SuperWetStroke>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_QWORD *)(v4 - 8);
      a3 += 10;
      v6 = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v6;
      v7 = *(_OWORD *)(v4 + 8);
      v4 += 80LL;
      *(_OWORD *)&v5[v4 - 72] = v7;
      *(_OWORD *)&v5[v4 - 56] = *(_OWORD *)(v4 - 56);
      *(_OWORD *)&v5[v4 - 40] = *(_OWORD *)(v4 - 40);
      *(_QWORD *)&v5[v4 - 24] = *(_QWORD *)(v4 - 24);
      v5[v4 - 16] = *(_BYTE *)(v4 - 16);
    }
    while ( v4 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>((__int64)a3, (__int64)a3);
  return a3;
}
