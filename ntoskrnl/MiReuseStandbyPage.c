/*
 * XREFs of MiReuseStandbyPage @ 0x14064F6CC
 * Callers:
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 */

_BOOL8 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  char v2; // bl
  char v3; // dl
  char v4; // al
  char v5; // dl

  v2 = MiUnlinkPageFromListEx(BugCheckParameter2, 4uLL);
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  v3 = *(_BYTE *)(BugCheckParameter2 + 34);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  v5 = v3 & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v5 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) = v4 & 0xDF;
  *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
  *(_QWORD *)BugCheckParameter2 = 0LL;
  return (v2 & 3) == 0;
}
