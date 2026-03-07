__int64 __fastcall MiUnlockMdlWritePages(_DWORD *a1, int *a2)
{
  __int64 *v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 CurrentIrql; // rbx
  __int64 v11; // rdi
  __int64 v12; // r12
  int v13; // esi
  __int64 v14; // rbx
  char v15; // al
  bool v16; // zf
  char v17; // al
  int v18; // ecx
  __int64 result; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v24; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  unsigned __int8 v27; // cl
  _DWORD *v28; // r9
  __int64 v29; // rdx
  int CanBatchSystemCacheUnmapPages; // eax
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // r9
  int v34; // edx
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  __int16 v39; // [rsp+28h] [rbp-69h]
  _QWORD v40[14]; // [rsp+38h] [rbp-59h] BYREF
  int v41; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v42; // [rsp+108h] [rbp+77h] BYREF
  __int64 v43; // [rsp+110h] [rbp+7Fh]

  memset(v40, 0, 0x68uLL);
  v4 = (__int64 *)(a1 + 12);
  v5 = (a1[8] + a1[11]) & 0xFFF;
  v6 = (unsigned int)a1[10] + 4095LL;
  v7 = (*a2 >> 31) & 0x43;
  LODWORD(v40[12]) = 1;
  v42 = v7;
  v40[2] = 0x3FFFFFFFFFLL;
  v40[3] = 0x3FFFFFFFFFLL;
  LODWORD(v40[1]) = 0;
  v8 = 0LL;
  v40[11] = 0LL;
  v9 = (unsigned __int64)(v5 + v6) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  __writecr8(2uLL);
  v11 = LOBYTE(v40[11]) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v26) = 4;
    else
      v26 = (v11 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v26;
  }
  if ( v9 )
  {
    v39 = __ROL8__(1LL, (unsigned __int8)CurrentIrql + 1);
    while ( 1 )
    {
      v12 = *v4;
      v13 = v40[12];
      v14 = 48 * *v4 - 0x220000000000LL;
      if ( LODWORD(v40[12]) == 3 )
      {
LABEL_70:
        v18 = 1;
LABEL_15:
        if ( !v40[0] )
        {
          if ( (*(_BYTE *)(v14 + 34) & 0x10) != 0 )
            LODWORD(v40[1]) = 3;
          else
            LODWORD(v40[1]) = 2;
        }
        if ( v18 == 1 )
        {
          MiEnqueuePageList(v40, v12);
          goto LABEL_18;
        }
        MiInsertPagesInList(v40, 1LL);
        if ( v13 )
        {
          if ( v13 == 2 )
          {
            MiHardFaultPageRelease(&v42, v14);
          }
          else
          {
            MiReleaseWriteInProgressCharges(
              *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)),
              1uLL,
              1);
            MiPfnReferenceCountIsZero(v14, v12);
          }
        }
        else
        {
          MiDecrementShareCount(v14);
        }
        goto LABEL_76;
      }
      if ( v40[0] )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          MiInsertPagesInList(v40, 0LL);
          if ( !v40[0] )
            goto LABEL_30;
        }
      }
      else
      {
LABEL_30:
        v41 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v41);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
      }
      if ( v13 != 1 )
      {
        switch ( v13 )
        {
          case 0:
            CanBatchSystemCacheUnmapPages = MiCanBatchSystemCacheUnmapPages(&v42, v14);
LABEL_64:
            v18 = CanBatchSystemCacheUnmapPages;
            if ( CanBatchSystemCacheUnmapPages )
              goto LABEL_15;
            goto LABEL_23;
          case 2:
            CanBatchSystemCacheUnmapPages = MiCanBatchHardFaultPages(&v42, v14);
            goto LABEL_64;
          case 3:
            goto LABEL_70;
        }
      }
      v15 = *(_BYTE *)(v14 + 34) & 0xF7;
      v16 = (v42 & 0x42) == 0;
      *(_BYTE *)(v14 + 34) = v15;
      if ( !v16 )
        *(_BYTE *)(v14 + 34) = v15 | 0x10;
      v16 = (*(_WORD *)(v14 + 32))-- == 1;
      if ( v16 )
      {
        if ( (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0
          || (v17 = *(_BYTE *)(v14 + 35), (v17 & 0x40) != 0)
          || (v17 & 0x10) != 0 )
        {
          v18 = 2;
        }
        else
        {
          v18 = 1;
        }
        goto LABEL_15;
      }
LABEL_23:
      if ( v13 == 1 )
      {
        v20 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v20, 1LL);
        v21 = 1LL;
        if ( (_UNKNOWN *)v20 != &MiSystemPartition )
          goto LABEL_38;
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_38;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v24 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v16 = (_DWORD)CachedResidentAvailable == v24;
            LODWORD(CachedResidentAvailable) = v24;
            if ( v16 )
              goto LABEL_76;
          }
          while ( v24 != -1 && (unsigned __int64)(v24 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v21 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v21 )
LABEL_38:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 17280), v21);
      }
LABEL_76:
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
      if ( (++v8 & 0x3F) == 0 && KeShouldYieldProcessor() )
      {
        MiInsertPagesInList(v40, 0LL);
        if ( KiIrqlFlags )
        {
          v31 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v34 = ~(unsigned __int16)-v39;
            v16 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        __writecr8((unsigned __int8)v43);
        v27 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
        {
          v28 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v27 == 2 )
            LODWORD(v29) = 4;
          else
            v29 = (-1LL << (v27 + 1)) & 4;
          v28[5] |= v29;
        }
      }
      ++v4;
      if ( !--v9 )
      {
        LOBYTE(CurrentIrql) = v43;
        v11 = -1LL;
        break;
      }
    }
  }
  MiInsertPagesInList(v40, 0LL);
  if ( KiIrqlFlags )
  {
    v35 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v35 >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(v11 << ((unsigned __int8)CurrentIrql + 1));
      v16 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
