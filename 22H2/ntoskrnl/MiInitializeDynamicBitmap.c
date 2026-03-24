/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1407867DC
 * Callers:
 *     MiBuildDynamicRegion @ 0x1403B5924 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x14078610C (MiSessionCreate.c)
 *     MiCreatePfnBitMaps @ 0x1407B9CA4 (MiCreatePfnBitMaps.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A4E918 (MiInitializePteInfo.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140A9244C (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x14029880C (MiSetPfnLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x1403253D8 (MiPartitionIdToPointer.c)
 *     MiTransformValidPteInPlace @ 0x140378AC8 (MiTransformValidPteInPlace.c)
 *     MiLockPageTable @ 0x140381AAC (MiLockPageTable.c)
 *     MiMakeZeroedPageTables @ 0x14039D740 (MiMakeZeroedPageTables.c)
 *     MiUnlockPageTable @ 0x1403B6600 (MiUnlockPageTable.c)
 *     MiReturnPfnList @ 0x1403BA340 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403CE694 (MiReturnSplitPageCharges.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // r14
  unsigned __int64 v8; // r12
  int SystemRegionType; // eax
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rsi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 ValidPte; // rdi
  __int64 v19; // r8
  _DWORD *v20; // r9
  bool v21; // cl
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v25; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  bool v33; // [rsp+20h] [rbp-78h]
  int v34; // [rsp+28h] [rbp-70h]
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned __int8 v41; // [rsp+B8h] [rbp+20h]

  v35 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v11 = 1;
  if ( SystemRegionType != 1 )
    v11 = 9;
  v34 = v11;
  if ( (a4 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1u, v11) )
    return 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v12 = qword_140C4ED80;
    v13 = qword_140C4EDF0;
  }
  else
  {
    v12 = qword_140C4ED68;
    v13 = qword_140C4EE00;
  }
  AnyMultiplexedVm = 0LL;
  v41 = 17;
  v15 = 0LL;
  v16 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v12, ((unsigned __int8)(a4 & 1) << 29) + 1, v10);
  if ( !v8 )
    goto LABEL_17;
  v21 = (a4 & 8) != 0;
  v33 = v21;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v21 && v8 - v16 >= 0x200 )
    {
      v25 = MiGetPteAddress(PteAddress);
      if ( (_DWORD)InitializationPhase )
      {
        if ( !AnyMultiplexedVm )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v41 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v30, v31, v32);
        }
        if ( v15 )
        {
          if ( (v25 & 0xFFF) != 0 )
            goto LABEL_26;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
        }
        v15 = MiGetPteAddress(v25);
        MiLockPageTable((__int64)AnyMultiplexedVm, v15);
      }
LABEL_26:
      v35 = MI_READ_PTE_LOCK_FREE(v25);
      PteShadow = v35;
      MiTransformValidPteInPlace((volatile signed __int64 *)v25, v25, v13, 1u);
      if ( MiPteInShadowRange((unsigned __int64)&v35) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v35, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v36);
      v28 = *(_QWORD *)(v27 + 40);
      v36 = v27;
      v37 = MiPartitionIdToPointer((v28 >> 39) & 0x3FF);
      v16 += 511LL;
      PteAddress = ((v25 << 25) + 0x10000000) >> 16;
      goto LABEL_15;
    }
    v22 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
          v22 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_12;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v22 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v23 = 0;
LABEL_12:
    *(_QWORD *)PteAddress = v22;
    if ( v23 )
      MiWritePteShadow(PteAddress, v22, v19);
    PteAddress += 8LL;
LABEL_15:
    v21 = v33;
    ++v16;
  }
  while ( v16 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v15 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v41);
  }
LABEL_17:
  *a1 = a3;
  a1[1] = a2;
  if ( v36 )
  {
    v29 = MiReturnPfnList(v36, v17, v19, v20);
    MiReturnSplitPageCharges(v37, v29, v34);
  }
  return 1LL;
}
