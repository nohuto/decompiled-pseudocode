/*
 * XREFs of MiFreeMdlPageRun @ 0x14027AF50
 * Callers:
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x140657734 (MiFreePartitionPageRun.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiResidentPageDangleFree @ 0x14038A9AC (MiResidentPageDangleFree.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  bool v7; // zf
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int16 v11; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v13; // rdx
  void *v14; // r8
  _QWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v20; // r9
  int v21; // ecx
  unsigned int v22; // ebp
  __int64 *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned __int64 v31; // rsi
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  __int64 v36; // rax
  __int64 *v37; // rcx
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v42; // r9
  int v43; // eax
  volatile signed __int64 *v44; // r10
  unsigned __int64 v45; // r8
  struct _KPRCB *v46; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v48; // eax
  int v49; // [rsp+30h] [rbp-58h] BYREF
  void *v50; // [rsp+38h] [rbp-50h]
  unsigned __int64 v51; // [rsp+40h] [rbp-48h]
  int v52; // [rsp+A0h] [rbp+18h]

  v51 = -1LL;
  v4 = 0LL;
  v52 = a3 & 1;
  v5 = a4;
  v6 = a2;
  v7 = a2 == 0;
  while ( !v7 )
  {
    if ( (a1 & 0xF) != 0 )
    {
LABEL_4:
      if ( v51 != (a1 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v51 = a1 & 0xFFFFFFFFFFFFFE00uLL;
        v28 = 48 * a1 - 0x220000000000LL;
        v29 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiCheckSlabPfnBitmap(v28, 1LL, 0LL) )
          MiUpdateLargePageBitMap(v29, a1 & 0xFFFFFE00, 512, 0, 0);
      }
      v9 = 1LL;
      v10 = 48 * a1 - 0x220000000000LL;
      v11 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v20) = 4;
        else
          v20 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v20;
      }
      v49 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      v13 = *(_QWORD *)(v10 + 40);
      v14 = *(void **)(qword_140C67048 + 8 * ((v13 >> 43) & 0x3FF));
      v15 = (_QWORD *)qword_140C69508;
      v50 = v14;
      if ( qword_140C69508 )
      {
        if ( ((v13 >> 60) & 7) == 1 )
        {
          v38 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * a1) >> 4);
          if ( qword_140C69508 )
          {
            do
            {
              v39 = v15[3];
              if ( v38 >= v39 )
              {
                if ( v38 - v39 < v15[4] )
                {
                  v9 = 0LL;
                  v11 = 256;
                  goto LABEL_66;
                }
                v15 = (_QWORD *)v15[1];
              }
              else
              {
                v15 = (_QWORD *)*v15;
              }
            }
            while ( v15 );
          }
        }
      }
      if ( !v52 || (v17 = a4) == 0 )
      {
        v16 = MiCheckSlabPfnBitmap(48 * a1 - 0x220000000000LL, 1LL, 0LL);
        v14 = v50;
        if ( !v16 )
        {
          v11 = 2 - (v52 != 0);
          goto LABEL_66;
        }
        v17 = a4;
      }
      if ( *(_WORD *)(v10 + 32) == 2 )
      {
        v9 = 0LL;
        *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
        v18 = *(__int64 **)(v17 + 80);
        if ( *v18 != v17 + 72 )
          goto LABEL_87;
        *(_QWORD *)v10 = v17 + 72;
        *(_QWORD *)(v10 + 8) = v18;
        *v18 = v10;
        *(_QWORD *)(v17 + 80) = v10;
        ++*(_QWORD *)(v17 + 88);
      }
      else
      {
LABEL_66:
        *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
        v7 = *(_WORD *)(v10 + 32) == 2;
        *(_WORD *)(v10 + 32) -= 2;
        if ( v7 )
        {
          MiInsertPageInFreeOrZeroedList(a1, v11);
          v14 = v50;
        }
        else
        {
          *(_BYTE *)(v10 + 34) |= 7u;
          *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
          v9 = 0LL;
        }
      }
      if ( CurrentIrql != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v40 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v42 = CurrentPrcb->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v7 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v14 = v50;
          }
        }
        __writecr8(CurrentIrql);
      }
      if ( v9 )
      {
        MiReturnCommit(v14, v9);
        v44 = (volatile signed __int64 *)v50;
        v45 = v9;
        if ( v50 != &MiSystemPartition )
          goto LABEL_86;
        v46 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v46->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_86;
        if ( (unsigned __int64)(CachedResidentAvailable + v9) > 0x100 )
        {
LABEL_82:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v46->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v45 = v9 + (int)CachedResidentAvailable - 192;
          }
          if ( v45 )
LABEL_86:
            _InterlockedExchangeAdd64(v44 + 2160, v45);
        }
        else
        {
          while ( 1 )
          {
            v48 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v46->CachedResidentAvailable,
                    CachedResidentAvailable + v9,
                    CachedResidentAvailable);
            v7 = (_DWORD)CachedResidentAvailable == v48;
            LODWORD(CachedResidentAvailable) = v48;
            if ( v7 )
              break;
            if ( v48 == -1 || (unsigned __int64)(v48 + v9) > 0x100 )
              goto LABEL_82;
          }
        }
      }
      v5 = a4;
      v4 += v9;
      ++a1;
      v7 = --v6 == 0;
    }
    else
    {
      v21 = 0;
      if ( (KeFeatureBits & 0x2000000000LL) != 0 )
      {
        v22 = 0;
      }
      else
      {
        v21 = 1;
        v22 = 1;
      }
      v23 = &MiLargePageSizes[v21];
      while ( 1 )
      {
        v24 = *v23;
        if ( v6 >= *v23 && ((v24 - 1) & a1) == 0 )
        {
          v25 = 48 * a1 - 0x220000000000LL;
          if ( !(unsigned int)MiCheckSlabPfnBitmap(v25, *v23, 0LL) )
          {
            if ( (unsigned int)MiResidentPageDangleFree(a1, v22) )
              break;
          }
        }
        ++v22;
        ++v23;
        if ( v22 >= 3 )
          goto LABEL_4;
      }
      if ( v52 && v5 )
      {
        MiConvertSmallPageRangeToLarge(a1);
        v31 = (unsigned __int8)MiLockPageInline(v25);
        *(_BYTE *)(v25 + 34) = *(_BYTE *)(v25 + 34) & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v32 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
            v7 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        __writecr8(v31);
        v36 = v5 + 24LL * v22;
        v37 = *(__int64 **)(v36 + 8);
        if ( *v37 != v36 )
LABEL_87:
          __fastfail(3u);
        *(_QWORD *)v25 = v36;
        *(_QWORD *)(v25 + 8) = v37;
        *v37 = v25;
        *(_QWORD *)(v36 + 8) = v25;
        ++*(_QWORD *)(v36 + 16);
        v27 = 0LL;
      }
      else
      {
        v27 = MiFreeLargePageMemory(a1, v26, (unsigned int)(v52 + 6));
      }
      v4 += v27;
      a1 += v24;
      v6 -= v24;
      v7 = v6 == 0;
    }
  }
  return v4;
}
