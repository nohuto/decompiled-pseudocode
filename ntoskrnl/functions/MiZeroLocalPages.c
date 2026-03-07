__int64 __fastcall MiZeroLocalPages(unsigned __int64 a1)
{
  __int64 v1; // rdi
  int v2; // r12d
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v6; // r15d
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  __int64 v9; // rax
  int HugePageToZero; // eax
  int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // r15
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v25; // rdx
  unsigned int v26; // ebx
  char v27; // cl
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v35; // r9
  int v36; // eax
  int v37; // ebx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  char v40; // cl
  struct _KTHREAD *v41; // rbx
  __int64 v42; // r8
  _QWORD *v43; // rdx
  __int64 *v44; // rcx
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int64 v49; // r12
  __int64 v50; // rbx
  unsigned __int64 UltraMapping; // rsi
  __int64 v52; // r13
  _DWORD *v53; // r9
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  char v59; // al
  __int64 v60; // rcx
  int v61; // r15d
  int v62; // r15d
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // r10
  unsigned __int64 LeafVa; // rdi
  int v69; // eax
  unsigned __int64 v70; // rbx
  int v71; // r15d
  int v72; // eax
  __int64 v73; // rbx
  unsigned int v74; // r11d
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  unsigned __int64 *v78; // r8
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rax
  LARGE_INTEGER v89; // rax
  LARGE_INTEGER v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rbx
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r9
  _DWORD *v95; // r8
  int v96; // eax
  __int64 v97; // rdx
  signed __int32 v99[8]; // [rsp+0h] [rbp-108h] BYREF
  LARGE_INTEGER v100; // [rsp+50h] [rbp-B8h]
  __int64 v101; // [rsp+58h] [rbp-B0h]
  __int64 v102; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+68h] [rbp-A0h]
  __int64 v104; // [rsp+70h] [rbp-98h]
  int v105; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v106; // [rsp+7Ch] [rbp-8Ch]
  __int64 v107; // [rsp+80h] [rbp-88h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v109; // [rsp+90h] [rbp-78h] BYREF
  __int64 v110; // [rsp+98h] [rbp-70h]
  LARGE_INTEGER v111; // [rsp+A0h] [rbp-68h] BYREF
  LARGE_INTEGER v112; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v113; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  unsigned int v116; // [rsp+118h] [rbp+10h]
  int v117; // [rsp+120h] [rbp+18h]
  int v118; // [rsp+128h] [rbp+20h] BYREF

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v118 = 0;
  v117 = 0;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v3 = *(_QWORD *)(a1 + 88);
  v113 = v3;
  v4 = *(_QWORD *)(v3 + 168);
  v110 = v4;
  v5 = *(_QWORD *)(v4 + 48);
  v107 = v5;
  v106 = MiSetZeroPageThreadPriority(a1, 0LL);
  v116 = 0;
  _InterlockedExchange((volatile __int32 *)(v1 + 140), 0);
  PerformanceFrequency.QuadPart = 0LL;
  v6 = 0;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v100 = v7;
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v100.QuadPart = 10000000 * v7.QuadPart / PerformanceFrequency.QuadPart;
  _InterlockedOr(v99, 0);
  do
  {
    if ( !(unsigned int)MiReadyToZeroNextLargePage(v1, &v118) )
    {
LABEL_216:
      ++dword_140C12F64;
      goto LABEL_217;
    }
    if ( v118 )
    {
      _InterlockedExchange((volatile __int32 *)(v1 + 140), 0);
      v6 = 0;
      v109.QuadPart = 0LL;
      v116 = 0;
      v8 = KeQueryPerformanceCounter(&v109);
      v100 = v8;
      if ( v109.QuadPart != 10000000 )
        v100.QuadPart = 10000000 * v8.QuadPart / v109.QuadPart;
      _InterlockedOr(v99, 0);
    }
    if ( !*(_QWORD *)(v1 + 392) )
    {
      v9 = MiReferencePageRuns(*(_QWORD *)(v4 + 48), 0LL);
      if ( !v9 )
        goto LABEL_216;
      *(_QWORD *)(v1 + 392) = v9;
    }
    ++*(_DWORD *)(v3 + 276);
    if ( !v6 )
    {
      HugePageToZero = MiGetHugePageToZero(v5, v1);
      goto LABEL_191;
    }
    v11 = *(_DWORD *)(v1 + 364) >> byte_140C6570D;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_BYTE *)(v1 + 70) = 0;
    if ( v6 < 3 )
    {
      v12 = MiUnlinkNodeLargePages(v5, 0, v6, 1, v11, 4, 1, 512, v1);
      v102 = v12;
      goto LABEL_103;
    }
    v13 = 3;
LABEL_17:
    v14 = *(_DWORD *)(v1 + 364);
    LODWORD(v104) = v13 - 1;
    v15 = 0;
    LODWORD(v103) = v14;
    v16 = 88LL * (unsigned int)(dword_140C6577C * (v13 - 1));
    v17 = v14;
    v18 = *(_QWORD *)(v5 + 2504) + v16;
    v101 = v18;
    v19 = 0;
    while ( 1 )
    {
      v20 = 88 * v17;
      v21 = *(_QWORD *)(88 * v17 + v18 + 16);
      if ( v21 != 0x3FFFFFFFFFLL )
        break;
LABEL_22:
      v1 = a1;
      *(_DWORD *)(a1 + 364) = *(_DWORD *)(a1 + 364) & ~dword_140C65700 | dword_140C65700 & (*(_DWORD *)(a1 + 364) + 1);
LABEL_23:
      v17 = *(unsigned int *)(v1 + 364);
      v18 = v101;
      if ( (_DWORD)v17 == (_DWORD)v103 )
      {
        if ( !v15 || (++v19, v19 >= 2) )
        {
          v13 = v104;
          if ( (_DWORD)v104 )
          {
            v5 = v107;
            goto LABEL_17;
          }
          goto LABEL_101;
        }
      }
    }
    v22 = 48 * v21;
    v12 = 48 * v21 - 0x220000000000LL;
    v102 = v12;
    if ( !v19 && *(__int64 *)(v12 + 24) < 0 )
    {
      v15 = 1;
      goto LABEL_22;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
      {
        LODWORD(v25) = 4;
      }
      else
      {
        v20 = (unsigned int)CurrentIrql + 1;
        v25 = (-1LL << (CurrentIrql + 1)) & 4;
      }
      SchedulerAssist[5] |= v25;
    }
    v26 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    }
    if ( v21 > qword_140C65820
      || !_bittest64((const signed __int64 *)(v22 - 0x21FFFFFFFFD8LL), 0x36u)
      || (v27 = *(_BYTE *)(v12 + 34), (v27 & 7) != 1)
      || _bittest64((const signed __int64 *)(v12 + 40), 0x28u) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v35 = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      v1 = a1;
      goto LABEL_23;
    }
    if ( (v27 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(CurrentIrql);
      goto LABEL_22;
    }
    if ( *(_WORD *)(v12 + 32) )
      KeBugCheckEx(
        0x4Eu,
        0x8DuLL,
        0xAAAAAAAAAAAAAAABuLL * (v22 >> 4),
        *(unsigned int *)(v12 + 32),
        *(_QWORD *)(v12 + 8));
    v1 = a1;
    *(_BYTE *)(a1 + 72) = 0;
    if ( (*(_BYTE *)(v12 + 34) & 8) != 0 )
    {
      v37 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v12;
      v38 = qword_140C657C0;
      *(_BYTE *)(v12 + 34) |= 8u;
      v39 = *(_QWORD *)(v12 + 16);
      if ( v38 && (v39 & 0x10) == 0 )
        v39 &= ~v38;
      v40 = *(_BYTE *)(a1 + 72);
      if ( HIDWORD(v39) == 4294967293 )
        v40 = 1;
      *(_BYTE *)(a1 + 72) = v40;
      *(_QWORD *)(v12 + 16) = a1;
      v41 = KeGetCurrentThread();
      v32 = *(_BYTE *)(a1 + 73) == 0;
      *(_QWORD *)(a1 + 56) = v41;
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_WORD *)(a1 + 70) = 0;
      if ( v32 )
      {
        *(_BYTE *)(a1 + 69) = 1;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66EE0);
        LOBYTE(v42) = 0;
        if ( *(_BYTE *)(a1 + 73) )
        {
          v43 = (_QWORD *)qword_140C66EE8;
          if ( qword_140C66EE8 )
          {
            while ( 1 )
            {
              while ( (unsigned __int64)v41 < v43[7] )
              {
                if ( !*v43 )
                  goto LABEL_90;
                v43 = (_QWORD *)*v43;
              }
              if ( !v43[1] )
                break;
              v43 = (_QWORD *)v43[1];
            }
            v42 = 1LL;
          }
LABEL_90:
          v44 = &qword_140C66EE8;
        }
        else
        {
          v43 = (_QWORD *)qword_140C66EF8;
          if ( qword_140C66EF8 )
          {
            while ( 1 )
            {
              while ( a1 < (unsigned __int64)v43 )
              {
                if ( !*v43 )
                  goto LABEL_82;
                v43 = (_QWORD *)*v43;
              }
              if ( !v43[1] )
                break;
              v43 = (_QWORD *)v43[1];
            }
            v42 = 1LL;
          }
LABEL_82:
          v44 = &qword_140C66EF8;
        }
        RtlAvlInsertNodeEx(v44, v43, v42, a1);
        *(_BYTE *)(a1 + 69) = 1;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EE0);
      }
      v37 = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(CurrentIrql);
    if ( !v37 )
    {
LABEL_101:
      v12 = 0LL;
      v102 = 0LL;
    }
    v6 = v116;
    v5 = v107;
    v2 = v117;
    v4 = v110;
LABEL_103:
    if ( !v12 )
      goto LABEL_205;
    v49 = v6;
    if ( v6 >= 3 )
    {
      v50 = 1LL;
      v101 = 1LL;
    }
    else
    {
      _mm_lfence();
      v50 = MiLargePageSizes[v6];
      v101 = v50;
    }
    UltraMapping = MiGetUltraMapping(32LL * v6 + v1 + 208, v6, v50);
    v103 = UltraMapping;
    v52 = KeGetCurrentIrql();
    v104 = v52;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v52 <= 0xFu )
    {
      v53 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)v52 == 2 )
        LODWORD(v54) = 4;
      else
        v54 = (-1LL << ((unsigned __int8)v52 + 1)) & 4;
      v53[5] |= v54;
    }
    v105 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v105);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( *(_BYTE *)(a1 + 70) )
    {
      v1 = a1;
      MiRemoveFaultNode(a1);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v55 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
          v32 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
      __writecr8((unsigned __int8)v52);
      ++dword_140C12FC8;
      HugePageToZero = 0;
      goto LABEL_190;
    }
    if ( v50 == 1 && *(unsigned __int8 *)(v12 + 34) >> 6 == 3 )
      MiFinalizePageAttribute(v12, 1LL, 1LL);
    v59 = *(_BYTE *)(v12 + 34) >> 6;
    if ( v59 )
    {
      v60 = 4LL;
      if ( v59 == 2 )
        v60 = 28LL;
    }
    else
    {
      v60 = 12LL;
    }
    v61 = -1543503872;
    if ( v116 > 1 )
      v61 = -1610612736;
    v62 = v60 | v61;
    v63 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v49 <= 1 )
    {
      v60 = 2 - v49;
      do
      {
        v63 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v60;
      }
      while ( v60 );
    }
    v64 = 0x140000000uLL;
    v65 = ((0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12;
    v66 = v65 | MmProtectToPteMask[v62 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v63 < 0xFFFFF68000000000uLL || (v67 = 0xFFFFF6FFFFFFFFFFuLL, v63 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v70 = v65 | MmProtectToPteMask[v62 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
      v71 = v62 & 0x4000000;
    }
    else
    {
      LeafVa = (__int64)(v63 << 25) >> 16;
      if ( v63 >= 0xFFFFF6FB40000000uLL && v63 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v63 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v66 |= 0x8000000000000000uLL;
        }
        else if ( (v62 & 0x4000000) == 0 )
        {
          v66 &= ~0x8000000000000000uLL;
        }
        v69 = MiUserPdeOrAbove(v63);
        v64 = 0x140000000uLL;
        v67 = 0xFFFFF6FFFFFFFFFFuLL;
        if ( v69 )
          v66 |= 4uLL;
      }
      v60 = v66;
      v70 = v66 | 4;
      if ( v63 > 0xFFFFF6BFFFFFFF78uLL )
        v70 = v60;
      v71 = v62 & 0x4000000;
      if ( v71 )
        LeafVa = MiGetLeafVa(LeafVa);
      if ( LeafVa < 0xFFFF800000000000uLL )
      {
        v72 = HIBYTE(word_140C6697C);
        goto LABEL_160;
      }
      if ( *(_BYTE *)(((LeafVa >> 39) & 0x1FF) - 256 + v64 + 13017176) != 1
        && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > v67) )
      {
        if ( LeafVa < qword_140C6A1D8 || (v72 = HIBYTE(word_140C6697C), LeafVa > qword_140C66CF0) )
          v72 = (unsigned __int8)word_140C6697C;
LABEL_160:
        if ( v72 )
          v70 |= 0x100uLL;
      }
    }
    v73 = (((unsigned __int16)v70 | 0x42) ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (v70 | 0x42);
    if ( v71 )
      v73 |= 0x80uLL;
    v6 = v116;
    v74 = 0;
    v75 = v73 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( v116 > 2 )
    {
      v76 = 1LL;
      goto LABEL_168;
    }
    v76 = *(_QWORD *)(v64 + 8 * v49 + 90800);
    if ( v76 )
    {
LABEL_168:
      v77 = 0LL;
      while ( 1 )
      {
        v78 = (unsigned __int64 *)(v63 + 8 * v77);
        v79 = v75;
        if ( (unsigned __int64)v78 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v78 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v60, v75, v78) )
          {
            if ( !HIBYTE(word_140C6697C) && (v75 & 1) != 0 )
              v79 |= 0x8000000000000000uLL;
            *v78 = v79;
            MiWritePteShadow(v78, v79);
            goto LABEL_180;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v75 & 1) != 0 )
          {
            v79 |= 0x8000000000000000uLL;
          }
        }
        *v78 = v79;
LABEL_180:
        ++v74;
        v60 = 0xFFFFFFFFFF000LL;
        v75 ^= (v75 ^ (v75 + 4096)) & 0xFFFFFFFFFF000LL;
        v77 = v74;
        if ( v74 >= v76 )
        {
          LOBYTE(v52) = v104;
          v6 = v116;
          break;
        }
      }
    }
    v1 = a1;
    v80 = v103;
    v81 = v101 << 12;
    *(_QWORD *)(a1 + 40) = v103;
    *(_QWORD *)(a1 + 32) = v63;
    *(_QWORD *)(a1 + 48) = v80 - 1 + v81;
    v82 = v102;
    *(_QWORD *)(a1 + 200) = v102;
    *(_DWORD *)(a1 + 64) = v6;
    _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v83 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v83 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v83 >= 2u )
      {
        v84 = KeGetCurrentPrcb();
        v85 = v84->SchedulerAssist;
        v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
        v32 = (v86 & v85[5]) == 0;
        v85[5] &= v86;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v84);
      }
    }
    __writecr8((unsigned __int8)v52);
    HugePageToZero = 1;
LABEL_190:
    v5 = v107;
    v3 = v113;
    v2 = v117;
    v4 = v110;
LABEL_191:
    if ( HugePageToZero )
    {
      v117 = MiZeroPage(v1, v5);
      v2 = v117;
      if ( v6 == 3 )
      {
        v87 = 1LL;
      }
      else
      {
        v88 = v6;
        if ( !v6 )
          v88 = 1LL;
        v87 = MiLargePageSizes[v88];
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 176), v87);
      if ( (unsigned __int64)(v87 + _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 140), v87)) >= 0x1000 )
      {
        _InterlockedOr(v99, 0);
        v111.QuadPart = 0LL;
        v89 = KeQueryPerformanceCounter(&v111);
        if ( v111.QuadPart != 10000000 )
          v89.QuadPart = 10000000 * v89.QuadPart / v111.QuadPart;
        if ( v89.QuadPart < (unsigned __int64)v100.QuadPart )
          v89 = v100;
        MiReassessZeroThreads(v1, v89.QuadPart - v100.QuadPart);
        _InterlockedExchange((volatile __int32 *)(v1 + 140), 0);
        v112.QuadPart = 0LL;
        v90 = KeQueryPerformanceCounter(&v112);
        v100 = v90;
        if ( v112.QuadPart != 10000000 )
          v100.QuadPart = 10000000 * v90.QuadPart / v112.QuadPart;
        _InterlockedOr(v99, 0);
      }
      continue;
    }
LABEL_205:
    if ( v6 >= 3 )
      goto LABEL_217;
    v3 = v113;
    v116 = ++v6;
  }
  while ( !v2 );
  v91 = *(_QWORD *)(v3 + 200);
  ++dword_140C12F68;
  v92 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v91 + 23160));
  *(_DWORD *)(v1 + 136) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 200) + 23160LL));
  if ( KiIrqlFlags )
  {
    v93 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v93 <= 0xFu && (unsigned __int8)v92 <= 0xFu && v93 >= 2u )
    {
      v94 = KeGetCurrentPrcb();
      v95 = v94->SchedulerAssist;
      v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v92 + 1));
      v32 = (v96 & v95[5]) == 0;
      v95[5] &= v96;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v94);
    }
  }
  __writecr8(v92);
LABEL_217:
  v97 = v106;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  return MiSetZeroPageThreadPriority(v1, v97);
}
