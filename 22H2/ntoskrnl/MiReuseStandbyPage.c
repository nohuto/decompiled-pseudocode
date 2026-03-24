/*
 * XREFs of MiReuseStandbyPage @ 0x1405512A0
 * Callers:
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  unsigned int v2; // edi
  char v3; // dl
  char v4; // al

  v2 = MiUnlinkPageFromList(a1, 0);
  MiRestoreTransitionPte(a1, 0);
  v3 = *(_BYTE *)(a1 + 34) & 0xFD;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v3 |= 5u;
  v4 = *(_BYTE *)(a1 + 35);
  *(_BYTE *)(a1 + 34) = v3;
  *(_BYTE *)(a1 + 34) = v3 & 0xC7;
  *(_BYTE *)(a1 + 35) = v4 & 0xDF;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
  return v2;
}
