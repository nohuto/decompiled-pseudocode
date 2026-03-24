/*
 * XREFs of MiReplaceLockedPage @ 0x14053D6AC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     MiTradeActivePage @ 0x14030DD40 (MiTradeActivePage.c)
 *     MiCanPageMove @ 0x1403349A0 (MiCanPageMove.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  _DWORD *v16; // r9
  unsigned int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  int v22; // [rsp+28h] [rbp-30h]
  unsigned __int8 v23; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2) )
    return 0LL;
  v23 = 17;
  v9 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a2 + 0x58000000000LL) / 48) + 2);
  PfnChannel = MiGetPfnChannel(a2);
  Page = MiGetPage(
           *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)),
           (PfnChannel << byte_140C4DE8D) | (v9 << byte_140C4DE8C) | (unsigned int)((__int64)(a2 + 0x58000000000LL) / 48) & dword_140C4DEF8,
           a4);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x58000000000LL;
  v14 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, (__int64)&v23);
  if ( !v14 )
  {
LABEL_8:
    MiReleaseFreshPage(v12, v13, v15, v16);
    return 0LL;
  }
  v17 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v12, a3, v17, a5, v22) )
  {
    MiUnlockProtoPoolPage(v14, v23);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v14, v23);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
  MiReleaseFreshPage(a2, v19, v20, v21);
  return 1LL;
}
