__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // r14
  unsigned __int64 v8; // r15
  int SystemRegionType; // eax
  int v10; // ecx
  __int64 v11; // rdx
  signed __int64 v12; // rsi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 ValidPte; // rdi
  bool v17; // cl
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  bool v26; // [rsp+20h] [rbp-78h]
  unsigned int v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h] BYREF
  __int64 v30; // [rsp+40h] [rbp-58h]
  unsigned __int8 v34; // [rsp+B8h] [rbp+20h]

  v29 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v10 = 1;
  if ( SystemRegionType != 1 )
    v10 = 9;
  v27 = v10;
  if ( (a4 & 1) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1, v10) )
    return 0LL;
  v28 = 0LL;
  v30 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v11 = qword_140C69390;
    v12 = qword_140C69400;
  }
  else
  {
    v11 = qword_140C69378;
    v12 = qword_140C69410;
  }
  AnyMultiplexedVm = 0LL;
  v34 = 17;
  v14 = 0LL;
  v15 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v11, 536870913);
  if ( !v8 )
    goto LABEL_17;
  v17 = (a4 & 4) != 0;
  v26 = v17;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v17 && v8 - v15 >= 0x200 )
    {
      v22 = MiGetPteAddress(PteAddress);
      if ( !(_DWORD)InitializationPhase )
      {
LABEL_22:
        v29 = MI_READ_PTE_LOCK_FREE(v22);
        MiTransformValidPteInPlace((volatile signed __int64 *)v22, v22, v12, 1);
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
        MiSetPfnLink((_QWORD *)(48 * ((v23 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), v28);
        v28 = v24;
        v30 = MiPartitionIdToPointer((*(_QWORD *)(v24 + 40) >> 43) & 0x3FF);
        v15 += 511LL;
        PteAddress = (__int64)((v22 << 25) + 0x10000000) >> 16;
        goto LABEL_15;
      }
      if ( !AnyMultiplexedVm )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
        v34 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      }
      if ( v14 )
      {
        if ( (v22 & 0xFFF) != 0 )
          goto LABEL_22;
        MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
      }
      v14 = MiGetPteAddress(v22);
      MiLockPageTable((__int64)AnyMultiplexedVm, v14);
      goto LABEL_22;
    }
    v18 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
          v18 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_12;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v18 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v20 = 0;
LABEL_12:
    *(_QWORD *)PteAddress = v18;
    if ( v20 )
      MiWritePteShadow(PteAddress, v18, v19);
    PteAddress += 8LL;
LABEL_15:
    v17 = v26;
    ++v15;
  }
  while ( v15 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v14 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v34);
  }
LABEL_17:
  *a1 = a3;
  a1[1] = a2;
  if ( v28 )
  {
    v25 = MiReturnPfnList(v28);
    MiReturnSplitPageCharges(v30, v25, v27);
  }
  return 1LL;
}
