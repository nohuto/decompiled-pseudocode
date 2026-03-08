/*
 * XREFs of MiBuildMappedCluster @ 0x140213100
 * Callers:
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x140212C98 (MiReleaseWriteInProgressCharges.c)
 *     MiReferencePageForModifiedWrite @ 0x140213038 (MiReferencePageForModifiedWrite.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiBuildMappedCluster(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // r14
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rsi
  unsigned __int64 v25; // rsi
  __int64 result; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // rsi
  __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 Pool; // rax
  __int64 v35; // rbx
  unsigned __int64 *v36; // rsi
  unsigned __int64 *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r12
  unsigned __int64 *v41; // r15
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rax
  ULONG_PTR v44; // r14
  int v45; // eax
  unsigned __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rsi
  unsigned __int64 *v50; // r15
  ULONG_PTR v51; // rbx
  unsigned __int64 v52; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v56; // eax
  bool v57; // zf
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r12
  ULONG_PTR v62; // rbx
  unsigned __int64 v63; // r15
  unsigned __int8 v64; // cl
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  __int64 v68; // [rsp+28h] [rbp-59h]
  __int64 v69; // [rsp+28h] [rbp-59h]
  unsigned __int64 v70; // [rsp+28h] [rbp-59h]
  unsigned __int64 v71; // [rsp+30h] [rbp-51h]
  unsigned __int64 *v72; // [rsp+30h] [rbp-51h]
  unsigned __int64 v73; // [rsp+38h] [rbp-49h]
  unsigned __int64 v74; // [rsp+40h] [rbp-41h]
  unsigned __int64 v75; // [rsp+48h] [rbp-39h]
  unsigned __int64 *v76; // [rsp+50h] [rbp-31h]
  __int64 v77; // [rsp+58h] [rbp-29h]
  unsigned __int64 v78; // [rsp+60h] [rbp-21h]
  int v79; // [rsp+68h] [rbp-19h] BYREF
  __int64 v80; // [rsp+70h] [rbp-11h]
  unsigned __int64 *v81; // [rsp+78h] [rbp-9h]
  unsigned __int64 v82; // [rsp+80h] [rbp-1h]
  unsigned __int64 v83; // [rsp+88h] [rbp+7h]
  unsigned __int64 v84; // [rsp+90h] [rbp+Fh]
  __int64 v86; // [rsp+F0h] [rbp+6Fh] BYREF
  int v87; // [rsp+F8h] [rbp+77h]
  char v88; // [rsp+100h] [rbp+7Fh] BYREF

  v87 = a3;
  v86 = a2;
  v4 = a2;
  v88 = 0;
  v5 = a1[5];
  v6 = a1[1];
  v7 = a1[2];
  v81 = (unsigned __int64 *)(a2 + 48);
  v76 = (unsigned __int64 *)(a2 + 48);
  v8 = v6 | 0x8000000000000000uLL;
  v82 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  v84 = v8;
  v9 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v71 = v8;
  v77 = *(_QWORD *)(qword_140C67048 + 8 * ((v5 >> 43) & 0x3FF));
  if ( qword_140C657C0 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140C657C0;
  v10 = v7 >> 16;
  if ( v9 < *(_QWORD *)(v10 + 8) )
    v9 = *(_QWORD *)(v10 + 8);
  v11 = v9;
  if ( v9 < v8 - 120 )
    v11 = v8 - 120;
  v80 = v5 & 0xFFFFFFFFFFLL;
  v12 = MiMapPageInHyperSpaceWorker(v5 & 0xFFFFFFFFFFLL, &v88, 0x80000000LL);
  v68 = v12;
  v73 = v8;
  v83 = v8 & 0xFFF;
  v13 = v8;
  v14 = v83 + v12;
  if ( a3 && v8 > v9 )
  {
    do
    {
      v14 -= 8LL;
      if ( (*(_QWORD *)v14 & 0xC01LL) != 0x800 )
        break;
      v33 = ((*(_QWORD *)v14 & (unsigned __int64)~qword_140C657C0) >> 12) & 0xFFFFFFFFFFLL;
      if ( v33 > qword_140C65820
        || !_bittest64((const signed __int64 *)(48 * v33 - 0x21FFFFFFFFD8LL), 0x36u)
        || (*(_BYTE *)(48 * v33 - 0x220000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * v33 - 0x220000000000LL + 32)
        || v77 != *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(48 * v33 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)) )
      {
        break;
      }
      v8 -= 8LL;
      if ( v8 >= v11 )
        v13 = v8;
    }
    while ( v8 > v9 );
    v4 = v86;
    v73 = v13;
    v84 = v8;
  }
  v15 = *(unsigned int *)(v10 + 44);
  v16 = (__int64 *)(((unsigned __int16)v14 ^ (unsigned __int16)v13) & 0xFFF ^ v14);
  v17 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v18 = *(_QWORD *)(v10 + 8) + 8 * v15;
  if ( v17 > v18 )
    v17 = *(_QWORD *)(v10 + 8) + 8 * v15;
  v78 = v17;
  v19 = v17;
  if ( v17 > v13 + 128 )
    v19 = v13 + 128;
  v75 = v19;
  if ( !v87 )
  {
    v75 = v13 + 8;
    v17 = v13 + 8;
    v78 = v13 + 8;
  }
  v20 = v13;
  v74 = v13;
  v21 = 1;
  v87 = 1;
  if ( v13 < v17 )
  {
    v22 = v71;
    while ( v20 != v22 )
    {
      if ( v21 != 3 || (__int64)(((unsigned __int64)v76 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
      {
        v27 = *v16;
        if ( (*v16 & 0xC01) == 0x800 )
        {
          v28 = ((v27 & (unsigned __int64)~qword_140C657C0) >> 12) & 0xFFFFFFFFFFLL;
          if ( v28 > qword_140C65820
            || (v18 = 6 * v28, !_bittest64((const signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL), 0x36u)) )
          {
            --v16;
            v20 = v74 - 8;
            goto LABEL_20;
          }
          v29 = 48 * v28 - 0x220000000000LL;
          v79 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v79);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          if ( v27 != MI_READ_PTE_LOCK_FREE(v16) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v16;
            v12 = v68;
            v20 = v74 - 8;
            v22 = v71;
            goto LABEL_21;
          }
          if ( (*(_BYTE *)(v29 + 34) & 0x10) != 0
            && !*(_WORD *)(v29 + 32)
            && v77 == *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL)) )
          {
            if ( v74 >= v75 )
              goto LABEL_40;
            if ( v68 )
            {
              LOBYTE(v18) = 2;
              MiUnmapPageInHyperSpaceWorker(v68, v18, 0x80000000LL);
              v87 = MiReferencePageForModifiedWrite(v29, 0);
              v30 = MiMapPageInHyperSpaceWorker(v80, 0LL, 0x80000000LL);
              v31 = v87;
              v16 = (__int64 *)(v30 + ((unsigned __int16)v16 & 0xFFF));
              v68 = v30;
              v12 = v30;
            }
            else
            {
              v47 = MiReferencePageForModifiedWrite(v29, 0);
              v12 = 0LL;
              v31 = v47;
              v87 = v47;
            }
            if ( v31 )
            {
              *v76++ = ((v27 & (unsigned __int64)~qword_140C657C0) >> 12) & 0xFFFFFFFFFFLL;
LABEL_40:
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v20 = v74;
              v12 = v68;
LABEL_20:
              v22 = v71;
              goto LABEL_21;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v12 = v68;
          }
        }
        v20 = v74;
      }
      if ( v12 )
      {
        LOBYTE(v18) = v88;
        MiUnmapPageInHyperSpaceWorker(v12, v18, 0x80000000LL);
      }
      v32 = v71;
      if ( v20 >= v71 )
        goto LABEL_24;
      v48 = ((__int64)v76 - v4 - 48) >> 3;
      v70 = v48;
      if ( v48 )
      {
        if ( (unsigned __int64)v76 > v4 + 48 )
        {
          v49 = (unsigned __int64)v81;
          v50 = v76;
          do
          {
            v51 = 48 * *--v50 - 0x220000000000LL;
            v52 = (unsigned __int8)MiLockPageInline(v51);
            MiWriteCompletePfn(v51, 1);
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v52 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
                v57 = (v56 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v56;
                if ( v57 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v52);
          }
          while ( (unsigned __int64)v50 > v49 );
          v48 = v70;
          v8 = v84;
          v17 = v78;
          v76 = v50;
          v4 = v86;
        }
        MiReleaseWriteInProgressCharges(v77, v48, 1);
        v32 = v71;
      }
      v58 = v75;
      if ( v75 == v73 + 8 )
      {
        v17 = v32 + 8;
        v78 = v32 + 8;
        v75 = v32 + 8;
      }
      else
      {
        if ( v17 > v32 + 128 )
          v58 = v32 + 128;
        v75 = v58;
      }
      v73 = v32;
      v12 = MiMapPageInHyperSpaceWorker(v80, &v88, 0x80000000LL);
      v68 = v12;
      v16 = (__int64 *)(v12 + v83 - 8);
      v22 = v71;
      v20 = v71 - 8;
LABEL_21:
      v21 = v87;
      v20 += 8LL;
      ++v16;
      v74 = v20;
      if ( v20 >= v17 )
        goto LABEL_22;
    }
    *v76++ = v82;
    goto LABEL_20;
  }
LABEL_22:
  if ( v12 )
  {
    LOBYTE(v18) = v88;
    MiUnmapPageInHyperSpaceWorker(v12, v18, 0x80000000LL);
  }
LABEL_24:
  v23 = v75;
  if ( v20 <= v75 )
    v23 = v20;
  v24 = (__int64)(v23 - v73) >> 3;
  if ( v87 == 3 || v20 <= v75 && v8 >= v73 )
    goto LABEL_29;
  Pool = MiAllocatePool(64LL, 8 * ((__int64)(v20 - v8) >> 3) + 48, 1700228429LL);
  v69 = Pool;
  v35 = Pool;
  if ( !Pool )
    goto LABEL_29;
  v36 = (unsigned __int64 *)(Pool + 48);
  v37 = v81;
  v72 = v81;
  v83 = Pool + 48;
  v38 = a1[5] & 0xFFFFFFFFFFLL;
  v87 = 1;
  v40 = MiMapPageInHyperSpaceWorker(v38, &v88, 0x80000000LL);
  v41 = (unsigned __int64 *)(v40 + (v8 & 0xFFF));
  while ( v8 < v74 )
  {
    if ( v8 < v75 && v8 >= v73 )
    {
      v46 = *v37++;
      v72 = v37;
      *v36 = v46;
      goto LABEL_75;
    }
    if ( v87 != 3 || (__int64)(((unsigned __int64)v36 - v35 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v42 = *v41;
      if ( (*v41 & 0xC01) == 0x800 )
      {
        v43 = ((v42 & ~qword_140C657C0) >> 12) & 0xFFFFFFFFFFLL;
        if ( v43 > qword_140C65820 )
          goto LABEL_76;
        v39 = 6 * v43;
        if ( !_bittest64((const signed __int64 *)(48 * v43 - 0x21FFFFFFFFD8LL), 0x36u) )
          goto LABEL_76;
        v44 = 48 * v43 - 0x220000000000LL;
        LODWORD(v86) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v86);
          while ( *(__int64 *)(v44 + 24) < 0 );
        }
        if ( v42 != MI_READ_PTE_LOCK_FREE(v41) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v37 = v72;
          goto LABEL_76;
        }
        if ( (*(_BYTE *)(v44 + 34) & 0x10) != 0 )
        {
          v39 = 0LL;
          if ( !*(_WORD *)(v44 + 32)
            && v77 == *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v44 + 40) >> 43) & 0x3FFLL)) )
          {
            if ( v40 )
            {
              LOBYTE(v39) = 2;
              MiUnmapPageInHyperSpaceWorker(v40, v39, 0x80000000LL);
              v87 = MiReferencePageForModifiedWrite(v44, 0);
              v40 = MiMapPageInHyperSpaceWorker(v80, 0LL, 0x80000000LL);
              v41 = (unsigned __int64 *)(v40 + ((unsigned __int16)v41 & 0xFFF));
              v45 = v87;
            }
            else
            {
              v45 = MiReferencePageForModifiedWrite(v44, 0);
              v87 = v45;
            }
            if ( v45 )
            {
              *v36 = (v42 >> 12) & ((unsigned __int64)~qword_140C657C0 >> 12) & 0xFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v37 = v72;
LABEL_75:
              ++v41;
              v8 += 8LL;
              ++v36;
              goto LABEL_76;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v35 = v69;
    }
    if ( v40 )
    {
      LOBYTE(v39) = v88;
      MiUnmapPageInHyperSpaceWorker(v40, v39, 0x80000000LL);
    }
    v59 = v73;
    if ( v8 >= v73 )
      goto LABEL_85;
    v60 = ((__int64)v36 - v35 - 48) >> 3;
    v82 = v60;
    if ( v60 )
    {
      v61 = v83;
      if ( (unsigned __int64)v36 > v83 )
      {
        do
        {
          v62 = 48 * *--v36 - 0x220000000000LL;
          v63 = (unsigned __int8)MiLockPageInline(v62);
          MiWriteCompletePfn(v62, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v64 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v64 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v64 >= 2u )
            {
              v65 = KeGetCurrentPrcb();
              v66 = v65->SchedulerAssist;
              v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
              v57 = (v67 & v66[5]) == 0;
              v66[5] &= v67;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick(v65);
            }
          }
          __writecr8(v63);
        }
        while ( (unsigned __int64)v36 > v61 );
        v60 = v82;
        v59 = v73;
      }
      MiReleaseWriteInProgressCharges(v77, v60, 1);
    }
    v37 = v81;
    v8 = v59;
    v72 = v81;
    v40 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v88, 0x80000000LL);
    v41 = (unsigned __int64 *)(v40 + (v59 & 0xFFF));
LABEL_76:
    v35 = v69;
  }
  if ( v40 )
  {
    LOBYTE(v39) = v88;
    MiUnmapPageInHyperSpaceWorker(v40, v39, 0x80000000LL);
  }
LABEL_85:
  v4 = v35;
  v24 = ((__int64)v36 - v35 - 48) >> 3;
LABEL_29:
  v25 = v24 << 12;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_WORD *)(v4 + 8) = 8 * ((v25 >> 12) + 6);
  *(_WORD *)(v4 + 10) = 2;
  result = v4;
  *(_QWORD *)(v4 + 40) = (unsigned int)v25;
  return result;
}
