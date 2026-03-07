__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  int v2; // r13d
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int16 v5; // r14
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r13d
  int v20; // ecx
  unsigned __int64 v21; // r14
  int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  signed __int8 v26; // cf
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 i; // rbx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 v38; // rcx
  bool v39; // zf
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+48h] [rbp-C0h]
  _BYTE v43[12]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+70h] [rbp-98h]
  unsigned __int64 v48; // [rsp+78h] [rbp-90h]
  unsigned __int64 v49; // [rsp+80h] [rbp-88h]
  unsigned __int64 v50; // [rsp+88h] [rbp-80h]
  _QWORD v51[46]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v52[24]; // [rsp+208h] [rbp+100h] BYREF

  *(_DWORD *)&v43[8] = 0;
  LOBYTE(v40) = 0;
  memset(v52, 0, 0xB8uLL);
  memset(v51, 0, 0x168uLL);
  LODWORD(v52[1]) = 20;
  v52[3] = 0LL;
  *(_QWORD *)v43 = (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = *(_DWORD *)v43;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  v44 = 0x200000LL;
  if ( *(_DWORD *)v43 != 1 )
  {
    v38 = (unsigned int)(*(_DWORD *)v43 - 1);
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v38;
    }
    while ( v38 );
    v44 = v4;
  }
  v45 = MI_READ_PTE_LOCK_FREE(v3);
  v5 = v45;
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFFLL;
  v47 = v6;
  MiInitializeLargePfnList(v51);
  LODWORD(v51[15]) = 4;
  v51[12] = &MiSystemPartition;
  v7 = MiSearchNumaNodeTable(v6);
  MiInitializeColorBase(a1, *((_DWORD *)v7 + 2) + 1, (__int64)&v51[42]);
  if ( (int)MiGetPageTablePages((__int64)v51, 1uLL, 0, &v43[4]) < 0 )
    return 0LL;
  v8 = *(_QWORD **)&v43[4];
  **(_QWORD **)&v43[4] = 0LL;
  *v8 = 0LL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x44000000000LL) >> 4);
  v46 = v9;
  v41 = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41);
  v11 = -2147483644;
  v49 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v5 & 0x100) != 0 && v2 == 1 )
    v11 = -1610612732;
  v50 = v3 << 25;
  ValidPte = MiMakeValidPte((__int64)(v3 << 25) >> 16, v6, v11);
  v41 = ValidPte;
  v13 = ValidPte;
  v14 = ValidPte;
  if ( ((unsigned __int8)(1 << (v2 - 1)) & (unsigned __int8)byte_140C6570F) != 0 )
  {
    v13 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v41 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v14 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
  }
  v48 = MiMapPageInHyperSpaceWorker(v9, (unsigned __int8 *)&v40, 0x80000000);
  v15 = v48;
  do
  {
    v42 = 0;
    v16 = v14;
    if ( !MiPteInShadowRange(v15) )
    {
LABEL_8:
      v18 = v42;
      goto LABEL_9;
    }
    if ( MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v39 = (v14 & 1) == 0;
    }
    else
    {
      v13 = v41;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v18 = v42;
      v39 = (v14 & 1) == 0;
    }
    if ( !v39 )
      v16 = v14 | 0x8000000000000000uLL;
LABEL_9:
    *(_QWORD *)v15 = v16;
    if ( v18 )
      MiWritePteShadow(v15, v16, v17);
    v15 += 8LL;
    v13 ^= (v13 ^ ((v13 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
    v41 = v13;
    v14 = v13;
  }
  while ( (v15 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v48, v40);
  v19 = *(_DWORD *)v43;
  v20 = -2080374780;
  v21 = v47;
  if ( *(_DWORD *)v43 == 1 )
    v20 = -2147483644;
  v22 = v20 | 0x20000000;
  if ( (v45 & 0x100) == 0 )
    v22 = v20;
  v23 = MiMakeValidPte(v3, v47, v22 | 0x8000000u);
  v24 = v46;
  v41 = v23;
  MiInitializePfnForOtherProcess(v46, v3, v49, 2560);
  v25 = *(_QWORD *)&v43[4];
  *(_DWORD *)v43 = 0;
  v26 = _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)&v43[4] + 24LL), 0x3FuLL);
  v27 = v44;
  if ( v26 )
  {
    do
    {
      do
        KeYieldProcessorEx(v43);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
  }
  v28 = *(_QWORD *)&v43[4];
  *(_QWORD *)(*(_QWORD *)&v43[4] + 24LL) ^= (*(_QWORD *)(*(_QWORD *)&v43[4] + 24LL) ^ (*(_QWORD *)(*(_QWORD *)&v43[4]
                                                                                                 + 24LL)
                                                                                     + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v41 ^= (v41 ^ (v24 << 12)) & 0xFFFFFFFFFF000LL;
  MiTransformValidPteInPlace(v3, v3, v41, v19);
  if ( v19 == 3 )
    MiInsertLargeTbFlushEntry((__int64)v52, 3, v3);
  v30 = 48 * v21 - 0x220000000000LL;
  v31 = v46;
  v32 = (__int64)(v50 + 0x10000000) >> 16;
  v33 = 512LL;
  for ( i = v30 + 24576; ; i = *(_QWORD *)&v43[4] )
  {
    v35 = i - 48;
    v32 -= 8LL;
    LODWORD(v44) = 0;
    *(_QWORD *)&v43[4] = v35;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(__int64 *)(v35 + 24) < 0 );
    }
    v36 = *(_QWORD *)&v43[4];
    if ( (*(_BYTE *)(*(_QWORD *)&v43[4] + 35LL) & 0x10) == 0 )
    {
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)&v43[4] + 40LL), 0x28u) )
        MiConvertLargePfnToSmall(v30, *(_QWORD *)&v43[4], v29, 0LL);
      *(_QWORD *)(v36 + 8) = v32;
      MiSetPfnPteFrame(v36, v31);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v33 )
      break;
  }
  if ( v19 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v47, v27 >> 12, 0, 1);
  MiFlushTbList((int *)v52);
  return 1LL;
}
