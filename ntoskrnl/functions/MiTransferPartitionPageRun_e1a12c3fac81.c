__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
{
  __int64 v5; // r13
  unsigned __int16 v6; // di
  int v8; // eax
  ULONG_PTR v9; // r14
  unsigned __int8 CurrentIrql; // al
  KIRQL v12; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned int v25; // edi
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  struct _KPRCB *v33; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 BaseResidentPage; // rbp
  __int64 PfnPageSizeIndex; // r13
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  __int64 v50; // rbx
  int v51; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  int v55; // eax
  _DWORD *v56; // r9
  ULONG_PTR v57; // [rsp+30h] [rbp-58h]
  unsigned __int16 v58; // [rsp+90h] [rbp+8h]
  unsigned __int16 v59; // [rsp+98h] [rbp+10h]
  int v60; // [rsp+A0h] [rbp+18h]
  __int64 i; // [rsp+A8h] [rbp+20h]

  v5 = 0LL;
  v6 = *(_WORD *)a1;
  v59 = *(_WORD *)a2;
  v8 = 0;
  v58 = *(_WORD *)a1;
  v57 = a3 + a4;
  v9 = a3;
  for ( i = 0LL; v9 != v57; ++v9 )
  {
    v60 = v8 + 1;
    if ( (((_BYTE)v8 + 1) & 0xF) == 0 && (*(_DWORD *)(a1 + 224) & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v12 = a5;
        if ( a5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v12 = a5;
      }
      __writecr8(v12);
      --v9;
      a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
    }
    else
    {
      v17 = 48 * v9 - 0x220000000000LL;
      v18 = MiLockPageInline(v17);
      v19 = *(_QWORD *)(v17 + 40);
      v20 = v18;
      if ( ((v19 >> 43) & 0x3FF) != v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v21 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v16 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v22);
          }
        }
        __writecr8(v20);
        goto LABEL_92;
      }
      v25 = *(_BYTE *)(v17 + 34) & 7;
      if ( v25 == 5 )
      {
        if ( MiIsPageOnBadList(48 * v9 - 0x220000000000LL) )
        {
          MiUnlinkPageFromBadList((_QWORD *)(48 * v9 - 0x220000000000LL), 0);
          MiAcquireNonPagedResources(a2, 1uLL, 0LL, 1u);
          MiReturnCommit(a1, 1LL, v31);
          v32 = 1LL;
          if ( (unsigned __int16 *)a1 != MiSystemPartition )
            goto LABEL_49;
          v33 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v33->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable == -1 )
            goto LABEL_49;
          do
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
              break;
            v35 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v33->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v16 = (_DWORD)CachedResidentAvailable == v35;
            CachedResidentAvailable = v35;
            if ( v16 )
              goto LABEL_50;
          }
          while ( v35 != -1 );
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v33->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v32 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( v32 )
LABEL_49:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v32);
LABEL_50:
          *(_QWORD *)(v17 + 16) &= 0xFFFFFFFFFFFFF3FFuLL;
          *(_QWORD *)(v17 + 40) ^= (*(_QWORD *)(v17 + 40) ^ ((unsigned __int64)v59 << 43)) & 0x1FF80000000000LL;
          if ( (unsigned __int16 *)a2 != MiSystemPartition )
          {
            ++*(_QWORD *)(a2 + 17040);
            *(_BYTE *)(a2 + 12) = 1;
          }
          --*(_QWORD *)(a1 + 17040);
          *(_BYTE *)(a1 + 12) = 1;
          MiInsertPageInList(48 * v9 - 0x220000000000LL, 0x20u);
          i = ++v5;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v36 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v16 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v37);
            }
          }
          __writecr8(v20);
          MiUpdatePartitionChildPageCounts(a2, a1, v9, 1LL);
          goto LABEL_91;
        }
        if ( !MiInvalidPteConforms(*(_QWORD *)(v17 + 16)) )
          goto LABEL_94;
        if ( qword_140C657C0 )
        {
          if ( (v26 & 0x10) != 0 )
            v26 &= ~0x10uLL;
          else
            v26 &= ~qword_140C657C0;
        }
        if ( HIDWORD(v26) != 4294967294 )
          goto LABEL_94;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v27 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v16 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v28);
          }
        }
        __writecr8(v20);
        MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
      }
      else
      {
        if ( (v19 & 0x10000000000LL) == 0 )
        {
          if ( v25 > 1 )
            goto LABEL_94;
          MiUnlinkFreeOrZeroedPage(v9, 0LL, 0);
          if ( (unsigned __int16 *)a2 != MiSystemPartition )
          {
            ++*(_QWORD *)(a2 + 17040);
            *(_BYTE *)(a2 + 12) = 1;
          }
          --*(_QWORD *)(a1 + 17040);
          *(_BYTE *)(a1 + 12) = 1;
          if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
            MiMoveBadPageCrossPartition(48 * v9 - 0x220000000000LL, a1, a2);
          *(_QWORD *)(v17 + 40) ^= (*(_QWORD *)(v17 + 40) ^ ((unsigned __int64)v59 << 43)) & 0x1FF80000000000LL;
          MiInsertPageInFreeOrZeroedList(v9, ((*(_DWORD *)(v17 + 16) & 0x3E0) != 0LL) + 1);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v40 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v16 = (v43 & v42[5]) == 0;
              v42[5] &= v43;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v41);
            }
          }
          __writecr8(v20);
          MiUpdatePartitionChildPageCounts(a2, a1, v9, 1LL);
          i = ++v5;
          goto LABEL_91;
        }
        BaseResidentPage = MiGetBaseResidentPage(48 * v9 - 0x220000000000LL);
        v25 = *(_BYTE *)(BaseResidentPage + 34) & 7;
        PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != v17 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v25 > 1 )
        {
LABEL_94:
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v53 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v53 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v53 >= 2u )
            {
              v54 = KeGetCurrentPrcb();
              v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v56 = v54->SchedulerAssist;
              v16 = (v55 & v56[5]) == 0;
              v56[5] &= v55;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v54);
            }
          }
          __writecr8(v20);
          KeBugCheckEx(0x1Au, 0x41000uLL, v9, v25, 0LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v46 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v16 = (v49 & v48[5]) == 0;
            v48[5] &= v49;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v47);
          }
        }
        __writecr8(v20);
        v50 = MiLargePageSizes[PfnPageSizeIndex];
        if ( (unsigned __int16 *)a2 != MiSystemPartition )
        {
          *(_QWORD *)(a2 + 17040) += v50;
          *(_BYTE *)(a2 + 12) = 1;
        }
        v51 = MiMoveLargeFreePage(v9, PfnPageSizeIndex, a1, (_WORD *)a2);
        v5 = i;
        if ( v51 )
        {
          v5 = v50 + i;
          *(_BYTE *)(a1 + 12) = 1;
          v9 += v50;
          i += v50;
          *(_QWORD *)(a1 + 17040) -= v50;
        }
        else if ( (unsigned __int16 *)a2 != MiSystemPartition )
        {
          *(_QWORD *)(a2 + 17040) -= v50;
          *(_BYTE *)(a2 + 12) = 1;
        }
      }
      --v9;
    }
LABEL_91:
    v6 = v58;
LABEL_92:
    v8 = v60;
  }
  return v5;
}
