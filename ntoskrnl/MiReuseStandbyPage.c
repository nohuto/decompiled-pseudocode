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
