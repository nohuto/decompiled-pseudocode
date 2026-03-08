/*
 * XREFs of MiGetInPageSupportBlock @ 0x14028A054
 * Callers:
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14028A6A0 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x14075A230 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x140A2E550 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x140A2E670 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14028A110 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x1402F7884 (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiGetInPageSupportBlock(unsigned int a1, __int64 a2)
{
  __int64 v4; // rbp
  BOOL v5; // r14d
  PSLIST_ENTRY v6; // rbx

  v4 = 2LL * ((a1 & 1) == 0);
  v5 = (a1 & 1) == 0;
  v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v4 + 2108]);
  if ( v6 || (v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v4 + 2112])) != 0LL )
  {
LABEL_2:
    MiInitializeInPageSupport(v6, a1, a2);
    return v6;
  }
  if ( (a1 & 4) == 0 )
  {
    v6 = (PSLIST_ENTRY)MiAllocateInPageSupportBlock(v5, 1LL);
    if ( !v6 )
      return v6;
    goto LABEL_2;
  }
  return 0LL;
}
