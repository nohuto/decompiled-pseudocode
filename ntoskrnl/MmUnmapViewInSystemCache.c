unsigned __int64 __fastcall MmUnmapViewInSystemCache(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        char a3)
{
  ULONG_PTR v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  ULONG_PTR SystemCacheReverseMap; // r10
  unsigned __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rax
  unsigned int *MmInternal; // rbx
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  ULONG_PTR v19; // r13
  size_t v20; // r8
  __int64 v21; // rbx
  unsigned __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  char v26; // cl
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rax
  ULONG_PTR v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // r13
  int v42; // r12d
  __int64 v43; // rbx
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // di
  ULONG_PTR v46; // rdx
  ULONG_PTR v47; // rsi
  unsigned __int8 v48; // cl
  __int64 v49; // rbx
  unsigned __int8 v50; // r13
  volatile LONG *v51; // rcx
  __int64 v52; // rbx
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned __int64 result; // rax
  __int64 v58; // rsi
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rax
  char WsleContents; // di
  unsigned __int64 v62; // rdx
  unsigned int v63; // eax
  bool v64; // zf
  _BYTE *v65; // rax
  __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rcx
  char v69; // al
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  int CanBatchHardFaultPages; // ecx
  char v73; // al
  _DWORD *v74; // r8
  __int64 v75; // rbx
  _DWORD *v76; // r8
  __int64 v77; // rbx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r10
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  char v85; // al
  char v86; // al
  char v87; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v91; // eax
  unsigned __int8 v92; // [rsp+30h] [rbp-D0h]
  int v93; // [rsp+34h] [rbp-CCh]
  int v94; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v95; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v96; // [rsp+40h] [rbp-C0h]
  int v97; // [rsp+48h] [rbp-B8h]
  int v98; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v99; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+60h] [rbp-A0h]
  __int64 v101; // [rsp+68h] [rbp-98h]
  unsigned __int64 v102; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v103; // [rsp+78h] [rbp-88h]
  ULONG_PTR v104; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  unsigned __int64 v106; // [rsp+90h] [rbp-70h]
  ULONG_PTR v107; // [rsp+98h] [rbp-68h]
  ULONG_PTR v108; // [rsp+A0h] [rbp-60h]
  __int64 v109; // [rsp+A8h] [rbp-58h]
  __int64 v110; // [rsp+B0h] [rbp-50h]
  _QWORD *v111; // [rsp+B8h] [rbp-48h]
  _QWORD v112[14]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v113; // [rsp+130h] [rbp+30h]
  __int128 v114; // [rsp+140h] [rbp+40h]
  unsigned __int64 v115; // [rsp+150h] [rbp+50h]
  __int64 v119; // [rsp+1C8h] [rbp+C8h] BYREF

  memset(v112, 0, 0x68uLL);
  LOBYTE(v119) = 0;
  v94 = a3 & 1;
  v6 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = (_QWORD *)v6;
  v107 = v6 + 512;
  v109 = 48 * MiGetContainingPageTable(v6, v7, v8) - 0x220000000000LL;
  v101 = MiSectionControlArea(BugCheckParameter4);
  v9 = *(_WORD *)(v101 + 60) & 0x3FF;
  v99 = *(_QWORD *)(v101 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v110 = *(_QWORD *)(qword_140C67048 + 8 * v9);
  v93 = 0;
  v97 = 0;
  v10 = v110 + 17344;
  v100 = 0LL;
  v96 = v110 + 17344;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3);
  v104 = SystemCacheReverseMap;
  v13 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v14 = 4;
  if ( (v13 & 1) == 0 )
    v14 = 2;
  v95 = v14;
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v13 & 1) == 0 )
    v15 = (_QWORD *)v13;
  v108 = (ULONG_PTR)v15;
  if ( *v15 != v11 )
    KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, BugCheckParameter3, BugCheckParameter4);
  v106 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v92 = MiLockWorkingSetShared(v10);
  MiLockPageTableInternal(v10, v106, 0);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v17 = *(_QWORD *)MmInternal;
  *(_DWORD *)(v17 + 8) = MmInternal[6];
  *(_DWORD *)(v17 + 12) = 0;
  *(_DWORD *)v17 = 0;
  *(_WORD *)(v17 + 4) = 0;
  *(_QWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 24) = 0LL;
  v18 = (_BYTE *)*((_QWORD *)MmInternal + 2);
  v19 = *((_QWORD *)MmInternal + 1);
  v20 = 8LL * MmInternal[6];
  BugCheckParameter2 = v19;
  v103 = v18;
  memset(v18, 0, v20);
  v21 = *(_QWORD *)MmInternal;
  v22 = BugCheckParameter3;
  v23 = 0LL;
  *(_BYTE *)(v21 + 4) |= 4u;
  while ( 1 )
  {
    v24 = 1LL;
    v25 = v22;
    if ( *(_DWORD *)v21 != 1 )
    {
      v26 = *(_BYTE *)(v21 + 4);
      if ( (v26 & 8) == 0 && v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v21 + 4) = v26 | 8;
    }
    v27 = *(unsigned int *)(v21 + 12);
    if ( (_DWORD)v27 && (*(_BYTE *)(v21 + 4) & 4) == 0 )
    {
      v28 = (unsigned int)(v27 - 1);
      v78 = *(_QWORD *)(v21 + 8 * v28 + 24);
      if ( (v78 & 0xC00) == 0 )
      {
        v79 = *(_QWORD *)(v21 + 8 * v28 + 24) & 0x3FFLL;
        if ( (v78 & 0xFFFFFFFFFFFFF000uLL) + ((v79 + 1) << 12) == v22 && v79 + 1 >= v79 && v79 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v21 + 16);
          *(_QWORD *)(v21 + 8 * v28 + 24) = ((unsigned __int16)v78 ^ (unsigned __int16)(v78 + 1)) & 0x3FF ^ v78;
          goto LABEL_19;
        }
      }
    }
    else
    {
      v28 = (unsigned int)(v27 - 1);
      if ( !(_DWORD)v27 )
        goto LABEL_14;
    }
    if ( (*(_BYTE *)(v21 + 4) & 4) == 0 )
    {
      v80 = *(_QWORD *)(v21 + 8 * v28 + 24);
      v28 = v21 + 8 * v28;
      if ( (v80 & 0xC00) == 0 && (v80 & 0xFFFFFFFFFFFFF000uLL) == v22 + 4096 )
      {
        v81 = v80 & 0x3FF;
        if ( v81 + 1 >= v81 && v81 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v21 + 16);
          *(_QWORD *)(v28 + 24) = ((unsigned __int16)(v80 - 4096) ^ (unsigned __int16)(v80 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v80 - 4096);
          goto LABEL_19;
        }
      }
    }
LABEL_14:
    if ( (unsigned int)v27 >= *(_DWORD *)(v21 + 8) )
    {
      *(_BYTE *)(v21 + 5) = 1;
    }
    else
    {
      while ( 1 )
      {
        v29 = (unsigned __int64)(v24 - 1) > 0x3FF ? 1024LL : v24;
        v30 = v25 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
        v24 -= v29;
        v25 += v29 << 12;
        *(_QWORD *)(v21 + 8LL * (unsigned int)v27 + 24) = v30;
        v31 = *(_DWORD *)(v21 + 12);
        *(_QWORD *)(v21 + 16) += v29;
        v32 = v31 + 1;
        v27 = v32;
        *(_DWORD *)(v21 + 12) = v32;
        if ( v32 == *(_DWORD *)(v21 + 8) && (*(_BYTE *)(v21 + 4) & 4) == 0 )
        {
          qsort((void *)(v21 + 24), v32, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v21);
          v27 = *(unsigned int *)(v21 + 12);
          if ( (_DWORD)v27 == *(_DWORD *)(v21 + 8) )
            break;
        }
        if ( !v24 )
          goto LABEL_19;
      }
      if ( v24 )
      {
        *(_BYTE *)(v21 + 5) = 1;
        *(_QWORD *)(v21 + 16) = v27;
      }
    }
LABEL_19:
    v33 = *(_QWORD *)v6;
    v102 = v33;
    *(_QWORD *)(v19 + 8 * v23) = v33;
    if ( (v33 & 1) != 0 )
    {
      v58 = 48 * ((v33 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( dword_140C67C68 )
        MI_WSLE_LOG_ACCESS(v96, v6, v27, v28);
      if ( v94 )
      {
        if ( (*(_QWORD *)(v58 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          v73 = *(_BYTE *)(v58 + 35);
          if ( (v73 & 8) != 0 || (v73 & 7u) > 2 && (v73 & 7u) <= 5 )
          {
            v98 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v98);
              while ( *(__int64 *)(v58 + 24) < 0 );
            }
            *(_BYTE *)(v58 + 35) = *(_BYTE *)(v58 + 35) & 0xF8 | 2;
            _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      v59 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v60 = *(_QWORD *)v59;
      if ( v59 >= 0xFFFFF6FB7DBED000uLL
        && v59 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v60 & 1) != 0
        && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v83 = *((_QWORD *)&Flink->Flink + ((v59 >> 3) & 0x1FF));
          if ( (v83 & 0x20) != 0 )
            v60 |= 0x20uLL;
          if ( (v83 & 0x42) != 0 )
            v60 |= 0x42uLL;
        }
      }
      WsleContents = HIBYTE(v60) & 0xF | (16 * ((v60 >> 60) & 7));
      if ( (HIBYTE(v60) & 0xF) == 8 )
      {
        MiUnlockWsle(v96, v22, v58, v28);
        WsleContents = MiGetWsleContents(v84, v22);
      }
      v62 = *(_QWORD *)v6;
      v63 = ((unsigned int)MiFlags >> 26) & 3;
      if ( v63 <= 1 )
      {
        if ( !v63 )
          goto LABEL_60;
        if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL && (v62 & 0x80u) == 0LL )
          LOBYTE(v62) = 32;
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v62 & 0x20) == 0 )
      {
        MI_INTERLOCKED_EXCHANGE_PTE(v6, ZeroPte);
        goto LABEL_61;
      }
LABEL_60:
      *(_QWORD *)v6 = ZeroPte;
LABEL_61:
      v64 = v99 == 0;
      v65 = v103;
      v103[8 * v23] = WsleContents;
      v65[8 * v23 + 1] = 1;
      if ( !v64 )
        v100 = *(_QWORD *)(v58 + 8) | 0x8000000000000000uLL;
      v35 = v93 + 1;
      v97 = v93 + 1;
      goto LABEL_27;
    }
    if ( (v33 & 0x400) == 0 )
      break;
    if ( v99 )
    {
      v34 = v33;
      if ( qword_140C657C0 && (v33 & 0x10) == 0 )
        v34 = ~qword_140C657C0 & v33;
      v100 = v34 >> 16;
    }
    *(_QWORD *)v6 = ZeroPte;
    v35 = v93 + 1;
LABEL_27:
    ++v23;
    v93 = v35;
    v6 += 8LL;
    v22 += 4096LL;
    if ( v6 >= v107 )
      goto LABEL_28;
  }
  v35 = v93;
LABEL_28:
  if ( v97 )
  {
    v36 = v21;
    v37 = v96;
    v38 = MiRemoveWsleList(v96, v36, v103, v97);
    if ( v38 )
      MiRebuildPageTableLeafAges(0LL, v38 << 25 >> 16 << 25 >> 16);
  }
  else
  {
    v37 = v96;
  }
  v39 = v104;
  v40 = v106;
  v113 = 0LL;
  v115 = *(_QWORD *)(v104 + 32) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  v114 = 0LL;
  *(_QWORD *)(v104 + 32) = v115;
  MiUnlockPageTableInternal(v37, v40);
  MiUnlockWorkingSetShared(v37, 2u);
  LODWORD(v112[1]) = 0;
  v112[2] = 0x3FFFFFFFFFLL;
  v41 = 0LL;
  v112[3] = 0x3FFFFFFFFFLL;
  v42 = 0;
  LODWORD(v112[12]) = 0;
  v43 = 0LL;
  v112[11] = 0LL;
  if ( v35 > 0 )
  {
    while ( 2 )
    {
      v44 = *(_QWORD *)(BugCheckParameter2 + 8 * v43);
      if ( (v44 & 1) == 0 )
        goto LABEL_33;
      v66 = (v44 >> 12) & 0xFFFFFFFFFFLL;
      LOBYTE(v119) = (v44 & 0x42) != 0;
      v67 = 48 * v66 - 0x220000000000LL;
      if ( v42 == 3 )
      {
        CanBatchHardFaultPages = 1;
        goto LABEL_79;
      }
      if ( v112[0] )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
        {
          MiInsertPagesInList(v112, 0LL);
          if ( !v112[0] )
            goto LABEL_91;
        }
      }
      else
      {
LABEL_91:
        v94 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v94);
          while ( *(__int64 *)(v67 + 24) < 0 );
        }
      }
      switch ( v42 )
      {
        case 0:
          if ( (_BYTE)v119 )
            MiCaptureDirtyBitToPfn(48 * v66 - 0x220000000000LL);
          if ( _bittest64((const signed __int64 *)(v67 + 40), 0x35u) )
          {
            v87 = *(_BYTE *)(v67 + 34);
            if ( (v87 & 0x10) != 0 )
            {
              if ( byte_140C65768 )
                *(_BYTE *)(v67 + 34) = v87 & 0xEF;
            }
          }
          v68 = *(_QWORD *)(v67 + 24);
          if ( (v68 & 0x4000000000000000LL) == 0 )
          {
            v69 = *(_BYTE *)(v67 + 35);
            if ( (v69 & 0x40) == 0 && (v69 & 0x10) == 0 )
            {
              if ( (v68 & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v67 + 32) == 1 )
              {
                *(_WORD *)(v67 + 32) = 0;
                *(_QWORD *)(v67 + 24) = v68 ^ (v68 ^ ((v68 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
                v70 = *(_QWORD *)(v67 + 16);
                v71 = v70 & 0xFFFFFFFFFFFFF7FFuLL;
                if ( (v70 & 0x400) == 0 )
                  v71 = v70 & 0xFFFFFFFFFFFFFFF7uLL;
                CanBatchHardFaultPages = 1;
                *(_QWORD *)(v67 + 16) = v71;
              }
              else
              {
                CanBatchHardFaultPages = 2;
              }
LABEL_79:
              if ( !v112[0] )
              {
                if ( (*(_BYTE *)(v67 + 34) & 0x10) != 0 )
                  LODWORD(v112[1]) = 3;
                else
                  LODWORD(v112[1]) = 2;
              }
              if ( CanBatchHardFaultPages == 1 )
              {
                MiEnqueuePageList(v112, v66);
LABEL_82:
                v42 = v112[12];
                ++v41;
LABEL_33:
                if ( ++v43 >= v35 )
                {
                  v39 = v104;
                  goto LABEL_35;
                }
                continue;
              }
              MiInsertPagesInList(v112, 1LL);
              if ( v42 )
              {
                if ( v42 == 2 )
                {
                  MiHardFaultPageRelease(&v119, 48 * v66 - 0x220000000000LL);
                }
                else
                {
                  MiReleaseWriteInProgressCharges(
                    *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v67 + 40) >> 43) & 0x3FFLL)),
                    1uLL,
                    1);
                  MiPfnReferenceCountIsZero(48 * v66 - 0x220000000000LL, v66);
                }
              }
              else
              {
                MiDecrementShareCount(48 * v66 - 0x220000000000LL);
              }
LABEL_177:
              _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_82;
            }
          }
LABEL_173:
          CanBatchHardFaultPages = 2;
          goto LABEL_79;
        case 2:
          CanBatchHardFaultPages = MiCanBatchHardFaultPages(&v119, 48 * v66 - 0x220000000000LL);
          if ( CanBatchHardFaultPages )
            goto LABEL_79;
          break;
        case 1:
          MiReleaseWriteInProgressCharges(
            *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v67 + 40) >> 43) & 0x3FFLL)),
            1uLL,
            1);
          break;
        default:
          v85 = *(_BYTE *)(v67 + 34) & 0xF7;
          v64 = (v119 & 0x42) == 0;
          *(_BYTE *)(v67 + 34) = v85;
          if ( !v64 )
            *(_BYTE *)(v67 + 34) = v85 | 0x10;
          v64 = (*(_WORD *)(v67 + 32))-- == 1;
          if ( v64 )
          {
            if ( (*(_QWORD *)(v67 + 24) & 0x4000000000000000LL) == 0 )
            {
              v86 = *(_BYTE *)(v67 + 35);
              if ( (v86 & 0x40) == 0 && (v86 & 0x10) == 0 )
              {
                CanBatchHardFaultPages = 1;
                goto LABEL_79;
              }
            }
            goto LABEL_173;
          }
          break;
      }
      goto LABEL_177;
    }
  }
LABEL_35:
  MiInsertPagesInList(v112, 0LL);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v45 = v92;
    if ( v92 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v91 = ~(unsigned __int16)(-1LL << (v92 + 1));
      v64 = (v91 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v91;
      if ( v64 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v45 = v92;
  }
  __writecr8(v45);
  v46 = v39;
  v47 = v108;
  MiManageSubsectionView(v108, v46, v95);
  v48 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( v41 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
    {
      v74 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v48 == 2 )
        LODWORD(v75) = 4;
      else
        v75 = (-1LL << (v48 + 1)) & 4;
      v74[5] |= v75;
    }
    v49 = v109;
    v95 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v95);
      while ( *(__int64 *)(v49 + 24) < 0 );
    }
    *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) - v41)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = v92;
  }
  else
  {
    v50 = v48;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
    {
      v76 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v48 == 2 )
        LODWORD(v77) = 4;
      else
        v77 = (-1LL << (v48 + 1)) & 4;
      v76[5] |= v77;
    }
  }
  v51 = (volatile LONG *)(v101 + 72);
  if ( v99 )
  {
    v52 = 0LL;
    ExAcquireSpinLockExclusiveAtDpcLevel(v51);
    if ( v47 )
    {
      v53 = v100;
      while ( 1 )
      {
        v54 = MiRemoveViewsFromSection(v47);
        v55 = *(_QWORD *)(v47 + 8);
        v52 += v54;
        if ( v53 >= v55 && v53 < v55 + 8LL * *(unsigned int *)(v47 + 44) )
          break;
        v47 = *(_QWORD *)(v47 + 16);
        if ( !v47 )
          KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
      }
    }
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v51);
    v52 = 0LL;
  }
  v56 = v101;
  --*(_QWORD *)(v101 + 40);
  --*(_DWORD *)(v56 + 88);
  MiCheckControlArea(v56, v50);
  if ( v52 )
    MiReturnCrossPartitionSectionCharges(v110, 1LL, v52);
  if ( (a3 & 2) == 0 )
    return MiReleaseSystemCacheView(0LL, BugCheckParameter3);
  v102 = 0LL;
  MiInitializeTbFlushStamps((__int64 *)&v102);
  result = v102;
  *v111 = v102;
  return result;
}
