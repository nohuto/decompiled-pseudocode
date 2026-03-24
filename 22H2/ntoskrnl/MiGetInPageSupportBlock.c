/*
 * XREFs of MiGetInPageSupportBlock @ 0x14023E894
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14029A230 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x1406363C0 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1406A06B0 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x1408C8604 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14023E950 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x1403223BC (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiGetInPageSupportBlock(char a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  PSLIST_ENTRY v4; // rbx

  v2 = 2LL * ((a1 & 1) == 0);
  v3 = (a1 & 1) == 0;
  v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 1154]);
  if ( v4 || (v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 1158])) != 0LL )
  {
LABEL_3:
    MiInitializeInPageSupport((ULONG_PTR)v4);
    return v4;
  }
  if ( (a1 & 4) == 0 )
  {
    v4 = (PSLIST_ENTRY)MiAllocateInPageSupportBlock(v3, 1LL);
    if ( !v4 )
      return v4;
    goto LABEL_3;
  }
  return 0LL;
}
