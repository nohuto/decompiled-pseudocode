/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x14076202C
 * Callers:
 *     MmAllocateIndependentPages @ 0x140762010 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14079FD68 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x1407A0160 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407A09E0 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x14088EB54 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408972A4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1408976C4 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140897CB4 (IopLiveDumpAllocateIptBuffers.c)
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiReturnPoolCharges @ 0x1402E9F00 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiGetNextPageColor @ 0x140357168 (MiGetNextPageColor.c)
 *     MiObtainPoolCharges @ 0x140357184 (MiObtainPoolCharges.c)
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rax
  int v10; // edx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // r11d
  unsigned int NextPageColor; // r15d
  __int64 SlabPage; // rcx
  unsigned __int64 v18; // rbx
  int v19; // r15d
  __int64 v20; // r8
  __int64 v21; // r11
  unsigned int v23; // edx
  _QWORD *v24; // rcx
  int HasShadow; // eax
  __int64 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  __int128 v28; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v29[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h]
  BOOL v31; // [rsp+C0h] [rbp+8h]
  unsigned int v32; // [rsp+D8h] [rbp+20h]

  v32 = a4;
  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v7 = MiReservePtes((__int64)&qword_140C4EF40, v6, a3, a4);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v7, v6);
    return 0LL;
  }
  v31 = a3 && (dword_140C50D84 & 8) != 0 && (a2 == -1 || KeNumberNodes == 1);
  v27 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, 2684354564LL, v8);
  v10 = 0;
  v11 = ValidPte;
  if ( a2 != -1 )
    v10 = a2 + 1;
  MiInitializePageColorBase(0LL, v10, (__int64)&v28);
  v12 = 0LL;
  v26 = 0LL;
  do
  {
    v13 = 0;
    NextPageColor = MiGetNextPageColor((__int64)&v28);
    if ( v31 )
    {
      if ( a3 != -1 )
      {
        v23 = 0;
        if ( !v32 )
          goto LABEL_9;
        v24 = (_QWORD *)a3;
        while ( v14 != *v24 >> 12 )
        {
          v23 += v15;
          ++v24;
          if ( v23 >= v32 )
            goto LABEL_9;
        }
      }
      v13 = v15;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v13 )
      {
        SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, v15, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
        if ( SlabPage != -1 )
          break;
      }
      SlabPage = MiGetPage((__int64)&MiSystemPartition, NextPageColor, 8LL);
      if ( SlabPage != -1 )
        goto LABEL_11;
      MiWaitForFreePage(&MiSystemPartition);
      v15 = 1;
    }
    ++v12;
LABEL_11:
    v11 ^= (v11 ^ (SlabPage << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * SlabPage - 0x58000000000LL, (__int64 *)v7, 4u, 4);
    v18 = v11;
    v19 = 0;
    if ( !MiPteInShadowRange(v7) )
    {
      v21 = 1LL;
      goto LABEL_13;
    }
    HasShadow = MiPteHasShadow();
    v21 = 1LL;
    if ( HasShadow )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( (v11 & 1) != 0 )
      v18 = v11 | 0x8000000000000000uLL;
LABEL_13:
    *(_QWORD *)v7 = v18;
    if ( v19 )
      MiWritePteShadow(v7, v18, v20);
    v7 += 8LL;
    v26 += v21;
    v6 -= v21;
  }
  while ( v6 );
  if ( v12 )
  {
    v29[3] = v12;
    v29[0] = v12;
    *(_OWORD *)&v29[1] = 0LL;
    v30 = 0LL;
    MiReturnPoolCharges(v29, v21);
  }
  return v27;
}
