/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x1403B9BC8
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9588 (MiPfnRangeIsZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiInitializeColorBase @ 0x14027DAF8 (MiInitializeColorBase.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140356D68 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x140356F00 (MiGetPageTablePages.c)
 *     MiTransformValidPteInPlace @ 0x140378AC8 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5648 (MiConvertLargePfnToSmall.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int64 v5; // rcx
  __int16 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  signed __int64 v16; // rdi
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  __int64 v25; // r9
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 i; // rbx
  __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned __int8 v45; // [rsp+38h] [rbp-D0h] BYREF
  int v46; // [rsp+3Ch] [rbp-CCh]
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-B8h]
  int v50; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  unsigned __int64 v56; // [rsp+80h] [rbp-88h]
  unsigned __int64 v57; // [rsp+88h] [rbp-80h]
  _QWORD v58[38]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v59[24]; // [rsp+1C8h] [rbp+C0h] BYREF

  v48 = 0LL;
  v45 = 0;
  memset(v59, 0, 0xB8uLL);
  memset(v58, 0, 0x128uLL);
  LODWORD(v59[1]) = 20;
  v59[3] = 0LL;
  v49 = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v49;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( v49 != 1 )
  {
    v5 = v49 - 1;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v5;
    }
    while ( v5 );
  }
  v53 = MI_READ_PTE_LOCK_FREE(v3);
  v6 = v53;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v53);
  LODWORD(v58[7]) = 4;
  v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
  v58[4] = &MiSystemPartition;
  v55 = v8;
  v9 = MiSearchNumaNodeTable(v8);
  MiInitializeColorBase(a1, *((_DWORD *)v9 + 2) + 1, (__int64)&v58[34]);
  if ( (int)MiGetPageTablePages((__int64)v58, 1uLL, &v48) < 0 )
    return 0LL;
  v11 = v48;
  *(_QWORD *)v48 = 0LL;
  v12 = (v11 + 0x58000000000LL) / 48;
  v52 = v12;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v15 = 2147483652LL;
  v56 = (v13 >> 12) & 0xFFFFFFFFFLL;
  if ( (v6 & 0x100) != 0 && v2 == 1 )
    v15 = 2684354564LL;
  v57 = v3 << 25;
  ValidPte = MiMakeValidPte((__int64)(v3 << 25) >> 16, v8, v15, v14);
  v16 = ValidPte;
  v54 = MiMapPageInHyperSpaceWorker(v12, &v45, 0x80000000, v17);
  v18 = v54;
  v19 = v16;
  do
  {
    v46 = 0;
    v20 = v19;
    if ( !MiPteInShadowRange(v18) )
    {
LABEL_18:
      v23 = v46;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v23 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_19;
      v24 = (v19 & 1) == 0;
    }
    else
    {
      v16 = ValidPte;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v23 = v46;
      v24 = (v19 & 1) == 0;
    }
    if ( !v24 )
      v20 = v19 | 0x8000000000000000uLL;
LABEL_19:
    *(_QWORD *)v18 = v20;
    if ( v23 )
      MiWritePteShadow(v18, v20, v22);
    v18 += 8LL;
    v16 ^= (v16 ^ ((v16 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v16;
    v19 = v16;
  }
  while ( (v18 & 0xFFF) != 0 );
  LOBYTE(v21) = v45;
  MiUnmapPageInHyperSpaceWorker(v54, v21, 0x80000000LL);
  v26 = v49;
  v27 = -2080374780;
  v28 = v55;
  if ( v49 == 1 )
    v27 = -2147483644;
  v29 = v27;
  LODWORD(v29) = v27 | 0x20000000;
  if ( (v53 & 0x100) == 0 )
    v29 = v27;
  LODWORD(v29) = v29 | 0x8000000;
  v30 = MiMakeValidPte(v3, v55, v29, v25);
  v31 = v52;
  ValidPte = v30;
  MiInitializePfnForOtherProcess(v52, v3, v56, 2560LL);
  v50 = 0;
  v35 = v48;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v50, v32, v33, v34);
    while ( *(__int64 *)(v35 + 24) < 0 );
  }
  *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v52 = v31 & 0xFFFFFFFFFLL;
  ValidPte = ((v31 & 0xFFFFFFFFFLL) << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v26);
  v38 = 3LL;
  if ( v26 == 3 )
    MiInsertLargeTbFlushEntry((__int64)v59, 3u, v3);
  v39 = v52;
  v40 = (__int64)(v57 + 0x10000000) >> 16;
  v41 = 512LL;
  for ( i = 48 * v28 - 0x58000000000LL + 24576; ; i = v48 )
  {
    v43 = i - 48;
    v40 -= 8LL;
    LODWORD(v51) = 0;
    v48 = v43;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51, v38, v36, v37);
      while ( *(__int64 *)(v43 + 24) < 0 );
    }
    v44 = v48;
    if ( (*(_BYTE *)(v48 + 35) & 0x10) == 0 )
    {
      if ( (*(_QWORD *)(v48 + 40) & 0x1000000000LL) != 0 )
        MiConvertLargePfnToSmall(48 * v28 - 0x58000000000LL, v48, v36, 0LL);
      *(_QWORD *)(v44 + 8) = v40;
      *(_QWORD *)(v44 + 40) = v39 | *(_QWORD *)(v44 + 40) & 0xFFFFFFF000000000uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v41 )
      break;
  }
  if ( v49 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v28, v4 >> 12, 0, 1);
  MiFlushTbList((__int64)v59, (_KPROCESS *)v38);
  return 1LL;
}
