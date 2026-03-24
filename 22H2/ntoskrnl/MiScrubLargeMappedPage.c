/*
 * XREFs of MiScrubLargeMappedPage @ 0x1405639C8
 * Callers:
 *     MiScrubProcessLargePages @ 0x140564434 (MiScrubProcessLargePages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x1403B65B8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiMakePageBad @ 0x140563874 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x140563998 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x140564234 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  volatile __int64 *v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // edi
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rcx
  _KPROCESS *v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  ULONG_PTR v26; // r12
  unsigned __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r8
  _DWORD *v30; // r9
  __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  volatile __int64 *v34; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  _DWORD *v41; // r9
  unsigned __int8 v42; // [rsp+20h] [rbp-178h]
  char v43; // [rsp+21h] [rbp-177h]
  unsigned __int64 v44; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v45; // [rsp+30h] [rbp-168h]
  __int64 v46; // [rsp+38h] [rbp-160h] BYREF
  int v47; // [rsp+40h] [rbp-158h]
  int v48; // [rsp+44h] [rbp-154h]
  unsigned __int64 valid; // [rsp+48h] [rbp-150h]
  unsigned __int64 v50; // [rsp+50h] [rbp-148h]
  unsigned __int64 v51; // [rsp+58h] [rbp-140h]
  unsigned __int64 v52; // [rsp+60h] [rbp-138h]
  __int64 v53; // [rsp+68h] [rbp-130h]
  __int64 v54; // [rsp+70h] [rbp-128h]
  __int64 v55; // [rsp+80h] [rbp-118h]
  _QWORD v56[24]; // [rsp+90h] [rbp-108h] BYREF

  v53 = a1;
  v55 = a1;
  memset(v56, 0, 0xB8uLL);
  v5 = 1;
  LODWORD(v56[0]) = 1;
  WORD2(v56[0]) = 0;
  v56[2] = 0LL;
  LODWORD(v56[1]) = 20;
  v56[3] = 0LL;
  v43 = 0;
  v45 = 0LL;
  v6 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
  v7 = ((((unsigned __int64)*(unsigned int *)(a3 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v50 = v7;
  v8 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v52 = v8;
  v9 = a2 + 1664;
  v54 = v9;
  v42 = MiLockWorkingSetShared(v9, 0xFFFFF6FB40000000uLL, v10, v11);
  while ( v7 <= v8 )
  {
    v44 = v7;
    v51 = 0LL;
    valid = MiLockLowestValidPageTable(v9, v7, &v44);
    v12 = v8;
    if ( v44 != v7 )
      v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v13 = MI_READ_PTE_LOCK_FREE(v44);
      v14 = v13;
      v46 = v13;
      if ( v13 )
        break;
      v45 = 0LL;
      v15 = (volatile __int64 *)(v44 + 8);
      v44 = (unsigned __int64)v15;
      if ( ((unsigned __int16)v15 & 0xFFF) == 0 )
        break;
    }
    while ( (unsigned __int64)v15 <= v12 );
    if ( v13 )
    {
      if ( (v13 & 1) != 0 && (v13 & 0x80u) != 0LL )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v46)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v17 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF));
            v18 = v14 | 0x20;
            if ( (v17 & 0x20) == 0 )
              v18 = v14;
            v14 = v18;
            if ( (v17 & 0x42) != 0 )
              v14 = v18 | 0x42;
          }
        }
        v19 = (v14 >> 12) & 0xFFFFFFFFFLL;
        v20 = 1;
        v21 = 512LL;
        v22 = (__int64)(((__int64)((v44 << 25) - v51) >> 16 << 25) - v51) >> 16;
        while ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v22 = (__int64)((v22 << 25) - v51) >> 16;
          v21 <<= 9;
          ++v20;
        }
        MiRewritePteWithLockBit(v9, (volatile __int64 *)v44, ZeroPte);
        v46 &= 0xCFFFFFFFFFFFFFFFuLL;
        MiInsertTbFlushEntry((__int64)v56, (__int64)(v7 << 25) >> 16 << 25 >> 16, 1LL, v20);
        MiFlushTbList((__int64)v56, v23);
        v24 = v45 & -(__int64)(v45 < v21);
        v45 = v24;
        v48 = 0;
        v25 = 48 * (v19 + v21) - 0x58000000000LL;
        v51 = v25;
        v26 = 48 * (v24 + v19) - 0x58000000000LL;
        v27 = valid;
        while ( v26 < v25 )
        {
          v45 = ++v24;
          if ( *(_WORD *)(v26 + 32) == 2 )
          {
            v28 = v53;
            if ( (int)MiScrubPage(v53, v26, 0LL, 1LL) < 0 )
              MiMakePageBad(v26, 1LL, v29, v30);
            if ( MiWorkingSetIsContended(v9)
              || (unsigned int)MiPageTableLockIsContended(v9, v27)
              || KeShouldYieldProcessor() )
            {
              v48 = 1;
              break;
            }
            if ( MiScrubInterrupted(v28) )
            {
              v43 = 1;
              break;
            }
            v25 = v51;
            v24 = v45;
          }
          v26 += 48LL;
        }
        v31 = v46 | 0x20;
        v46 = v31;
        v47 = 0;
        v32 = v31;
        if ( MiPteInShadowRange(v44) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v47 = 1;
            if ( HIBYTE(word_140C4E008) )
              goto LABEL_46;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_46;
          }
          if ( (v31 & 1) != 0 )
            v32 = v31 | 0x8000000000000000uLL;
        }
LABEL_46:
        v34 = (volatile __int64 *)v44;
        *(_QWORD *)v44 = v32;
        if ( v47 )
          MiWritePteShadow((__int64)v34, v32, v33);
        MiUnlockPageTableInternal(v9, valid);
        if ( v26 == v51 )
        {
          v7 += 8 * (v21 >> 9);
          v50 = v7;
          v45 = 0LL;
        }
        if ( v43 == 1 )
        {
          v5 = 0;
          break;
        }
        v8 = v52;
        v5 = 1;
        if ( v48 )
        {
          MiUnlockWorkingSetShared(v9, v42);
          MiLockWorkingSetShared(v9, v36, v37, v38);
        }
      }
      else
      {
        MiUnlockPageTableInternal(v9, valid);
        MiUnlockWorkingSetShared(v9, v42);
        v5 = 1;
        MiLockWorkingSetShared(v9, v39, v40, v41);
      }
    }
    else
    {
      MiUnlockPageTableInternal(v9, valid);
      v7 = ((MiGetLeafVa(v44) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v50 = v7;
      v5 = 1;
    }
  }
  MiUnlockWorkingSetShared(v9, v42);
  return v5;
}
