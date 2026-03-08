/*
 * XREFs of MiActOnPartitionNodePages @ 0x140655AB0
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x1406569F0 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x1406576A8 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x140658E84 (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x140A4203C (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x140A4242C (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140A42624 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x1406203CC (MiSetHugeRangePartitionId.c)
 *     MiMoveBadPageCrossPartition @ 0x14064B358 (MiMoveBadPageCrossPartition.c)
 *     MiFreePartitionPageRun @ 0x140657734 (MiFreePartitionPageRun.c)
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x140658FCC (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140659730 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 *     MiHotAddHugeRange @ 0x140A2B158 (MiHotAddHugeRange.c)
 *     MiHotRemovePartitionPageRun @ 0x140A423B8 (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, int a3, __int16 **a4)
{
  int v5; // r10d
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  _QWORD *v18; // rbx
  __int64 i; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r15
  __int64 *v23; // r10
  _QWORD *v24; // rax
  __int64 j; // r9
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // r15
  ULONG_PTR v33; // r15
  int v34; // ecx
  ULONG_PTR *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int16 *v38; // rcx
  __int16 v39; // r10
  __int64 v40; // rsi
  unsigned __int8 CurrentIrql; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v43; // rdx
  __int64 v44; // rbx
  unsigned __int64 v45; // r12
  unsigned __int8 v46; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int64 *v50; // rsi
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 *v53; // r12
  _QWORD *v54; // r13
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rdx
  unsigned __int64 *v57; // rax
  unsigned __int64 *v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 *v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rdx
  bool v63; // zf
  bool k; // zf
  unsigned __int64 *v65; // rbx
  __int16 *v66; // rdx
  bool v67; // r8
  __int16 *v68; // rax
  __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // r8
  int v72; // r9d
  int v73; // edx
  int v74; // ecx
  int v75; // edx
  int v76; // r8d
  int v77; // esi
  int v78; // eax
  ULONG_PTR v79; // [rsp+38h] [rbp-40h]
  ULONG_PTR v80; // [rsp+38h] [rbp-40h]
  signed __int64 v81; // [rsp+40h] [rbp-38h] BYREF
  int v82; // [rsp+48h] [rbp-30h]
  int v83; // [rsp+4Ch] [rbp-2Ch] BYREF
  unsigned __int64 *v84; // [rsp+50h] [rbp-28h]
  unsigned __int64 *v85; // [rsp+58h] [rbp-20h]
  ULONG_PTR v86; // [rsp+60h] [rbp-18h] BYREF
  unsigned __int64 v87; // [rsp+68h] [rbp-10h]
  unsigned int v91; // [rsp+D8h] [rbp+60h]

  v86 = 0LL;
  v81 = 0LL;
  v5 = a3;
  *((_DWORD *)a4 + 6) = 0;
  v6 = a2;
  v91 = 0;
  v7 = a1;
  if ( a2 <= 3 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( (v8 & 0x4000000000000000LL) != 0 )
    {
      v91 = 1;
      *(_QWORD *)(a1 + 24) = v8 & 0xBFFFFFFFFFFFFFFFuLL;
    }
  }
  v9 = (unsigned __int64 *)(a1 + 32);
  v10 = 0LL;
  v85 = (unsigned __int64 *)(a1 + 32);
  while ( 1 )
  {
    if ( *(__int64 *)(v7 + 24) >= 0 )
    {
      v14 = *v9;
      v15 = v9[1];
      v16 = v10 & -(__int64)(v10 < v14);
      v17 = v14 - 1;
      while ( 1 )
      {
        v82 = 0;
        if ( v17 - v16 == -1LL )
          goto LABEL_9;
        v18 = (_QWORD *)(v15 + 8 * (v16 >> 6));
        for ( i = ((1LL << (v16 & 0x3F)) - 1) | ~*v18; i == -1; i = ~*v18 )
        {
          if ( (unsigned __int64)++v18 > v15 + 8 * (v17 >> 6) )
            goto LABEL_9;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v12 = i + ((__int64)((__int64)v18 - v15) >> 3 << 6);
        v82 = i;
        if ( v12 > v17 )
        {
LABEL_9:
          v12 = -1LL;
        }
        else if ( v12 != -1LL )
        {
          break;
        }
        if ( !v16 )
          break;
        v20 = v10 + 1;
        if ( v10 + 1 > v14 )
          v20 = v14;
        v17 = v20 - 1;
        v16 = 0LL;
      }
      if ( v12 < v10 || v12 == -1LL )
        return;
      v13 = 0LL;
      v21 = *(_QWORD *)(v7 + 32);
      if ( v21 <= v12 )
        goto LABEL_39;
      v22 = v15 + 8 * ((v21 - 1) >> 6);
      v23 = (__int64 *)(v15 + 8 * (v12 >> 6));
      v24 = v23 + 1;
      for ( j = ((1LL << (v12 & 0x3F)) - 1) | *v23; ; j = *v23 )
      {
        v26 = ~j;
        if ( v26 )
          break;
        if ( (unsigned __int64)v24 > v22 )
          goto LABEL_28;
        ++v23;
        ++v24;
      }
      _BitScanForward64((unsigned __int64 *)&v27, v26);
      v28 = (unsigned int)v27 + ((__int64)((__int64)v23 - v15) >> 3 << 6);
      if ( v28 > v21 )
      {
LABEL_28:
        v28 = *(_QWORD *)(v7 + 32);
        goto LABEL_38;
      }
      v29 = ~(((1LL << v27) - 1) | v26);
      while ( !v29 )
      {
        if ( (unsigned __int64)(v23 + 1) > v22 )
        {
          v30 = 64LL;
          goto LABEL_35;
        }
        v29 = v23[1];
        ++v23;
      }
      _BitScanForward64((unsigned __int64 *)&v30, v29);
LABEL_35:
      v31 = v30 + ((__int64)((__int64)v23 - v15) >> 3 << 6);
      if ( v31 > v21 )
        v31 = *(_QWORD *)(v7 + 32);
      v13 = v31 - v28;
LABEL_38:
      if ( !v13 )
LABEL_39:
        v28 = *(_QWORD *)(v7 + 32);
      v5 = a3;
      v9 = (unsigned __int64 *)(v7 + 32);
      v11 = v28 - v12;
    }
    else
    {
      v11 = *v9;
      v12 = 0LL;
      v13 = 0LL;
    }
    v32 = *(_QWORD *)(v7 + 24);
    v79 = v11;
    v87 = v13 + v12 + v11;
    v33 = v12 + (v32 & 0x3FFFFFFFFFFFFFFFLL);
    v34 = 0;
    if ( v6 - 11 > 1 )
    {
      if ( v33 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v33 - 0x21FFFFFFFFD8LL), 0x36u) )
        v34 = 1;
      switch ( v6 )
      {
        case 7u:
          goto LABEL_166;
        case 8u:
          v35 = (ULONG_PTR *)&a4[8][8 * ((_QWORD)a4[5] + 1)];
          *v35 = v33;
          v35[1] = v11;
          goto LABEL_166;
        case 0u:
          MiFreePartitionPageRun(*a4, v33, v11, v91);
          goto LABEL_166;
      }
    }
    if ( ((v6 - 1) & 0xFFFFFFFD) != 0 )
      break;
    if ( v34 )
    {
      MiHotRemoveHugeRange(v33, v11, 1);
      v78 = 0;
    }
    else
    {
      v78 = MiHotRemovePartitionPageRun(v33, v11, v6, v91, v5);
    }
    *((_DWORD *)a4 + 6) = v78;
    if ( v78 < 0 )
      return;
    RtlClearBitsEx((__int64)v9, v12, v11);
    *(_QWORD *)(v7 + 24) &= ~0x8000000000000000uLL;
LABEL_166:
    a4[6] = (__int16 *)((char *)a4[6] + v11);
    v10 = v87;
    a4[5] = (__int16 *)((char *)a4[5] + 1);
    if ( v10 >= *v9 )
      return;
    v5 = a3;
  }
  switch ( v6 )
  {
    case 4u:
      if ( !v34 )
      {
        v36 = (v33 + 511) & 0xFFFFFFFFFFFFFE00uLL;
        v37 = (v36 + v11) & 0xFFFFFFFFFFFFFE00uLL;
        if ( v36 < v37 )
          MiUpdateLargePageBitMap((__int64)*a4, v36, v37 - v36, 1, 0);
      }
      goto LABEL_166;
    case 5u:
      if ( !(unsigned int)MiSplitPfnBitMapsForPartitionHierarchy(*a4, v33, v11, 2LL) )
        *((_DWORD *)a4 + 6) = -1073741670;
      goto LABEL_166;
    case 6u:
      if ( !v34 )
        MiUpdateLargePageBitMap(
          (__int64)*a4,
          v33 & 0xFFFFFFFFFFFFFE00uLL,
          ((v33 + v11 + 511) & 0xFFFFFFFFFFFFFE00uLL) - (v33 & 0xFFFFFFFFFFFFFE00uLL),
          0,
          0);
      MiTransferPartitionPageRun(a4[1], *a4, v33, v11);
      goto LABEL_166;
    case 0xAu:
      if ( v34 )
      {
        MiSetHugeRangePartitionId((unsigned __int16 *)*a4, (__int64)a4[1], v33, v11);
        goto LABEL_166;
      }
      v38 = (unsigned __int16 *)a4[1];
      if ( v38 != MiSystemPartition )
        MiUpdateLargePageBitMap((__int64)v38, v33, v11, 0, 0);
      v39 = **a4;
      v40 = 48 * v33 - 0x220000000000LL;
      v80 = v40 + 48 * v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v43) = 4;
        else
          v43 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v43;
      }
      v44 = v40 + 24;
      v45 = (unsigned __int64)(v39 & 0x3FF) << 43;
      do
      {
        v83 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v83);
          while ( *(__int64 *)v44 < 0 );
        }
        if ( (*(_BYTE *)(v44 + 11) & 0x40) != 0 )
          MiMoveBadPageCrossPartition(v40, (__int64)a4[1], (unsigned __int64)*a4);
        *(_QWORD *)(v44 + 16) = v45 | *(_QWORD *)(v44 + 16) & 0xFFE007FFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)v44, 0x7FFFFFFFFFFFFFFFuLL);
        v40 += 48LL;
        v44 += 48LL;
      }
      while ( v40 != v80 );
      if ( KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v48 = CurrentPrcb->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v63 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v63 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      MiUpdatePartitionChildPageCounts(*a4, a4[1], v33, v11);
LABEL_132:
      v6 = a2;
      v7 = a1;
      v9 = v85;
      goto LABEL_166;
  }
  if ( v6 != 2 && v6 - 11 > 1 )
  {
    if ( v6 == 13 )
    {
      __debugbreak();
      goto LABEL_166;
    }
    *((_QWORD *)*a4 + 2130) -= v11;
    *((_BYTE *)*a4 + 12) = 1;
    v50 = (unsigned __int64 *)*((_QWORD *)*a4 + 3);
    if ( !v50 )
      goto LABEL_100;
    v51 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    do
    {
      v52 = v50[3] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v51 >= v52 )
      {
        if ( v51 < v50[4] + v52 )
          goto LABEL_100;
        v50 = (unsigned __int64 *)v50[1];
      }
      else
      {
        v50 = (unsigned __int64 *)*v50;
      }
    }
    while ( v50 );
    do
    {
LABEL_100:
      v53 = v50 + 4;
      v84 = v50;
      v54 = v50 + 3;
      v55 = v11;
      v56 = v33 - (v50[3] & 0x3FFFFFFFFFFFFFFFLL);
      if ( v50[4] - v56 <= v11 )
        v55 = v50[4] - v56;
      RtlClearBitsEx((__int64)(v50 + 4), v56, v55);
      v33 += v55;
      *v54 &= ~0x8000000000000000uLL;
      v11 -= v55;
      if ( v11 )
      {
        v57 = (unsigned __int64 *)v50[1];
        v58 = v50;
        if ( v57 )
        {
          do
          {
            v50 = v57;
            v57 = (unsigned __int64 *)*v57;
          }
          while ( v57 );
        }
        else
        {
          while ( 1 )
          {
            v50 = (unsigned __int64 *)(v50[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v50 || (unsigned __int64 *)*v50 == v58 )
              break;
            v58 = v50;
          }
        }
      }
      v59 = *v53;
      if ( !*v53 )
        continue;
      if ( v59 <= 1 )
      {
        if ( v59 != 1 || _bittest64((const signed __int64 *)v53[1], 0) )
          continue;
LABEL_122:
        v65 = v84;
        RtlAvlRemoveNode((unsigned __int64 *)*a4 + 3, v84);
        v66 = a4[4];
        v67 = 0;
        if ( !v66 )
          goto LABEL_129;
        while ( 1 )
        {
          if ( (*v54 & 0x3FFFFFFFFFFFFFFFuLL) >= (*((_QWORD *)v66 + 3) & 0x3FFFFFFFFFFFFFFFuLL) )
          {
            v68 = (__int16 *)*((_QWORD *)v66 + 1);
            if ( !v68 )
            {
              v67 = 1;
LABEL_129:
              RtlAvlInsertNodeEx((unsigned __int64 *)a4 + 4, (unsigned __int64)v66, v67, (unsigned __int64)v65);
              goto LABEL_130;
            }
          }
          else
          {
            v68 = *(__int16 **)v66;
            if ( !*(_QWORD *)v66 )
            {
              v67 = 0;
              goto LABEL_129;
            }
          }
          v66 = v68;
        }
      }
      v60 = (__int64 *)v53[1];
      v61 = *v60;
      v62 = &v60[(v59 - 1) >> 6];
      if ( v60 == v62 )
      {
        v63 = (v61 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v59))) == 0;
      }
      else
      {
        for ( k = v61 == 0; ; k = *v60 == 0 )
        {
          if ( !k )
            goto LABEL_130;
          if ( ++v60 == v62 )
            break;
        }
        v63 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v59 - 1)) & *v60) == 0;
      }
      if ( v63 )
        goto LABEL_122;
LABEL_130:
      ;
    }
    while ( v11 );
    v11 = v79;
    goto LABEL_132;
  }
  v63 = *((_BYTE *)a4 + 18) == 0;
  v81 = v11 << 12;
  if ( v63 )
  {
    v86 = v33 << 12;
    if ( v6 == 2 )
    {
      v72 = 0;
      v73 = (v91 + 128) << 9;
    }
    else
    {
      v73 = 128;
      v72 = 1;
      if ( v6 != 11 )
        v73 = 0x40000;
    }
    v74 = v73 | 0x400;
    if ( !*((_BYTE *)a4 + 17) )
      v74 = v73;
    v75 = v74 | 0x20000;
    if ( (v5 & 0x40) == 0 )
      v75 = v74;
    v76 = v75 | 0x800;
    if ( (v5 & 0x80u) == 0 )
      v76 = v75;
    v77 = v76 | 0x100000;
    if ( (*((_DWORD *)*a4 + 1) & 0x80u) == 0 )
      v77 = v76;
    if ( (int)MiAddPhysicalMemoryChunks(
                (unsigned int)*a4,
                (unsigned int)&v86,
                (unsigned int)&v81,
                (unsigned int)a4[7],
                v77,
                v72) >= 0
      && (v77 & 0x80u) == 0
      && *a4 != (__int16 *)MiSystemPartition
      && (v77 & 0x100000) == 0 )
    {
      _InterlockedExchangeAdd64(&qword_140C69630, v81 / 4096);
    }
  }
  else
  {
    if ( v91 && *((_DWORD *)a4 + 5) == 2 )
      *((_DWORD *)a4 + 5) = 1;
    MiHotAddHugeRange((unsigned int)*a4, v33, v11, *((unsigned __int8 *)a4 + 17), *((_DWORD *)a4 + 5), 0);
  }
  v69 = v81 / 4096;
  if ( !*((_BYTE *)a4 + 18) && *a4 != (__int16 *)MiSystemPartition )
  {
    v70 = (v33 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v71 = (v70 + v69) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v70 < v71 )
      MiUpdateLargePageBitMap((__int64)MiSystemPartition, v70, v71 - v70, 1, 0);
  }
  if ( v69 == v11 )
  {
    v9 = (unsigned __int64 *)(v7 + 32);
    goto LABEL_166;
  }
  *((_DWORD *)a4 + 6) = -1073741823;
  RtlClearBitsEx(v7 + 32, v12 + v69, *(_QWORD *)(v7 + 32) - v12 - v69);
  if ( v69 )
    a4[5] = (__int16 *)((char *)a4[5] + 1);
  *(_QWORD *)(v7 + 24) &= ~0x8000000000000000uLL;
  a4[6] = (__int16 *)((char *)a4[6] + v69);
}
