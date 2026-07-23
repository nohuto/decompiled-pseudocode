/*
 * XREFs of RtlpHpVsChunkSplit @ 0x180029280
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180071EE8 (RtlpHpVsContextGrowInPlace.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x180004568 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkCoalesce @ 0x18002782C (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800662D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006EA28 (RtlpHpVsSubsegmentCommitPages.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010F720 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        __int64 SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  __int64 v7; // r13
  unsigned int v9; // r14d
  unsigned __int64 v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r14d
  unsigned int v18; // r9d
  unsigned int v19; // r11d
  unsigned int v20; // r14d
  unsigned int v21; // r12d
  int v22; // eax
  unsigned __int64 v23; // rdx
  char v24; // cl
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  int v27; // edx
  unsigned __int64 v28; // rdx
  unsigned int i; // esi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  unsigned int v33; // r14d
  unsigned int v34; // r8d
  __int64 v35; // rcx
  unsigned int v36; // r9d
  unsigned int v37; // r10d
  unsigned int v38; // r8d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  BOOLEAN v41; // al
  int v42; // r8d
  unsigned __int64 v43; // rax
  unsigned __int64 v45; // rax
  unsigned int v46; // edx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r12
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r14
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  int v58; // [rsp+30h] [rbp-58h]
  unsigned __int64 v59; // [rsp+90h] [rbp+8h]
  __int64 v60; // [rsp+90h] [rbp+8h]
  int v61; // [rsp+90h] [rbp+8h]
  int v62; // [rsp+90h] [rbp+8h]
  int v63; // [rsp+94h] [rbp+Ch]
  __int64 v64; // [rsp+98h] [rbp+10h]
  unsigned int v65; // [rsp+A0h] [rbp+18h]
  int v66; // [rsp+A0h] [rbp+18h]
  unsigned int v67; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a4;
  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(SRWLock + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = RtlpHpHeapGlobals ^ *(_DWORD *)a3 ^ a3;
  v13 = a3 - a2;
  v14 = 16 * HIWORD(v12);
  v15 = (a3 - a2 + 4127) & 0xFFFFF000;
  v16 = ((a3 + v14 - a2) & 0xFFFFF000) - v15;
  if ( v15 >= (((_DWORD)a3 + (_DWORD)v14 - (_DWORD)a2) & 0xFFFFF000) )
    v16 = 0;
  *(_QWORD *)(SRWLock + 56) -= (unsigned int)((v14 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                             + (v16 >> 12)
                             - (unsigned int)((unsigned __int64)(v14 + 4095) >> 12)
                             - (unsigned __int16)v12;
  v17 = v9 - v7;
  if ( v17 && (*(_BYTE *)(SRWLock + 176) & 1) != 0 )
  {
    v55 = (((a3 + 16 * v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16 * v7)) >> 4;
    v56 = 16 * v55;
    if ( (unsigned int)(16 * v55) >= 0x20 )
    {
      if ( (v56 & 0xFFFFFFC0) == 0 && v56 != 32 )
      {
        LODWORD(v7) = v7 + 1;
        --v17;
      }
    }
    else
    {
      LODWORD(v7) = v55 + v7;
      v17 -= v55;
    }
  }
  v18 = v17 + v7;
  v19 = 0;
  if ( 16 * v17 >= 0x20 )
  {
    v18 = v7;
    v19 = v17;
  }
  v65 = v18;
  v20 = v19;
  v21 = v18;
  LODWORD(v64) = v19;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ ((v63 & 0xFF00FFFF | 0x10000) >> 16);
  v67 = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ (v13 >> 12));
  *(_DWORD *)(a3 + 8) = v67;
  v22 = 16 * v18 + 32;
  if ( !v19 )
    v22 = 16 * v18;
  v23 = 0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v22 + v13 - 1) >> 12));
  v24 = a5;
  v25 = ((-1LL << (v13 >> 12)) & v23 ^ *(_QWORD *)(a2 + 16)) & (-1LL << (v13 >> 12)) & v23;
  v59 = v25;
  if ( v25 )
  {
    *(_DWORD *)(a3 + 8) = v67 | 0x200;
    v58 = v24 & 1;
    if ( (v24 & 1) == 0 )
    {
      v50 = a6;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      v25 = v59;
      *(_QWORD *)(v50 + 8) = 0LL;
    }
    _BitScanForward64((unsigned __int64 *)&v51, v25);
    _BitScanReverse64(&v52, v25);
    v53 = ((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v67 = v52 - v51 + 1;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    v62 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))(SRWLock ^ RtlpHpHeapGlobals ^ *(_QWORD *)(SRWLock + 152)))(
            SRWLock ^ *(_QWORD *)(SRWLock + 128),
            a2 + (unsigned int)((_DWORD)v51 << 12),
            v67 << 12);
    if ( v62 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= ((1LL << v67) - 1) << v51;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(SRWLock + 48),
        (0x101010101010101LL * ((v53 + (v53 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
      v62 = 0;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    v20 = v64;
    v21 = v65;
    if ( v62 < 0 )
    {
      v20 = v65 + v64;
      v21 = 0;
    }
    if ( !v58 )
    {
      v54 = a6;
      *(_QWORD *)a6 = 0LL;
      *(_QWORD *)(v54 + 16) = 0LL;
      *(_QWORD *)(v54 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v21 ^ WORD1(a3);
  if ( v20 )
  {
    v26 = a3 + 16LL * v21;
    if ( v21 )
      v27 = (unsigned __int16)v21;
    else
      v27 = (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v26 ^ v26) >> 32);
    HIDWORD(v60) = v27 & 0xFF00FFFF | 0x10000;
    LODWORD(v60) = v20 << 16;
    *(_QWORD *)v26 = v60 ^ RtlpHpHeapGlobals ^ v26;
    v28 = v26 + 16LL * v20;
    *(_DWORD *)(v26 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v26 ^ ((unsigned int)(v26 - a2) >> 12));
    if ( v28 < a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL) )
      *(_WORD *)(v28 + 4) = WORD2(v28) ^ WORD2(RtlpHpHeapGlobals) ^ v20;
    for ( i = 0; ; i = v33 )
    {
      v30 = RtlpHpVsChunkCoalesce(SRWLock, a2, v26, &v67);
      v33 = v67;
      v26 = v30;
      if ( v67 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup(SRWLock, a2);
        return v21;
      }
      if ( v67 <= i )
        break;
      v32 = ((_DWORD)v30 - (_DWORD)a2 + 4127) & 0xFFFFF000;
      v34 = (v30 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) - a2) & 0xFFFFF000;
      if ( (unsigned int)v32 >= v34 )
        break;
      v46 = v34 - v32;
      v32 = (unsigned int)v32 >> 12;
      v31 = (unsigned __int8)v32;
      v47 = *(_QWORD *)(a2 + 16) & (-1LL << v32) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                            - (unsigned __int8)((unsigned __int64)(v34 - 1) >> 12)));
      if ( v46 < 0x1000 )
        break;
      if ( !v47 )
        break;
      v31 = (0x101010101010101LL
           * ((((v47 - ((v47 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v47 - ((v47 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v47 - ((v47 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v47 - ((v47 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v66 = v31;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_BYTE *)(SRWLock + 176) & 2) == 0 )
      {
        v48 = *(_QWORD *)(SRWLock + 48) >> 7;
        if ( v48 <= 8 )
          v48 = 8LL;
        if ( *(_QWORD *)(SRWLock + 56) + (unsigned __int64)(unsigned int)v31 <= v48 )
          break;
      }
      HIDWORD(v64) = HIDWORD(v64) & 0xFF00FFFF | 0x10000;
      v64 ^= RtlpHpHeapGlobals ^ v30;
      *(_BYTE *)(v30 + 6) = BYTE6(v64);
      *(_DWORD *)(v30 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v30 ^ ((unsigned int)(v30 - a2) >> 12)) | 0x200;
      v61 = a5 & 1;
      if ( (a5 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
        LODWORD(v31) = v66;
        *(_QWORD *)(a6 + 8) = 0LL;
      }
      RtlpHpVsSubsegmentCommitPages(SRWLock, a2, v47, v31, 0);
      if ( !v61 )
      {
        v49 = a6;
        *(_QWORD *)a6 = 0LL;
        *(_QWORD *)(v49 + 16) = 0LL;
        *(_QWORD *)(v49 + 8) = SRWLock;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      }
      *(_DWORD *)(v26 + 8) &= ~0x200u;
    }
    if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 && ((v30 + 32) & 0xFFF) != 0 )
    {
      v57 = RtlpHpVsChunkAlignSplit(v31, a2, v30, v32);
      if ( v57 )
        RtlpHpVsFreeChunkInsert(SRWLock, a2, v57);
    }
    v35 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v26) ^ *(unsigned __int16 *)(v26 + 2));
    v36 = (v26 - a2 + 4127) & 0xFFFFF000;
    v37 = (v35 + v26 - a2) & 0xFFFFF000;
    if ( v36 < v37 )
    {
      v38 = v37 - v36;
      v39 = *(_QWORD *)(a2 + 16) & (-1LL << (v36 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v37 - 1) >> 12)));
    }
    else
    {
      v38 = 0;
      v39 = 0LL;
    }
    *(_QWORD *)(SRWLock + 56) += (unsigned int)((0x101010101010101LL
                                               * ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                 + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                 + ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                   + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v26 = RtlpHpHeapGlobals ^ v26 ^ (((v35 + (v26 & 0xFFF) + 4095) >> 12)
                                             - ((unsigned __int64)(v35 + 4095) >> 12)
                                             + (v38 >> 12)
                                             - ((0x101010101010101LL
                                               * ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                 + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                 + ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                   + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v40 = *(_QWORD *)(SRWLock + 24);
    if ( (v40 & 1) != 0 )
    {
      v45 = *(_QWORD *)(SRWLock + 16);
      if ( v45 )
        v11 = v45 ^ (SRWLock + 16);
    }
    else
    {
      v11 = *(_QWORD *)(SRWLock + 16);
    }
    v41 = 0;
    v42 = v40 & 1;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v26 ^ (unsigned int)v26) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v11 - 8) ^ ((_DWORD)v11 - 8)) )
        {
          v43 = *(_QWORD *)v11;
          if ( v42 )
          {
            if ( !v43 )
              goto LABEL_35;
            v43 ^= v11;
          }
          if ( !v43 )
          {
LABEL_35:
            v41 = 0;
            break;
          }
        }
        else
        {
          v43 = *(_QWORD *)(v11 + 8);
          if ( v42 )
          {
            if ( !v43 )
              goto LABEL_36;
            v43 ^= v11;
          }
          if ( !v43 )
          {
LABEL_36:
            v41 = 1;
            break;
          }
        }
        v11 = v43;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SRWLock + 16), (PRTL_BALANCED_NODE)v11, v41, (PRTL_BALANCED_NODE)(v26 + 8));
  }
  return v21;
}
