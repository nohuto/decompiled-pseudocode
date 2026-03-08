/*
 * XREFs of MiReplaceLockedPage @ 0x14063487C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiCanPageMove @ 0x1403B7F24 (MiCanPageMove.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned __int8 v16; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(a2 + 32) == 1 && MiCanPageMove(a2) )
  {
    v16 = 17;
    v9 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) + 2);
    PfnChannel = MiGetPfnChannel(a2);
    Page = MiGetPage(
             *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)),
             (PfnChannel << byte_140C6570E) | (v9 << byte_140C6570D) | (-1431655765
                                                                      * ((__int64)(a2 + 0x220000000000LL) >> 4)) & dword_140C65778,
             a4);
    if ( Page != -1 )
    {
      v12 = 48 * Page - 0x220000000000LL;
      v13 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v16);
      if ( v13 )
      {
        if ( !(unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0) )
        {
          v14 = MiTbFlushType(a1);
          if ( (unsigned int)MiTradeActivePage(a2, v12, a3, v14, a5, 0) )
          {
            MiUnlockProtoPoolPage(v13, v16);
            *(_QWORD *)(a2 + 16) = ZeroPte;
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
            MiReleaseFreshPage(a2);
            return 1LL;
          }
        }
        MiUnlockProtoPoolPage(v13, v16);
      }
      MiReleaseFreshPage(v12);
    }
  }
  return 0LL;
}
