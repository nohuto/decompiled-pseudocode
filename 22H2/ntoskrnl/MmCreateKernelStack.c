/*
 * XREFs of MmCreateKernelStack @ 0x1402AABF0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AA8C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeUserModeCallback @ 0x14063D750 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x1407800A0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x14098FD94 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiMarkPfnTradable @ 0x140356708 (MiMarkPfnTradable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140546A80 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r12d
  ULONG_PTR *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned int v8; // r8d
  unsigned int v9; // r14d
  __int64 i; // rbp
  _SLIST_HEADER *v11; // rbx
  __int16 Alignment; // r15
  unsigned __int8 CurrentIrql; // cl
  PSLIST_ENTRY v14; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v16; // rcx
  ULONG_PTR v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  int v21; // r15d
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rcx
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v33; // rax
  ULONG_PTR v34; // r9
  ULONG_PTR v35; // rbp
  ULONG_PTR v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  ULONG_PTR v40; // rax
  __int64 v41; // r9
  _QWORD *v42; // r14
  ULONG_PTR v43; // r13
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  bool v51; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  struct _LIST_ENTRY *v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  struct _KPRCB *v62; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v64; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  unsigned __int8 v66; // [rsp+30h] [rbp-68h]
  int v67; // [rsp+38h] [rbp-60h]
  unsigned __int64 v68; // [rsp+40h] [rbp-58h]
  __int64 v69; // [rsp+48h] [rbp-50h] BYREF
  __int64 v70; // [rsp+50h] [rbp-48h]
  int v72; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v69 = 0LL;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v7 = -32LL;
    v70 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else if ( a3 )
  {
    v6 = *(_QWORD *)(a3 + 544);
    v7 = a3;
    v70 = a3;
    v5 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v6 + 1838));
  }
  else
  {
    v7 = -16LL;
    v70 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v8 = 18;
    v45 = 18LL;
    v67 = 18;
    if ( (a1 & 4) == 0 )
      v45 = 6LL;
    v68 = v45;
  }
  else
  {
    v8 = (unsigned __int8)byte_140C4EBBC;
    v67 = (unsigned __int8)byte_140C4EBBC;
    v68 = (unsigned __int8)byte_140C4EBBC;
    if ( (a1 & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 1;
      if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == (_DWORD)v3 )
      {
        if ( CurrentPrcb->CachedStack )
        {
          v33 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 - 16);
            v35 = v33 - 4080;
            v36 = (v33 - 4080) ^ qword_140C4EEC8;
            if ( v34 != v36 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v35, v34, v36);
            v19 = (__int64)(((v35 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
            goto LABEL_28;
          }
        }
      }
    }
    else
    {
      v9 = 0;
    }
    if ( v5 == &MiSystemPartition )
    {
      for ( i = v9; ; i = 0LL )
      {
        v11 = &SListHead[11 * v3 + 2 * i];
        Alignment = v11->Alignment;
        if ( LOWORD(v11->Alignment) )
        {
          if ( i == 1 )
          {
            v66 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v66 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
          v14 = RtlpInterlockedPopEntrySList(v11);
          if ( v14 )
          {
            if ( Alignment == 1 && !*((_DWORD *)&v11[1].HeaderX64 + 3) )
              *((_DWORD *)&v11[1].HeaderX64 + 3) = 1;
            Next = (ULONG_PTR)v14[-1].Next;
            v16 = (ULONG_PTR)&v14[-255];
            v17 = (unsigned __int64)&v14[-255] ^ qword_140C4EEC8;
            if ( Next != v17 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v16, Next, v17);
            v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v19 = (__int64)((v18 << 25) + 0x10000000) >> 16;
            v70 = v19;
            if ( v9 != 1 )
            {
              v20 = v18 - 8LL * (unsigned __int8)byte_140C4EBBC + 8;
              v21 = MiPteInShadowRange(&v69, 0xFFFFF68000000000uLL);
              v22 = 0xFFFFFA8000000000uLL;
              v23 = 0xFFFFFFFFFFELL;
              do
              {
                v24 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v24 & 1) != 0
                  && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
                {
                  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( Flink )
                  {
                    v53 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
                    v54 = v24 | 0x20;
                    if ( (v53 & 0x20) == 0 )
                      v54 = *(_QWORD *)v18;
                    v24 = v54;
                    if ( (v53 & 0x42) != 0 )
                      v24 = v54 | 0x42;
                  }
                }
                v69 = v24;
                v25 = v24;
                if ( v21
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v24 & 1) != 0
                  && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
                {
                  v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v30 )
                  {
                    v31 = *((_QWORD *)&v30->Flink + (((unsigned __int64)&v69 >> 3) & 0x1FF));
                    v25 = v24 | 0x20;
                    if ( (v31 & 0x20) == 0 )
                      v25 = v24;
                    if ( (v31 & 0x42) != 0 )
                      v25 |= 0x42uLL;
                  }
                  else
                  {
                    v25 = v24;
                  }
                }
                v26 = (v25 >> 12) & 0xFFFFFFFFFLL;
                v27 = 48 * v26 - 0x58000000000LL;
                v72 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v72, v26, v23, v22);
                    while ( *(__int64 *)(v27 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
                  v23 = 0xFFFFFFFFFFELL;
                  v22 = 0xFFFFFA8000000000uLL;
                }
                v28 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v28 & 1) != 0
                  && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
                {
                  v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v55 )
                  {
                    v56 = *((_QWORD *)&v55->Flink + ((v18 >> 3) & 0x1FF));
                    v57 = v28 | 0x20;
                    if ( (v56 & 0x20) == 0 )
                      v57 = *(_QWORD *)v18;
                    v28 = v57;
                    if ( (v56 & 0x42) != 0 )
                      v28 = v57 | 0x42;
                  }
                  v23 = 0xFFFFFFFFFFELL;
                }
                if ( v24 == v28 )
                {
                  *(_QWORD *)v27 ^= (*(_QWORD *)v27 ^ (v7 >> 3)) & 0xFFFFFFFFFFELL;
                  if ( (*(_BYTE *)v27 & 1) == 0 )
                    MiMarkPfnTradable(v27, 1LL);
                  v18 -= 8LL;
                  v22 = 0xFFFFFA8000000000uLL;
                  v23 = 0xFFFFFFFFFFELL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v18 >= v20 );
              v19 = v70;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v58 = KeGetCurrentIrql();
                  if ( v58 <= 0xFu && v66 <= 0xFu && v58 >= 2u )
                  {
                    v59 = KeGetCurrentPrcb();
                    v60 = v59->SchedulerAssist;
                    v61 = ~(unsigned __int16)(-1LL << (v66 + 1));
                    v51 = (v61 & v60[5]) == 0;
                    v60[5] &= v61;
                    if ( v51 )
                      KiRemoveSystemWorkPriorityKick(v59);
                  }
                }
              }
              __writecr8(v66);
            }
            goto LABEL_28;
          }
          if ( i != 1 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v47 = KeGetCurrentIrql();
                if ( v47 <= 0xFu && v66 <= 0xFu && v47 >= 2u )
                {
                  v48 = KeGetCurrentPrcb();
                  v49 = v48->SchedulerAssist;
                  v50 = ~(unsigned __int16)(-1LL << (v66 + 1));
                  v51 = (v50 & v49[5]) == 0;
                  v49[5] &= v50;
                  if ( v51 )
                    KiRemoveSystemWorkPriorityKick(v48);
                }
              }
            }
            __writecr8(v66);
          }
        }
        ++*((_DWORD *)&v11[1].HeaderX64 + 1);
        if ( i != 1 )
        {
          v4 = a1;
          v8 = v67;
          break;
        }
        v9 = 0;
      }
    }
  }
  v37 = v8;
  if ( !(unsigned int)MiChargeCommit((__int64)v5, v8, (v4 >> 1) & 1) )
    return 0LL;
  v40 = MiReservePtes((__int64)&unk_140C4EB58, v67 + 1, v38, v39);
  v42 = (_QWORD *)v40;
  if ( !v40 )
  {
LABEL_127:
    MiReturnCommit((__int64)v5, v37);
    return 0LL;
  }
  v43 = v40;
  v19 = (__int64)((v40 << 25) + ((v37 + 1) << 28)) >> 16;
  if ( (v4 & 5) == 1 )
    v43 = v40 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v68, 0LL, v41) )
    goto LABEL_126;
  BugCheckParameter4 = v3;
  v44 = v68;
  if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v5, (__int64 *)(v43 + 8), v68, v70, BugCheckParameter4, v4) )
  {
    if ( v5 == &MiSystemPartition )
    {
      v62 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v62->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v68 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            v64 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v62->CachedResidentAvailable,
                    CachedResidentAvailable + v68,
                    CachedResidentAvailable);
            v51 = (_DWORD)CachedResidentAvailable == v64;
            LODWORD(CachedResidentAvailable) = v64;
            if ( v51 )
              goto LABEL_126;
          }
          while ( v64 != -1 && v68 + v64 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v62->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v44 = (int)CachedResidentAvailable - 192 + v68;
        }
      }
    }
    if ( v44 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 896, v44);
LABEL_126:
    MiReleasePtes((__int64)&unk_140C4EB58, v42, v67 + 1);
    goto LABEL_127;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFC8, v37);
LABEL_28:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a1 & 8) != 0 )
    MiLogKernelStackEvent(v19 - (unsigned int)(v67 << 12), (unsigned int)v68, 1LL);
  return v19;
}
