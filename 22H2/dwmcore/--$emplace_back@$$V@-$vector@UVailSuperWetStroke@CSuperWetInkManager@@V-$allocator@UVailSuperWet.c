/*
 * XREFs of ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x180194A20
 * Callers:
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180195C0C (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( a1[2] == v1 )
    return std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(a1, v1);
  *(_DWORD *)(v1 + 81) = 0;
  *(_WORD *)(v1 + 85) = 0;
  *(_BYTE *)(v1 + 87) = 0;
  *(_QWORD *)(v1 + 16) = -1LL;
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_OWORD *)(v1 + 24) = 0LL;
  *(_OWORD *)(v1 + 40) = 0LL;
  *(_OWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_BYTE *)(v1 + 80) = 0;
  result = a1[1];
  a1[1] = result + 88;
  return result;
}
