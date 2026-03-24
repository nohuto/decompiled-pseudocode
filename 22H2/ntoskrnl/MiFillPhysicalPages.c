/*
 * XREFs of MiFillPhysicalPages @ 0x1403579D0
 * Callers:
 *     MiGetPoolPages @ 0x14033DA1C (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x1403569E4 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MxMapVa @ 0x140A43F9C (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A55944 (MiInitializeDummyPages.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140402430 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140A57438 (MxGetPhase0Mapping.c)
 */

char __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // r12
  __int64 v7; // rbx
  void *HyperPte; // r14
  void *v9; // rbp
  __int64 v10; // r8
  char result; // al
  unsigned __int64 Phase0Mapping; // rax
  __int64 v13; // r9
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v4 = 0LL;
  LOBYTE(v17) = 17;
  v7 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v9 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, (unsigned __int8 *)&v17, 0x80000000, a4);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v9 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v4, BugCheckParameter2, 2684354564LL, v13);
    if ( !MiPteInShadowRange((unsigned __int64)v4) )
      goto LABEL_13;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
LABEL_13:
      *v4 = ValidPte;
      goto LABEL_4;
    }
    if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
      ValidPte |= 0x8000000000000000uLL;
    *v4 = ValidPte;
    MiWritePteShadow((__int64)v4, ValidPte, v10);
LABEL_4:
    if ( a3 )
      memset64(v9, a3, 0x200uLL);
    else
      KeZeroPages(v9, 4096LL, v10);
    if ( HyperPte )
    {
      result = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v9, (unsigned __int8)v17, 0x80000000LL);
      goto LABEL_8;
    }
    v15 = ZeroPte;
    if ( MiPteInShadowRange((unsigned __int64)v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v15 = ZeroPte | 0x8000000000000000uLL;
        *v4 = v15;
        MiWritePteShadow((__int64)v4, v15, v16);
        goto LABEL_16;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v4 = v15;
LABEL_16:
    result = KeFlushSingleTb((unsigned __int64)v9, 0, 1u);
LABEL_8:
    ++v7;
    ++BugCheckParameter2;
  }
  while ( !v7 );
  return result;
}
