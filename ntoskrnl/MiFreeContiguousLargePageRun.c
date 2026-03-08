/*
 * XREFs of MiFreeContiguousLargePageRun @ 0x14064780C
 * Callers:
 *     MiFreeAwePagesFromMdl @ 0x140647764 (MiFreeAwePagesFromMdl.c)
 *     MiFreePhysicalPageChain @ 0x140647BC4 (MiFreePhysicalPageChain.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiGetPfnPageSizeIndex @ 0x14034D770 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClearAweLargePageMetadata @ 0x14064703C (MiClearAweLargePageMetadata.c)
 *     MiFreePhysicalRange @ 0x140648248 (MiFreePhysicalRange.c)
 *     MiReturnCrossPartitionCharges @ 0x140658D80 (MiReturnCrossPartitionCharges.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065AF0C (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 */

unsigned __int64 __fastcall MiFreeContiguousLargePageRun(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 i; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  int PfnPageSizeIndex; // r15d
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  _QWORD *v15; // rbp
  __int64 v16; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  unsigned int active; // eax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  unsigned __int64 v29; // rdx
  _QWORD *j; // rax
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h] BYREF
  __int64 v35; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v36; // [rsp+90h] [rbp+8h]
  unsigned __int64 v37; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h]

  v37 = a3;
  v35 = 0LL;
  v3 = 0LL;
  v34 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    v32 = v7;
    if ( !a3 )
      return v3;
    while ( 1 )
    {
      v8 = (_QWORD *)(48 * v5 - 0x220000000000LL);
      for ( i = !_bittest64(&KeFeatureBits, 0x25u); ; i = (unsigned int)(i + 1) )
      {
        v10 = MiLargePageSizes[i];
        if ( ((v10 - 1) & v5) == 0 && v4 >= v10 )
          break;
      }
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(48 * v5 - 0x220000000000LL);
      v38 = PfnPageSizeIndex;
      v13 = MiLargePageSizes[PfnPageSizeIndex];
      v33 = v13;
      if ( ((v8[5] >> 60) & 7) == 1 )
      {
        v14 = 48 * v5 - 0x220000000000LL;
        v15 = &v8[6 * v10];
        if ( v8 < v15 )
        {
          v16 = 48 * v13;
          do
          {
            v36 = MiLockPageInline(v14);
            MiClearAweLargePageMetadata(v14);
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v36 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v20 = ~(unsigned __int16)(-1LL << (v36 + 1));
                v21 = (v20 & SchedulerAssist[5]) == 0;
                v11 = (unsigned int)v20 & SchedulerAssist[5];
                SchedulerAssist[5] = v11;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(v36);
            v14 += v16;
          }
          while ( v14 < (unsigned __int64)v15 );
          v7 = v32;
        }
        PfnPageSizeIndex = v38;
        v4 = v37;
      }
      if ( (unsigned int)i <= 1 )
        MiUpdateLargePageBitMap(v7, v5, v10, 0, 0);
      v22 = 0LL;
      if ( PfnPageSizeIndex != (_DWORD)i )
      {
        while ( 1 )
        {
          active = MiCoalesceActivePagesIntoFree(v22, v5, (unsigned int)i);
          v22 = active;
          if ( active || (_DWORD)i + 1 == PfnPageSizeIndex )
            break;
          LODWORD(i) = i + 1;
        }
      }
      v24 = MiLargePageSizes[(unsigned int)i];
      if ( !(_DWORD)v22 )
      {
        v29 = 0LL;
        for ( j = &v8[6 * v24]; v8 < j; v8 += 6 * v33 )
        {
          *v8 ^= (*v8 ^ (v29 >> 3)) & 0xFFFFFFFFFFELL;
          v29 = (unsigned __int64)v8;
        }
        MiFreeLargePages(v7, v29, (unsigned int)&v35, (unsigned int)&v34, 0);
        goto LABEL_48;
      }
      if ( v24 )
      {
        MiReturnCommit(v7, v24, v11);
        v25 = v24;
        if ( (unsigned __int16 *)v7 != MiSystemPartition )
          goto LABEL_42;
        v26 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v26->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_42;
        if ( v24 + CachedResidentAvailable <= 0x100 && v24 < 0x80000 )
        {
          do
          {
            v28 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v26->CachedResidentAvailable,
                    v24 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v28;
            LODWORD(CachedResidentAvailable) = v28;
            if ( v21 )
              goto LABEL_43;
          }
          while ( v28 != -1 && v24 + v28 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v26->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v25 = v24 + (int)CachedResidentAvailable - 192;
        }
        if ( v25 )
LABEL_42:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 17280), v25);
      }
LABEL_43:
      if ( v7 != *(_QWORD *)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]) )
        MiReturnCrossPartitionCharges(v7, 2LL, 1LL, v24);
LABEL_48:
      v3 += v24;
      v5 += v24;
      v4 -= v24;
      v37 = v4;
      if ( !v4 )
        return v3;
    }
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( a3 )
  {
    do
    {
      MiFreePhysicalRange(a1, v5);
      v5 += v6;
      v3 += v6;
    }
    while ( v3 < v4 );
  }
  return v3;
}
