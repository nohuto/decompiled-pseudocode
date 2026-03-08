/*
 * XREFs of ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?A_TXZ @ 0x1801C85A0
 * Callers:
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C90E4 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801C82F0 (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1[1];
  if ( v1 == a1[2] )
    return std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(a1, a1[1]);
  memset_0((void *)a1[1], 0, 0x78uLL);
  *(_QWORD *)(v1 + 24) = -1LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_BYTE *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  result = a1[1];
  a1[1] = result + 120;
  return result;
}
