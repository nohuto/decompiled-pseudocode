/*
 * XREFs of MmFreeIndependentPages @ 0x140880080
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403A9A80 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x140548094 (HvlpInitializeHvCrashdump.c)
 *     KiFreeProcessorStacks @ 0x14056BDEC (KiFreeProcessorStacks.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x14056BED4 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x140606DB0 (ExDeletePoolTagTable.c)
 *     HvpFreeBin @ 0x1407E9ED8 (HvpFreeBin.c)
 *     MmAllocateIsrStack @ 0x14081FAFC (MmAllocateIsrStack.c)
 *     HvlDeleteProcessor @ 0x1409412AC (HvlDeleteProcessor.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094E0D8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14094EEC8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F534 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FA08 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmFreeIsrStack @ 0x140A3C7E8 (MmFreeIsrStack.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BCC (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiReturnPoolCharges @ 0x140340278 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 *PteAddress; // rdi
  __int64 *v4; // r13
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // r8
  bool v10; // zf
  _OWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v15; // [rsp+B0h] [rbp+50h]
  __int64 *v16; // [rsp+B8h] [rbp+58h]

  v13 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v15 = v2;
  v11[0] = v2;
  v12 = v2;
  v11[1] = 0LL;
  PteAddress = (__int64 *)MiGetPteAddress(a1);
  v16 = PteAddress;
  v4 = &PteAddress[v2];
  do
  {
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    v6 = ZeroPte;
    v7 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_3;
    if ( MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C66DFC) )
        goto LABEL_3;
      v10 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v10 = (ZeroPte & 1) == 0;
    }
    if ( !v10 )
      v6 = ZeroPte | 0x8000000000000000uLL;
LABEL_3:
    *PteAddress = v6;
    if ( v8 )
      MiWritePteShadow((__int64)PteAddress, v6, v9);
    if ( (unsigned int)MiCheckSlabPfnBitmap(v5, 1LL, 1) )
    {
      --*(_QWORD *)&v11[0];
      *(_QWORD *)&v12 = v12 - 1;
      MiLockAndDecrementShareCount(v5, 1);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v5, 1) == 3 )
    {
      ++*((_QWORD *)&v11[0] + 1);
    }
    MiLockAndDecrementShareCount(v7, 0);
    ++PteAddress;
  }
  while ( PteAddress < v4 );
  MiReleasePtes((__int64)&qword_140C69A40, v16, v15);
  MiReturnPoolCharges((unsigned __int64 *)v11, 1, 0);
}
