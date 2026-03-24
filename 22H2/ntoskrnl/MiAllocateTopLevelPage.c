/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406FE0F4
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406FE00C (MiAllocateProcessShadow.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiSetPfnLink @ 0x14029880C (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140356D68 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1403570E4 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x140357168 (MiGetNextPageColor.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *ProcessPartition; // rbx
  int v6; // r9d
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 Page; // rax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v14; // rbx
  _DWORD *v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  int v18; // ebp
  __int64 v19; // r8
  unsigned __int64 *v20; // rdi
  int v21; // esi
  __int64 v22; // r8
  bool v24; // zf
  bool v25; // zf
  _OWORD v26[2]; // [rsp+20h] [rbp-28h] BYREF

  v26[0] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1664, v6, (__int64)v26);
  NextPageColor = MiGetNextPageColor((__int64)v26);
  for ( i = NextPageColor; ; i = NextPageColor )
  {
    Page = MiGetPage((__int64)ProcessPartition, i, 770LL);
    v10 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v11 = (_QWORD *)(48 * Page - 0x58000000000LL);
  MiSetPfnLink(v11, 0LL);
  ValidPte = MiMakeValidPte(0LL, v10, 2415919110LL, v12);
  *v11 = 0LL;
  v11[5] ^= (v10 ^ v11[5]) & 0xFFFFFFFFFLL;
  v14 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v11, a1, 0LL, v15);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512LL);
  v17 = MiMakeValidPte(0LL, v10, 2684354564LL, v16);
  v18 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_4;
      v24 = (v17 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v24 = (v17 & 1) == 0;
    }
    if ( !v24 )
      v17 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v17;
  if ( v18 )
    MiWritePteShadow(a2, v17, v19);
  v20 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v21 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v20) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v21 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_7;
      v25 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v25 = (v14 & 1) == 0;
    }
    if ( !v25 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v20 = v14;
  if ( v21 )
    MiWritePteShadow((__int64)v20, v14, v22);
  return v10;
}
