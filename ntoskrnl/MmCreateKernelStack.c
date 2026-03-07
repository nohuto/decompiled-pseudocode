__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  void *v5; // rsi
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  unsigned __int64 v9; // r13
  struct _KPRCB *v10; // rdx
  __int64 v11; // rbx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  ULONG_PTR Next; // r9
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v37; // r8
  int v38; // eax
  struct _KPRCB *v39; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v41; // eax
  unsigned __int8 v42; // [rsp+40h] [rbp-68h]
  __int64 v43; // [rsp+48h] [rbp-60h]
  int v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  PSLIST_ENTRY v47; // [rsp+60h] [rbp-48h]
  __int64 v48; // [rsp+68h] [rbp-40h]
  char v49; // [rsp+B0h] [rbp+8h]
  int v50; // [rsp+C8h] [rbp+20h] BYREF

  v49 = a1;
  v3 = a2;
  v45 = 0LL;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v6 = -32LL;
    if ( a3 )
      v5 = *(void **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else if ( a3 )
  {
    v6 = a3;
    v5 = *(void **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else
  {
    v6 = -16LL;
  }
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      v8 = 2;
      v7 = 3;
    }
    else
    {
      v7 = (unsigned __int8)byte_140C6813C;
      v8 = 0;
    }
    v9 = v7;
    v48 = v7;
    if ( (a1 & 0x10) == 0
      || (v10 = KeGetCurrentPrcb(), v8 = 1, v10->SchedulerSubNode->Affinity.Reserved[0] != (_DWORD)v3)
      || !v10->CachedStack
      || v5 != &MiSystemPartition
      || (v11 = _InterlockedExchange64((volatile __int64 *)&v10->CachedStack, 0LL)) == 0 )
    {
      v16 = 794 * v3;
      v17 = v8;
      v46 = 794 * v3;
      while ( 1 )
      {
        v43 = v17;
        v18 = *((_QWORD *)v5 + 2) + 32 * (v16 + v17 + 725);
        if ( FirstEntrySList((PSLIST_HEADER)v18) )
        {
          if ( v43 == 1 )
          {
            v42 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v42 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
                LODWORD(v29) = 4;
              else
                v29 = (-1LL << (CurrentIrql + 1)) & 4;
              SchedulerAssist[5] |= v29;
            }
          }
          v47 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v18);
          if ( v47 )
          {
            if ( !FirstEntrySList((PSLIST_HEADER)v18) && !*(_BYTE *)(v18 + 28) )
              *(_BYTE *)(v18 + 28) = 1;
            Next = (ULONG_PTR)v47[-1].Next;
            if ( Next != (qword_140C69550 ^ (unsigned __int64)&v47[-255]) )
              KeBugCheckEx(
                0x1Au,
                0x3470uLL,
                (ULONG_PTR)&v47[-255],
                Next,
                qword_140C69550 ^ (unsigned __int64)&v47[-255]);
            v23 = (((unsigned __int64)&v47[-255] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v14 = (__int64)((v23 << 25) + 0x10000000) >> 16;
            v47 = (PSLIST_ENTRY)v14;
            if ( v8 != 1 )
            {
              v24 = v23 - 8LL * v7 + 8;
              do
              {
                v45 = MI_READ_PTE_LOCK_FREE(v23);
                v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v45) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                v50 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v50);
                  while ( *(__int64 *)(v25 + 24) < 0 );
                }
                v26 = MI_READ_PTE_LOCK_FREE(v23);
                if ( v45 == v26 )
                {
                  MiSetPfnKernelStack((__int64 *)v25, v6);
                  v23 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v23 >= v24 );
              v14 = (__int64)v47;
              LOBYTE(v4) = v49;
              LODWORD(v9) = v48;
              if ( KiIrqlFlags )
              {
                v35 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v42 <= 0xFu && v35 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v37 = CurrentPrcb->SchedulerAssist;
                  v38 = ~(unsigned __int16)(-1LL << (v42 + 1));
                  v34 = (v38 & v37[5]) == 0;
                  v37[5] &= v38;
                  if ( v34 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(v42);
            }
            goto LABEL_14;
          }
          v19 = v43;
          if ( v43 != 1 )
          {
            if ( KiIrqlFlags )
            {
              v30 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v42 <= 0xFu && v30 >= 2u )
              {
                v31 = KeGetCurrentPrcb();
                v32 = v31->SchedulerAssist;
                v33 = ~(unsigned __int16)(-1LL << (v42 + 1));
                v34 = (v33 & v32[5]) == 0;
                v32[5] &= v33;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick(v31);
              }
            }
            __writecr8(v42);
            ++*(_DWORD *)(v18 + 20);
            goto LABEL_20;
          }
        }
        else
        {
          v19 = v43;
        }
        ++*(_DWORD *)(v18 + 20);
        if ( v19 != 1 )
          goto LABEL_20;
        v16 = v46;
        v8 = 0;
        v17 = 0LL;
      }
    }
    v12 = *(_QWORD *)(v11 - 16);
    v13 = v11 - 4080;
    if ( v12 != (qword_140C69550 ^ v13) )
      KeBugCheckEx(0x1Au, 0x3470uLL, v13, v12, qword_140C69550 ^ v13);
    v14 = (__int64)(((v13 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
    goto LABEL_14;
  }
  v7 = 18;
  v9 = 18LL;
  if ( (a1 & 4) == 0 )
    v9 = 6LL;
LABEL_20:
  if ( !(unsigned int)MiChargeCommit(v5, v7, (v4 >> 1) & 1) )
    return 0LL;
  v20 = MiReservePtes(&unk_140C68088, v7 + 1);
  v46 = v20;
  if ( !v20 )
  {
LABEL_91:
    MiReturnCommit((__int64)v5, v7, v21);
    return 0LL;
  }
  v44 = v20;
  v14 = ((v20 << 25) + ((v7 + 1LL) << 28)) >> 16;
  if ( (int)KasanTrackAddress(v14 - (v7 << 12), v7 << 12, v3) < 0 )
    goto LABEL_90;
  if ( (v4 & 5) == 1 )
    v44 = v46 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v9, 0LL) )
    goto LABEL_90;
  if ( !(unsigned int)MiAllocateKernelStackPages((_DWORD)v5, v44 + 8, v9, v6, v3, v4, 0LL) )
  {
    if ( v5 == &MiSystemPartition )
    {
      v39 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v39->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( CachedResidentAvailable + v9 <= 0x100 )
        {
          do
          {
            v41 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v39->CachedResidentAvailable,
                    CachedResidentAvailable + v9,
                    CachedResidentAvailable);
            v34 = (_DWORD)CachedResidentAvailable == v41;
            LODWORD(CachedResidentAvailable) = v41;
            if ( v34 )
              goto LABEL_90;
          }
          while ( v41 != -1 && v41 + v9 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v39->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v9 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v9 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 2160, v9);
LABEL_90:
    MiReleasePtes((__int64)&unk_140C68088, (__int64 *)v46, v7 + 1);
    goto LABEL_91;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C69648, v7);
LABEL_14:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v4 & 8) != 0 )
    MiLogKernelStackEvent(v14 - (v7 << 12), (unsigned int)v9, 1LL);
  return v14;
}
