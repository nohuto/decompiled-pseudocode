__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  unsigned int v9; // r15d
  unsigned int v11; // ebx
  __int64 v12; // r9
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r15d
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdi
  int v29; // edx
  unsigned __int64 v30; // rdx
  unsigned int i; // r10d
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned int v34; // r12d
  __int64 v35; // r15
  unsigned __int16 v36; // cx
  unsigned __int64 v37; // r8
  __int64 v38; // r15
  unsigned __int64 v39; // r8
  __int64 v40; // r15
  unsigned int v41; // r9d
  unsigned int v42; // r8d
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // r12
  __int64 v45; // rdx
  unsigned int v46; // r8d
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r10
  unsigned int v49; // eax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // r10
  unsigned __int64 v54; // rdx
  int v55; // r9d
  unsigned __int8 v56; // al
  unsigned __int64 v57; // rax
  bool v59; // zf
  int v60; // eax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r12
  volatile LONG *v65; // rcx
  unsigned __int64 v66; // r15
  KIRQL v67; // al
  int v68; // r12d
  KIRQL v69; // r15
  __int16 v70; // ax
  __int16 v71; // r8
  __int64 v72; // r8
  _QWORD *v73; // rax
  unsigned __int8 v74; // r10
  int v75; // r8d
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned int v79; // edx
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rdx
  struct _KTHREAD *v85; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v90; // eax
  int v91; // [rsp+30h] [rbp-68h]
  KIRQL v92; // [rsp+38h] [rbp-60h]
  __int64 v93; // [rsp+40h] [rbp-58h]
  KIRQL v94; // [rsp+58h] [rbp-40h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v96; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v97; // [rsp+A8h] [rbp+10h]
  unsigned int v98; // [rsp+B0h] [rbp+18h]
  unsigned int v99; // [rsp+B8h] [rbp+20h] BYREF

  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode(a1 + 16, a3 + 8);
  v11 = 0;
  v12 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v13 = (a3 + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16) - a2) & 0xFFFFF000;
  v14 = ((16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
        + (unsigned __int64)(a3 & 0xFFF)
        + 4095) >> 12)
      - (((unsigned __int64)(16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)) + 4095) >> 12);
  v99 = a3 - a2;
  v15 = (a3 - a2 + 4127) & 0xFFFFF000;
  v16 = v13 - v15;
  if ( v15 >= v13 )
    v16 = 0;
  *(_QWORD *)(a1 + 56) -= (v16 >> 12) + v14 - (unsigned __int16)v12;
  v17 = v9 - a4;
  if ( v17 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v18 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v19 = 16 * v18;
    if ( (unsigned int)(16 * v18) < 0x20 )
    {
      a4 += v18;
      v17 -= v18;
    }
    else if ( (v19 & 0xFFFFFFC0) == 0 && v19 != 32 )
    {
      ++a4;
      --v17;
    }
  }
  if ( 16 * v17 < 0x20 )
    a4 += v17;
  v96 = 0x1000000000000LL;
  v20 = 0;
  if ( 16 * v17 >= 0x20 )
    v20 = v17;
  v21 = v20;
  v98 = v20;
  v22 = 16 * a4 + 32;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  v23 = v99;
  v24 = v99 >> 12;
  v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v99 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = v25;
  if ( !v20 )
    v22 = 16 * a4;
  v26 = (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v23 - 1 + v22) >> 12))) & (-1LL << v24);
  v27 = (*(_QWORD *)(a2 + 16) ^ v26) & v26;
  if ( v27 )
  {
    v59 = (a5 & 1) == 0;
    v60 = a5 & 1;
    *(_DWORD *)(a3 + 8) = v25 | 0x200;
    v91 = v60;
    if ( v59 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
    v61 = ((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanForward64(&v62, v27);
    _BitScanReverse64(&v63, v27);
    v99 = v62;
    LODWORD(v96) = v63 - v62 + 1;
    v64 = a2 + (unsigned int)((_DWORD)v62 << 12);
    LODWORD(v97) = (_DWORD)v96 << 12;
    v65 = (volatile LONG *)(a2 + 24);
    v66 = (0x101010101010101LL * ((v61 + (v61 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v93 = ((1LL << v96) - 1) << v62;
    if ( *(_DWORD *)(a1 + 8) )
    {
      v67 = ExAcquireSpinLockExclusive(v65);
      v94 = v67;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v94 = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v65, 0LL);
      v67 = 0;
    }
    v92 = v67;
    v68 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            *(_QWORD *)(a1 + 128) ^ a1,
            v64,
            (unsigned int)v97);
    if ( v68 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= v93;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v66);
      v68 = 0;
      v92 = v94;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 24, retaddr);
      else
        *(_DWORD *)(a2 + 24) = 0;
      v69 = v92;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v92 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v69 = v94;
          v90 = ~(unsigned __int16)(-1LL << (v94 + 1));
          v59 = (v90 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v90;
          if ( v59 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v69);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24));
      KeAbPostRelease(a2 + 24);
      v85 = KeGetCurrentThread();
      v59 = v85->SpecialApcDisable++ == -1;
      if ( v59 && ($C71981A45BEB2B45F82C232A7085991E *)v85->ApcState.ApcListHead[0].Flink != &v85->152 )
        KiCheckForKernelApcDelivery();
    }
    v21 = v98;
    if ( v68 < 0 )
    {
      v21 = v98 + a4;
      a4 = 0;
    }
    if ( !v91 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ a4 ^ WORD1(a3);
  if ( v21 )
  {
    v28 = 16LL * a4 + a3;
    v96 = 0LL;
    if ( a4 )
      LOWORD(v29) = a4;
    else
      v29 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v28) ^ HIDWORD(v28);
    LODWORD(v96) = (v21 << 16) | (unsigned __int16)v96;
    HIDWORD(v96) = (unsigned __int16)v29 | 0x10000;
    *(_QWORD *)v28 = v96 ^ RtlpHpHeapGlobals ^ v28;
    v30 = v28 + 16LL * v21;
    *(_DWORD *)(v28 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v28 ^ ((unsigned int)(v28 - a2) >> 12));
    if ( v30 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      LODWORD(v96) = 0;
      HIDWORD(v96) = (unsigned __int16)v21;
      *(_WORD *)(v30 + 4) = WORD2(v30) ^ WORD2(RtlpHpHeapGlobals) ^ v21;
    }
    for ( i = 0; ; i = v34 )
    {
      v32 = a2 + 48;
      v99 = i;
      v33 = (RtlpHpHeapGlobals ^ *(_QWORD *)v28 ^ v28) >> 32;
      v34 = ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v28 ^ (unsigned int)v28) >> 16;
      LODWORD(v96) = v34;
      *(_BYTE *)(v28 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v28);
      if ( (_WORD)v33 )
      {
        v97 = v28 - 16LL * (unsigned __int16)v33;
        v35 = RtlpHpHeapGlobals ^ *(_QWORD *)v97 ^ v97;
        if ( (v35 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v28 - 16LL * (unsigned __int16)v33, v32);
          v28 = v97;
          v32 = a2 + 48;
          i = v99;
          v34 += WORD1(v35);
        }
      }
      v36 = *(_WORD *)(a2 + 32);
      v37 = v28 + 16LL * v34;
      if ( v37 < v32 + 16 * (unsigned __int64)v36 )
      {
        v38 = RtlpHpHeapGlobals ^ *(_QWORD *)v37 ^ v37;
        if ( (v38 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v37, v32);
          v36 = *(_WORD *)(a2 + 32);
          v32 = a2 + 48;
          i = v99;
          v34 += WORD1(v38);
        }
      }
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v39 = v28 + 16LL * v34;
        if ( v39 < v32 + 16 * (unsigned __int64)v36 )
        {
          v40 = RtlpHpHeapGlobals ^ *(_QWORD *)v39 ^ v39;
          if ( (v40 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(a1, a2, v39, v32);
            i = v99;
            v32 = a2 + 48;
            v34 += WORD1(v40);
          }
        }
      }
      if ( (_DWORD)v96 != v34 )
      {
        v84 = v28 + 16LL * v34;
        *(_WORD *)(v28 + 2) = WORD1(RtlpHpHeapGlobals) ^ v34 ^ WORD1(v28);
        if ( v84 < v32 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
        {
          LODWORD(v96) = 0;
          HIDWORD(v96) = (unsigned __int16)v34;
          *(_WORD *)(v84 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v84) ^ v34;
        }
      }
      if ( v34 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2);
        return a4;
      }
      if ( v34 <= i )
        break;
      v41 = (v28 - a2 + 4127) & 0xFFFFF000;
      v42 = (v28 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) - a2) & 0xFFFFF000;
      if ( v41 >= v42 )
        break;
      v81 = *(_QWORD *)(a2 + 16) & (-1LL << (v41 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v42 - 1) >> 12)));
      if ( v42 - v41 < 0x1000 )
        break;
      if ( !v81 )
        break;
      v82 = (0x101010101010101LL
           * ((((v81 - ((v81 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v81 - ((v81 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v81 - ((v81 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v81 - ((v81 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v97 = v82;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v83 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v83 <= 8 )
          v83 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v82 <= v83 )
          break;
      }
      v96 = 0x1000000000000LL;
      *(_BYTE *)(v28 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v28) ^ 1;
      v59 = (a5 & 1) == 0;
      *(_DWORD *)(v28 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v28 ^ ((unsigned int)(v28 - a2) >> 12)) | 0x200;
      if ( v59 )
      {
        RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
        RtlpHpVsSubsegmentCommitPages(a1, a2, v81, v97, 0);
        RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
      }
      else
      {
        RtlpHpVsSubsegmentCommitPages(a1, a2, v81, v82, 0);
      }
      *(_DWORD *)(v28 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 || ((v28 + 32) & 0xFFF) == 0 )
      goto LABEL_39;
    if ( ((v28 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v28 < 16
                                                      * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) )
    {
      v43 = ((v28 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
      v78 = (__int64)(v43 - v28) >> 4;
      v79 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) - v78;
      *(_WORD *)(v28 + 2) = WORD1(RtlpHpHeapGlobals) ^ v78 ^ WORD1(v28);
      *(_OWORD *)v43 = 0LL;
      *(_OWORD *)(v43 + 16) = 0LL;
      *(_WORD *)(v43 + 2) = v79;
      v80 = v43 + 16LL * v79;
      *(_WORD *)(v43 + 4) = v78;
      *(_QWORD *)v43 ^= RtlpHpHeapGlobals ^ v43;
      if ( v80 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      {
        LODWORD(v96) = 0;
        HIDWORD(v96) = (unsigned __int16)v79;
        *(_WORD *)(v80 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v80) ^ v79;
      }
    }
    else
    {
      v43 = 0LL;
    }
    if ( !v43 )
    {
LABEL_39:
      v44 = a1 + 16;
      goto LABEL_40;
    }
    v99 = 0;
    v96 = 0LL;
    v70 = RtlpHpVsChunkComputeCost(v43, a2, &v99, &v96);
    v44 = a1 + 16;
    v71 = v70
        - ((0x101010101010101LL
          * ((((v96 - ((v96 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v96 - ((v96 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
            + ((((v96 - ((v96 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v96 - ((v96 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * ((((v96 - ((v96 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                            + (((v96 - ((v96 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                            + ((((v96 - ((v96 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                              + (((v96 - ((v96 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v43 = RtlpHpHeapGlobals ^ v43 ^ (v99 + v71);
    v72 = *(_QWORD *)(a1 + 24);
    if ( (v72 & 1) == 0 )
    {
      v73 = *(_QWORD **)v44;
      goto LABEL_81;
    }
    v76 = *(_QWORD *)v44;
    if ( *(_QWORD *)v44 )
    {
      v73 = (_QWORD *)(v76 ^ v44);
LABEL_81:
      v74 = 0;
      v75 = v72 & 1;
      v76 = (unsigned __int64)v73;
      if ( !v73 )
        goto LABEL_106;
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v43 ^ (unsigned int)v43) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v76 - 8) ^ ((_DWORD)v76 - 8)) )
        {
          v77 = *(_QWORD *)(v76 + 8);
          if ( v75 )
          {
            if ( !v77 )
              goto LABEL_92;
            v77 ^= v76;
          }
          if ( !v77 )
          {
LABEL_92:
            v74 = 1;
            goto LABEL_106;
          }
        }
        else
        {
          v77 = *(_QWORD *)v76;
          if ( v75 )
          {
            if ( !v77 )
              goto LABEL_106;
            v77 ^= v76;
          }
          if ( !v77 )
            goto LABEL_106;
        }
        v76 = v77;
      }
    }
    v74 = 0;
LABEL_106:
    RtlRbInsertNodeEx(a1 + 16, v76, v74, v43 + 8);
LABEL_40:
    v45 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2));
    v46 = (v28 - a2 + 4127) & 0xFFFFF000;
    v47 = ((v28 & 0xFFF) + v45 + 4095) >> 12;
    v48 = (unsigned __int64)(v45 + 4095) >> 12;
    v49 = (v45 + v28 - a2) & 0xFFFFF000;
    if ( v46 < v49 )
    {
      v11 = v49 - v46;
      v50 = *(_QWORD *)(a2 + 16) & (-1LL << (v46 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v49 - 1) >> 12)));
    }
    else
    {
      v50 = 0LL;
    }
    v51 = v50 - ((v50 >> 1) & 0x5555555555555555LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * (((v51 & 0x3333333333333333LL)
                                            + ((v51 >> 2) & 0x3333333333333333LL)
                                            + (((v51 & 0x3333333333333333LL) + ((v51 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v28 = RtlpHpHeapGlobals ^ v28 ^ (v47
                                             + (v11 >> 12)
                                             - v48
                                             - ((0x101010101010101LL
                                               * (((v51 & 0x3333333333333333LL)
                                                 + ((v51 >> 2) & 0x3333333333333333LL)
                                                 + (((v51 & 0x3333333333333333LL) + ((v51 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v52 = *(_QWORD *)(v44 + 8);
    if ( (v52 & 1) == 0 )
    {
      v53 = *(_QWORD **)v44;
      goto LABEL_44;
    }
    v54 = *(_QWORD *)v44;
    if ( *(_QWORD *)v44 )
    {
      v53 = (_QWORD *)(v54 ^ v44);
LABEL_44:
      v54 = (unsigned __int64)v53;
      v55 = v52 & 1;
      v56 = 0;
      if ( !v53 )
        goto LABEL_57;
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v28 ^ (unsigned int)v28) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v54 - 8) ^ ((_DWORD)v54 - 8)) )
        {
          v57 = *(_QWORD *)(v54 + 8);
          if ( v55 )
          {
            if ( !v57 )
              goto LABEL_55;
            v57 ^= v54;
          }
          if ( !v57 )
          {
LABEL_55:
            v56 = 1;
            goto LABEL_57;
          }
        }
        else
        {
          v57 = *(_QWORD *)v54;
          if ( v55 )
          {
            if ( !v57 )
              break;
            v57 ^= v54;
          }
          if ( !v57 )
            break;
        }
        v54 = v57;
      }
    }
    v56 = 0;
LABEL_57:
    RtlRbInsertNodeEx(v44, v54, v56, v28 + 8);
  }
  return a4;
}
