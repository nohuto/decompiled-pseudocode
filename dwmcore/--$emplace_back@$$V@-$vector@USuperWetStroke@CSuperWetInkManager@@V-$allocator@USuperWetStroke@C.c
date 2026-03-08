/*
 * XREFs of ??$emplace_back@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?A_TXZ @ 0x1801C8540
 * Callers:
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C9018 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801C81B4 (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::emplace_back<>(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1[1];
  if ( v1 == a1[2] )
    return std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(a1, a1[1]);
  memset_0((void *)a1[1], 0, 0x68uLL);
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  result = a1[1];
  a1[1] = result + 104;
  return result;
}
