__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, unsigned __int64 a5)
{
  int v5; // eax
  int v7; // ecx
  unsigned int v8; // r14d
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  char v14; // cl
  __int64 v15; // rdx
  char v16; // al
  char v17; // cl
  unsigned __int64 v18; // r10
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // ecx
  int v23; // r9d
  __int64 v24; // r13
  unsigned __int64 v25; // r12
  int v26; // edx
  PSLIST_ENTRY v27; // rax
  unsigned int v28; // r15d
  union _SLIST_HEADER *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // r12
  _QWORD *v32; // r15
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  int v37; // ecx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  _DWORD *v44; // rax
  __int16 v45; // ax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  bool v49; // r8
  int v50; // ecx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // edx
  unsigned int v54; // r9d
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  char v61; // al
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rcx
  int v64; // ecx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  int v67; // r8d
  int v68; // ecx
  unsigned __int64 v69; // [rsp+30h] [rbp-68h]
  unsigned int v70; // [rsp+40h] [rbp-58h]
  __int128 v71; // [rsp+48h] [rbp-50h] BYREF
  __int64 v72; // [rsp+58h] [rbp-40h]
  unsigned int v73; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v74; // [rsp+B8h] [rbp+20h] BYREF

  v74 = a4;
  v5 = *(_DWORD *)(a1 + 20) & 0x11000001;
  v7 = *(_DWORD *)(a1 + 220);
  v8 = v5 | a3;
  if ( v7 && v7 == KeGetCurrentThread()[1].CurrentRunTime )
    v8 |= 1u;
  if ( (v8 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v60 = RtlpHpExtrasGet(a1, a2, v8, 0LL);
      a4 = v60;
      if ( (unsigned __int64)(v60 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v61 = *(_BYTE *)(v60 + 2);
        if ( (v61 & 0xF) != 0
          && ((v61 & 0xF) != 1
           || (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, unsigned __int64))CLFS_LSN_NULL_EXT)(
                     a1,
                     a2,
                     3LL,
                     a4 + 16) < 0) )
        {
          return 0;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v8, a4) == -1 )
  {
    v10 = 0;
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    return v10;
  }
  v10 = 0;
  if ( (_WORD)a2 )
  {
    v11 = 0;
    goto LABEL_9;
  }
  v59 = RtlCSparseBitmapBitmaskRead((__int64)&unk_140C70D90, 2 * ((a2 - qword_140C70D88) >> 20));
  if ( v59 )
  {
    v11 = v59 - 1;
    if ( v11 != 2 )
    {
LABEL_9:
      v12 = 192LL * v11 + a1 + 320;
      v13 = a2 & *(_QWORD *)v12;
      if ( (v12 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v13 + 0x10) ^ v13) == 0xA2E64EADA2E64EADuLL )
      {
        v14 = *(_BYTE *)(v12 + 8);
        v15 = v13 + 32 * ((unsigned __int64)(unsigned int)(a2 - v13) >> v14);
        if ( v15 )
        {
          v16 = *(_BYTE *)(v15 + 24);
          if ( (v16 & 1) != 0 )
          {
            if ( (v16 & 2) != 0 )
            {
              if ( (v16 & 0xCu) >= 8 || (((1 << v14) - 1) & a2) == 0 )
              {
LABEL_16:
                v18 = (v15 & *(_QWORD *)v12) + ((v15 - (v15 & *(_QWORD *)v12)) >> 5 << *(_BYTE *)(v12 + 8));
                if ( a2 <= v18 )
                {
                  RtlpHpSegPageRangeShrink(v12, v15, v13, v8);
                  return 1;
                }
                if ( (*(_BYTE *)(v15 + 24) & 0xC) == 8 )
                  return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v12 + 24), v18, a2, v8);
                v24 = *(_QWORD *)(v12 + 32);
                v25 = a2 - 16;
                v26 = *(_DWORD *)(v24 + 176);
                if ( (v26 & 1) != 0 && (a2 & 0xFFF) == 0 )
                  v25 = a2 - 32;
                if ( v18 )
                  goto LABEL_30;
                v62 = v25;
                v63 = (*(_QWORD *)v25 ^ RtlpHpHeapGlobals ^ v25) >> 32;
                if ( (v63 & 0xFF0000) != 0 )
                {
                  v64 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v25 + 8) ^ v25);
LABEL_109:
                  v18 = (v62 - (unsigned int)(v64 << 12)) & 0xFFFFFFFFFFFFF000uLL;
LABEL_30:
                  if ( (((unsigned __int16)(*(_WORD *)(v18 + 32) ^ *(_WORD *)(v18 + 34)) ^ 0x2BED) & 0x7FFF) == 0 )
                  {
                    if ( ((RtlpHpHeapGlobals ^ v25 ^ *(_QWORD *)v25) & 0xFF000000000000LL) != 0 )
                    {
                      v27 = 0LL;
                      v28 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v25 ^ (unsigned int)*(_QWORD *)v25) >> 16))
                          - 16;
                      v70 = v28;
                      if ( (v26 & 4) != 0 && v28 < 0x1000 )
                      {
                        v29 = (union _SLIST_HEADER *)(v24 + 64);
                        if ( *(_WORD *)(v24 + 64) < 0x20u )
                        {
                          RtlpInterlockedPushEntrySList(v29, (PSLIST_ENTRY)(v25 + 16));
LABEL_36:
                          v10 = 1;
                          v30 = *(_QWORD *)(v12 + 24);
                          if ( v28 <= (unsigned int)*(unsigned __int16 *)(v30 + 60) - 16 )
                            RtlpHpLfhBucketUpdateStats(v30, v28, 0);
                          return v10;
                        }
                        v27 = RtlpInterlockedFlushSList(v29);
                      }
                      *(_QWORD *)(v25 + 16) = v27;
                      v31 = (_QWORD *)(v25 + 16);
                      v72 = 0LL;
                      v71 = 0LL;
                      if ( (v8 & 1) == 0 )
                        RtlpHpAcquireQueuedLockExclusive(v24, *(unsigned int *)(v24 + 8), &v71);
                      v32 = v31;
                      if ( !v31 )
                      {
LABEL_71:
                        if ( (v8 & 1) == 0 )
                          RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v24 + 8), (__int64)&v71);
                        v28 = v70;
                        goto LABEL_36;
                      }
                      while ( 1 )
                      {
                        v33 = *(v32 - 2);
                        v34 = (unsigned __int64)(v32 - 2);
                        v32 = (_QWORD *)*v32;
                        v35 = v34;
                        v36 = (RtlpHpHeapGlobals ^ v34 ^ v33) >> 32;
                        if ( (v36 & 0xFF0000) != 0 )
                        {
                          v37 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v34 + 8) ^ v34);
                          goto LABEL_44;
                        }
                        if ( !(_WORD)v36 )
                          goto LABEL_116;
                        v35 = v34 - 16LL * (unsigned __int16)v36;
                        v66 = (*(_QWORD *)v35 ^ RtlpHpHeapGlobals ^ v35) >> 32;
                        if ( (v66 & 0xFF0000) != 0 )
                        {
                          v37 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v35 + 8) ^ v35);
                          goto LABEL_44;
                        }
                        if ( (_WORD)v66 )
                        {
                          v35 -= 16LL * (unsigned __int16)v66;
                          v37 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v35 + 8) ^ v35);
                        }
                        else
                        {
LABEL_116:
                          v37 = 0;
                        }
LABEL_44:
                        v38 = (v35 - (unsigned int)(v37 << 12)) & 0xFFFFFFFFFFFFF000uLL;
                        if ( (((unsigned __int16)(*(_WORD *)(v38 + 32) ^ *(_WORD *)(v38 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
                        {
                          v67 = v38;
                          v68 = 18;
                        }
                        else
                        {
                          if ( ((RtlpHpHeapGlobals ^ v34 ^ v33) & 0xFF000000000000LL) != 0 )
                          {
                            v73 = 0;
                            for ( LODWORD(v74) = 0; ; LODWORD(v74) = v58 )
                            {
                              v39 = RtlpHpVsChunkCoalesce(v24, v38, v34, &v73);
                              v40 = v73;
                              v34 = v39;
                              if ( v73 == *(unsigned __int16 *)(v38 + 32) )
                              {
                                RtlpHpVsSubsegmentCleanup(v24, v38);
                                if ( v38 )
                                {
                                  if ( (v8 & 1) != 0 )
                                  {
                                    RtlpHpVsSubsegmentFree(v24, v38, v8);
                                  }
                                  else
                                  {
                                    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v24 + 8), (__int64)&v71);
                                    RtlpHpVsSubsegmentFree(v24, v38, v8);
                                    RtlpHpAcquireQueuedLockExclusive(v24, *(unsigned int *)(v24 + 8), &v71);
                                  }
                                }
                                goto LABEL_70;
                              }
                              if ( v73 <= (unsigned int)v74 )
                                break;
                              v41 = v39 - v38;
                              v42 = (v39 - v38 + 4127) & 0xFFFFF000;
                              v43 = (v39
                                   + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v39) ^ *(unsigned __int16 *)(v39 + 2))
                                   - v38) & 0xFFFFF000;
                              if ( v42 >= v43 )
                                break;
                              v53 = v43 - v42;
                              v54 = v42 >> 12;
                              v40 = (unsigned __int8)v54;
                              v55 = *(_QWORD *)(v38 + 16) & (-1LL << v54) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v43 - 1) >> 12)));
                              v69 = v55;
                              if ( v53 < 0x1000 )
                                break;
                              if ( !v55 )
                                break;
                              v56 = v55 - ((v55 >> 1) & 0x5555555555555555LL);
                              v40 = v56 & 0x3333333333333333LL;
                              v57 = (0x101010101010101LL
                                   * (((v56 & 0x3333333333333333LL)
                                     + ((v56 >> 2) & 0x3333333333333333LL)
                                     + (((v56 & 0x3333333333333333LL) + ((v56 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                              a5 = v57;
                              if ( *(__int16 *)(v38 + 34) < 0 )
                                break;
                              if ( (*(_DWORD *)(v24 + 176) & 2) == 0 )
                              {
                                v40 = *(_QWORD *)(v24 + 48) >> 7;
                                if ( v40 <= 8 )
                                  v40 = 8LL;
                                if ( *(_QWORD *)(v24 + 56) + (unsigned __int64)(unsigned int)v57 <= v40 )
                                  break;
                              }
                              v74 = 0x1000000000000LL;
                              *(_BYTE *)(v34 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v34) ^ 1;
                              *(_DWORD *)(v34 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v34 ^ (v41 >> 12)) | 0x200;
                              if ( (v8 & 1) != 0 )
                              {
                                RtlpHpVsSubsegmentCommitPages(v24, v38, v55, v57, 0);
                              }
                              else
                              {
                                RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v24 + 8), (__int64)&v71);
                                RtlpHpVsSubsegmentCommitPages(v24, v38, v69, a5, 0);
                                RtlpHpAcquireQueuedLockExclusive(v24, *(unsigned int *)(v24 + 8), &v71);
                              }
                              v58 = v73;
                              *(_DWORD *)(v34 + 8) &= ~0x200u;
                            }
                            if ( (*(_DWORD *)(v24 + 176) & 1) != 0 && ((v34 + 32) & 0xFFF) != 0 )
                            {
                              v44 = (_DWORD *)RtlpHpVsChunkAlignSplit(v40, v38, v34);
                              if ( v44 )
                                RtlpHpVsFreeChunkInsert((_QWORD *)v24, v38, v44);
                            }
                            v73 = 0;
                            v74 = 0LL;
                            v45 = RtlpHpVsChunkComputeCost((_DWORD *)v34, v38, &v73, &v74);
                            v46 = ((v74 - ((v74 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v74 - ((v74 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
                            *(_QWORD *)(v24 + 56) += (unsigned int)((0x101010101010101LL
                                                                   * ((v46 + (v46 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
                            *(_WORD *)v34 = RtlpHpHeapGlobals ^ v34 ^ (v73
                                                                     + v45
                                                                     - ((0x101010101010101LL
                                                                       * ((v46 + (v46 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
                            v47 = *(_QWORD *)(v24 + 24);
                            if ( (v47 & 1) == 0 )
                            {
                              v48 = *(_QWORD *)(v24 + 16);
                              goto LABEL_56;
                            }
                            v52 = *(_QWORD *)(v24 + 16);
                            if ( v52 )
                            {
                              v48 = v52 ^ (v24 + 16);
LABEL_56:
                              v49 = 0;
                              v50 = v47 & 1;
                              if ( !v48 )
                                goto LABEL_69;
                              while ( 1 )
                              {
                                if ( (*(_DWORD *)v34 ^ (unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v34) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v48 - 8) ^ ((_DWORD)v48 - 8)) )
                                {
                                  v51 = *(_QWORD *)(v48 + 8);
                                  if ( v50 )
                                  {
                                    if ( !v51 )
                                      goto LABEL_67;
                                    v51 ^= v48;
                                  }
                                  if ( !v51 )
                                  {
LABEL_67:
                                    v49 = 1;
                                    goto LABEL_69;
                                  }
                                }
                                else
                                {
                                  v51 = *(_QWORD *)v48;
                                  if ( v50 )
                                  {
                                    if ( !v51 )
                                      goto LABEL_69;
                                    v51 ^= v48;
                                  }
                                  if ( !v51 )
                                    goto LABEL_69;
                                }
                                v48 = v51;
                              }
                            }
                            v48 = 0LL;
                            v49 = 0;
LABEL_69:
                            RtlRbInsertNodeEx((unsigned __int64 *)(v24 + 16), v48, v49, v34 + 8);
                            goto LABEL_70;
                          }
                          v67 = v34;
                          v68 = 8;
                        }
                        RtlpLogHeapFailure(v68, *(_DWORD *)(v24 + 128) ^ v24, v67, 0, 0LL, 0LL);
LABEL_70:
                        if ( !v32 )
                          goto LABEL_71;
                      }
                    }
                    v23 = v25;
                    LODWORD(v20) = *(_DWORD *)(v24 + 128) ^ v24;
                    v21 = a2;
                    v22 = 8;
LABEL_22:
                    RtlpLogHeapFailure(v22, v20, v21, v23, 0LL, 0LL);
                    return v10;
                  }
                  v21 = v18;
                  LODWORD(v20) = *(_DWORD *)(v24 + 128) ^ v24;
                  v22 = 18;
LABEL_21:
                  v23 = 0;
                  goto LABEL_22;
                }
                if ( (_WORD)v63 )
                {
                  v62 = v25 - 16LL * (unsigned __int16)v63;
                  v65 = (RtlpHpHeapGlobals ^ *(_QWORD *)v62 ^ v62) >> 32;
                  if ( (v65 & 0xFF0000) != 0 )
                  {
                    v64 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v62 + 8) ^ v62);
                    goto LABEL_109;
                  }
                  if ( (_WORD)v65 )
                  {
                    v62 -= 16LL * (unsigned __int16)v65;
                    v64 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v62 + 8) ^ v62);
                    goto LABEL_109;
                  }
                }
                v64 = 0;
                goto LABEL_109;
              }
            }
            else
            {
              v15 -= 32LL * *(unsigned __int8 *)(v15 + 31);
              v17 = *(_BYTE *)(v15 + 24);
              if ( (v17 & 3) == 3 && (v17 & 0xCu) >= 8 && v15 )
                goto LABEL_16;
            }
          }
        }
      }
      v20 = *(_QWORD *)(v12 + 56);
      v21 = a2;
      v22 = 9;
      goto LABEL_21;
    }
  }
  if ( !RtlpHpLargeFree((__int128 *)a1, a2, v8) )
    return v10;
  return 1LL;
}
