/*
 * XREFs of MiScrubLargeMappedPage @ 0x14065BE5C
 * Callers:
 *     MiScrubProcessLargePage @ 0x140A43D34 (MiScrubProcessLargePage.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiIdentifyPfnWrapper @ 0x14025C920 (MiIdentifyPfnWrapper.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MiRewritePteWithLockBit @ 0x140371830 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiMakePageBad @ 0x14065BCD0 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x14065BE30 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rdi
  unsigned int v29; // r14d
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  unsigned __int64 *v32; // r13
  unsigned __int64 v33; // rbx
  __int64 v34; // r8
  int v35; // eax
  int v37; // [rsp+20h] [rbp-E0h]
  unsigned int v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v40; // [rsp+38h] [rbp-C8h]
  int v41; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v42; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v43; // [rsp+48h] [rbp-B8h]
  unsigned __int64 valid; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  unsigned __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v53; // [rsp+98h] [rbp-68h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-58h]
  __int128 v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h]
  _QWORD v58[24]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a3;
  v5 = a2;
  v51 = a2;
  v6 = 0;
  v49 = a1;
  v45 = a3;
  v52 = 0LL;
  v53 = a4;
  memset(v58, 0, 0xB8uLL);
  WORD2(v58[0]) = 0;
  v48 = MiLargePageSizes[v4];
  v8 = a4[2];
  LODWORD(v58[0]) = 1;
  v58[2] = 0LL;
  LODWORD(v58[1]) = 20;
  v58[3] = 0LL;
  v40 = 0;
  v46 = 0LL;
  v54 = v8;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 2 - v4;
  v38 = 2 - v4;
  if ( (unsigned int)v4 >= 2 )
  {
    v38 = 2 - v4;
  }
  else
  {
    v11 = v10;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v11;
    }
    while ( v11 );
  }
  v12 = 1LL;
  if ( (unsigned int)v4 > 1 )
    v12 = 16LL;
  v47 = v12;
  v13 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v43 = v13;
  v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v14;
  while ( 2 )
  {
    v57 = 0LL;
    v56 = 0LL;
    LOBYTE(v37) = MiLockWorkingSetShared((__int64)v13);
    valid = MiLockLowestValidPageTable((__int64)v13, v9, &v52);
    v15 = valid;
    if ( valid != v14 )
      goto LABEL_57;
    v39 = MI_READ_PTE_LOCK_FREE(v9);
    v16 = v39;
    if ( (v39 & 1) == 0 )
      goto LABEL_57;
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39) >> 12) & 0xFFFFFFFFFFLL;
    if ( v17 != v5 )
      goto LABEL_57;
    v18 = 48 * v17 - 0x220000000000LL;
    v19 = MiIdentifyPfnWrapper(v18, (__int64)&v56);
    if ( v19 != v48 )
      goto LABEL_57;
    v20 = *v53;
    if ( (((unsigned __int8)v56 ^ (unsigned __int8)*v53) & 0x70) != 0
      || (((unsigned __int8)v56 ^ (unsigned __int8)v20) & 0xF) != 0
      || v57 != v53[2]
      || (((unsigned __int64)v56 ^ v20) & 0x1FFFFFFFFFFFE00LL) != 0
      || (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || *(_WORD *)(v18 + 32) != 2 )
    {
      goto LABEL_57;
    }
    if ( v45 > 1 )
    {
      v21 = 0;
      v22 = v47;
      v23 = 0LL;
      do
      {
        ++v21;
        *(_QWORD *)(v9 + 8 * v23) = ZeroPte;
        v23 = v21;
      }
      while ( v21 < v22 );
    }
    else
    {
      if ( (v16 & 0x80u) == 0LL )
        goto LABEL_57;
      MiRewritePteWithLockBit((__int64)v13, (__int64 *)v9, ZeroPte);
      v16 &= 0xCFFFFFFFFFFFFFFFuLL;
    }
    MiInsertTbFlushEntry((__int64)v58, v54, v47, v10);
    MiFlushTbList((int *)v58);
    v24 = v46;
    v41 = 0;
    v25 = v18 + 48 * v48;
    v26 = 48 * v46 + v18;
    v55 = v25;
    v42 = v26;
    if ( v26 >= v25 )
      goto LABEL_38;
    v27 = v26 + 0x220000000000LL;
    while ( 1 )
    {
      v46 = ++v24;
      if ( *(_WORD *)(v27 - 0x21FFFFFFFFE0LL) != 2 )
        goto LABEL_34;
      if ( (int)MiScrubPage(v49, v26, 0LL, 1LL, v37) < 0 )
        MiMakePageBad(0xAAAAAAAAAAAAAAABuLL * (v27 >> 4), 1);
      if ( MiWorkingSetIsContended((__int64)v13)
        || (unsigned int)MiPageTableLockIsContended((__int64)v13, valid)
        || KeShouldYieldProcessor() )
      {
        break;
      }
      v40 = MiScrubInterrupted(v49);
      if ( v40 )
        goto LABEL_37;
      v24 = v46;
LABEL_34:
      v26 += 48LL;
      v27 += 48LL;
      v42 = v26;
      if ( v26 >= v25 )
        goto LABEL_38;
    }
    v41 = 1;
LABEL_37:
    v42 = v26 + 48;
LABEL_38:
    v28 = v16 | 0x20;
    v29 = 0;
    v39 = v28;
    v30 = v28;
    v31 = 0LL;
    while ( 2 )
    {
      v32 = (unsigned __int64 *)(v9 + 8 * v31);
      v33 = v30;
      if ( !MiPteInShadowRange((unsigned __int64)v32) )
      {
LABEL_47:
        v35 = 0;
        goto LABEL_48;
      }
      if ( !MiPteHasShadow() )
      {
        v28 = v39;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v30 & 1) != 0 )
        {
          v33 = v30 | 0x8000000000000000uLL;
        }
        goto LABEL_47;
      }
      v35 = 1;
      if ( !HIBYTE(word_140C6697C) && (v30 & 1) != 0 )
        v33 = v30 | 0x8000000000000000uLL;
LABEL_48:
      *v32 = v33;
      if ( v35 )
        MiWritePteShadow((__int64)v32, v33, v34);
      ++v29;
      v28 ^= (v28 ^ ((v28 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
      v31 = v29;
      v30 = v28;
      v39 = v28;
      if ( v29 < v47 )
        continue;
      break;
    }
    v13 = v43;
    if ( v42 == v55 )
    {
      v6 = 1;
    }
    else if ( !v40 )
    {
      v10 = v38;
      v14 = v50;
      v5 = v51;
      if ( v41 )
      {
        MiUnlockPageTableInternal((__int64)v43, valid);
        MiUnlockWorkingSetShared((__int64)v13, v37);
      }
      continue;
    }
    break;
  }
  v15 = valid;
LABEL_57:
  MiUnlockPageTableInternal((__int64)v13, v15);
  MiUnlockWorkingSetShared((__int64)v13, v37);
  return v6;
}
