/*
 * XREFs of MmFreeIndependentPages @ 0x140763BF0
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B5E70 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B62E8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F901C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x1405B358C (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408972A4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898070 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14089873C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898BD0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140898EF0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1408D12A8 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiReturnPoolCharges @ 0x1402E9F00 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *PteAddress; // rdi
  BOOL v4; // eax
  unsigned __int64 v5; // r13
  BOOL v6; // esi
  unsigned __int64 PteShadow; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  bool v15; // zf
  _QWORD *v16; // [rsp+20h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-28h]
  unsigned __int64 v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h]
  unsigned __int64 v22; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v23; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v24; // [rsp+B8h] [rbp+58h]

  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v24 = v2;
  v17 = v2;
  v20 = v2;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v16 = PteAddress;
  v23 = &PteAddress[v2];
  v4 = MiPteInShadowRange((unsigned __int64)&v22);
  v5 = (unsigned __int64)v23;
  v6 = v4;
  do
  {
    PteShadow = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v22 = PteShadow;
    if ( v6 )
      PteShadow = MiReadPteShadow((unsigned __int64)&v22, PteShadow);
    v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = ZeroPte;
    v10 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_5;
        v15 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_5;
        v15 = (ZeroPte & 1) == 0;
      }
      if ( !v15 )
        v9 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_5:
    *PteAddress = v9;
    if ( v11 )
      MiWritePteShadow((__int64)PteAddress, v9, v12);
    if ( MiIsPfnFromSlabAllocation(v8) )
    {
      --v17;
      --v20;
      MiLockAndDecrementShareCount(v8, 1LL, v13);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v8, 1LL, v13) == 3 )
    {
      ++v18;
    }
    MiLockAndDecrementShareCount(v10, 0LL, v14);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress < v5 );
  MiReleasePtes((__int64)&qword_140C4EF40, v16, v24);
  MiReturnPoolCharges(&v17, 1);
}
