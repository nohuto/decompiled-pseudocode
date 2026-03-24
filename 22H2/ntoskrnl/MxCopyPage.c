/*
 * XREFs of MxCopyPage @ 0x140A568CC
 * Callers:
 *     MiCreateSystemPageTable @ 0x140356770 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1404024D0 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x140A57438 (MxGetPhase0Mapping.c)
 */

char __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  unsigned __int64 ValidPte; // rbx
  int v9; // ebp
  __int64 v10; // r8
  BOOL v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // rdx
  bool v16; // zf
  bool v17; // zf

  Phase0Mapping = MxGetPhase0Mapping();
  v6 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v7 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v7, BugCheckParameter2, 2684354564LL, v5);
  v9 = 0;
  v11 = MiPteInShadowRange((unsigned __int64)v7);
  if ( v11 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_3;
      v16 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v16 = (ValidPte & 1) == 0;
    }
    if ( !v16 )
      ValidPte |= v15;
  }
LABEL_3:
  *v7 = ValidPte;
  if ( v9 )
    MiWritePteShadow((__int64)v7, ValidPte, v10);
  KeCopyPage(v6, a2);
  v12 = ZeroPte;
  v13 = 0LL;
  if ( v11 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1LL;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_6;
      v17 = (v12 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_6;
      v17 = (v12 & 1) == 0;
    }
    if ( !v17 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v7 = v12;
  if ( (_DWORD)v13 )
    MiWritePteShadow((__int64)v7, v12, v13);
  return KeFlushSingleTb(v6, 0, 1u);
}
