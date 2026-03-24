/*
 * XREFs of MiProcessWorkingSets @ 0x140207B60
 * Callers:
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiLogProcessWorkingSetsStart @ 0x14025FD4C (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x14025FDB8 (MiLogProcessWorkingSetsStop.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiDrainZeroLookasides @ 0x140310AE0 (MiDrainZeroLookasides.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     MiComputeSystemTrimCriteria @ 0x14033A450 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x14033A7E8 (MiComputeAgingPercent.c)
 *     MiReturnWsToExpansionList @ 0x140352978 (MiReturnWsToExpansionList.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB604 (MiInitializeWorkingSetManagerParameters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x140513808 (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053AC6C (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x14053B580 (MiOrderTrimList.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 result; // rax
  PRKEVENT v5; // rdi
  int v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // r11
  __int64 *v9; // r12
  _DWORD *v10; // r9
  int v11; // r13d
  __int16 v12; // dx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 *v16; // r14
  int v17; // r15d
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v22; // r10
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // edx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 **v29; // rax
  __int64 v30; // rcx
  __int64 **v31; // rax
  __int64 **v32; // rdi
  __int64 *v33; // rax
  __int64 **v34; // rdi
  char v35; // r14
  unsigned int v36; // eax
  int Blink; // esi
  __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  _QWORD *v40; // r8
  _QWORD *v41; // rcx
  _QWORD *v42; // rdx
  int v43; // eax
  _QWORD *v44; // rcx
  __int64 v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 **v49; // rax
  unsigned __int64 v50; // rsi
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  bool v55; // zf
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  int v58; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v60; // r10
  int v61; // eax
  struct _KPRCB *v62; // rax
  int v63; // eax
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  unsigned __int8 v69; // al
  _DWORD *v70; // r8
  int v71; // eax
  unsigned int v72; // [rsp+20h] [rbp-60h]
  int v73; // [rsp+24h] [rbp-5Ch]
  unsigned int v74; // [rsp+28h] [rbp-58h]
  int v75; // [rsp+2Ch] [rbp-54h]
  PRKEVENT Event; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]
  __int16 v81; // [rsp+B0h] [rbp+30h]
  int v82; // [rsp+B8h] [rbp+38h]
  __int16 v83; // [rsp+B8h] [rbp+38h]
  int v84; // [rsp+B8h] [rbp+38h]
  int v85; // [rsp+B8h] [rbp+38h]

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters();
  result = *(unsigned int *)(v3 + 4);
  if ( (result & 0x20) != 0 )
    return result;
  v5 = *(PRKEVENT *)(v3 + 6848);
  Event = v5;
  MiComputeAgingPercent(v3);
  v72 = MiComputeSystemTrimCriteria(v3, a2);
  v6 = v72;
  MiLogProcessWorkingSetsStart(v3, a2, v72);
  if ( (v72 & 5) != 0 )
    MiDrainZeroLookasides(v3, 0LL, 0LL, 0LL);
  v73 = 0;
  v74 = 0;
  if ( (v72 & 5) != 0 )
    LOBYTE(v5[2].Header.SignalState) = 1;
  if ( (v72 & 2) != 0 )
    ++HIDWORD(v5[3].Header.WaitListHead.Flink);
  v7 = 0LL;
  if ( (v72 & 0x40) != 0 )
  {
    if ( WORD1(v5[97].Header.WaitListHead.Blink) > 0xAu )
      WORD1(v5[97].Header.WaitListHead.Blink) = 10;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( BYTE2(v5[2].Header.SignalState) == 1 )
    {
      v40 = (_QWORD *)(v3 + 6856);
      BYTE2(v5[2].Header.SignalState) = 0;
      v41 = *(_QWORD **)(v3 + 6856);
      if ( v41 != (_QWORD *)(v3 + 6856) )
      {
        do
        {
          v42 = v41;
          v41 = (_QWORD *)*v41;
          if ( (struct _LIST_ENTRY *)v42[9] >= v5[2].Header.WaitListHead.Flink )
          {
            v45 = *v42;
            v46 = (_QWORD *)v42[1];
            if ( *(_QWORD **)(*v42 + 8LL) != v42
              || (_QWORD *)*v46 != v42
              || (*v46 = v45, *(_QWORD *)(v45 + 8) = v46, v47 = *v40, *(_QWORD **)(*v40 + 8LL) != v40) )
            {
LABEL_83:
              __fastfail(3u);
            }
            *v42 = v47;
            v42[1] = v40;
            *(_QWORD *)(v47 + 8) = v42;
            *v40 = v42;
          }
        }
        while ( v41 != v40 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  v8 = a2;
  v9 = (__int64 *)(v3 + 6856);
  BYTE1(v5[2].Header.SignalState) = 1;
  v10 = 0LL;
LABEL_13:
  while ( 2 )
  {
    v11 = 0;
    v75 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v48 = MiOrderTrimList(v3, *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)v8 & 0x7F)), v6 & 1, 0LL);
      v8 = a2;
      v10 = 0LL;
      *(_QWORD *)(a2 + 104) = v48;
    }
    v12 = ++LOWORD(v5[97].Header.WaitListHead.Blink);
    *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80) - *(_QWORD *)(v8 + 96);
    v81 = v12;
    while ( 1 )
    {
      v13 = (__int64 *)*v9;
      if ( (__int64 *)*v9 == v9 )
        goto LABEL_46;
      v14 = *v13;
      if ( (__int64 *)v13[1] != v9 || *(__int64 **)(v14 + 8) != v13 )
        goto LABEL_83;
      *v9 = v14;
      v15 = v13 - 3;
      *(_QWORD *)(v14 + 8) = v9;
      v16 = v13;
      *v13 = 0LL;
      if ( *((_WORD *)v13 + 74) == v12 )
      {
        v33 = (__int64 *)*v9;
        v34 = (__int64 **)(v15 + 3);
        if ( *(__int64 **)(*v9 + 8) != v9 )
          goto LABEL_83;
        v3 = a1;
        *v34 = v33;
        v34[1] = v9;
        v33[1] = (__int64)v34;
        *v9 = (__int64)v34;
        if ( !v75 )
          goto LABEL_49;
        v64 = MiCheckSystemTrimEndCriteria(a1, v8, &LockHandle, 0LL);
        v8 = a2;
        v10 = 0LL;
        v5 = Event;
        if ( v64 )
          goto LABEL_49;
        goto LABEL_13;
      }
      *((_WORD *)v15 + 86) = v12;
      v17 = v6 & 0x40;
      if ( (v6 & 0x40) != 0 && (struct _LIST_ENTRY *)v15[12] < Event[2].Header.WaitListHead.Flink )
        break;
      if ( (unsigned __int64)v15[17] > 1 || (v15[23] & 7) != 0 )
      {
        v82 = *((_DWORD *)v15 + 46);
        BYTE1(v82) = BYTE1(v82) & 0xF9 | 2;
        *((_WORD *)v15 + 92) = v82;
        if ( *(_BYTE *)(v8 + 2) == 2 )
        {
          v56 = v15[17];
          v57 = v15[14];
          if ( v56 <= v57 || v56 - v57 < 0x40000 )
            goto LABEL_35;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          v8 = a2;
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_26;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
            v8 = a2;
            v10 = 0LL;
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_26:
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v58 = SchedulerAssist[6] - 1;
            SchedulerAssist[6] = v58;
            if ( !v58 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v8 = a2;
            }
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              v60 = KeGetCurrentPrcb();
              v10 = v60->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v55 = (v61 & v10[5]) == 0;
              v10[5] &= v61;
              if ( v55 )
              {
                KiRemoveSystemWorkPriorityKick(v60);
                v8 = a2;
              }
            }
          }
        }
        __writecr8(OldIrql);
        v6 = v72;
        v11 = MiTrimOrAgeWorkingSet(v15, v8, v72, v10);
        if ( v11 == 1 )
          *(_BYTE *)(a2 + 4) = 2;
        LockHandle.LockQueue.Lock = &SpinLock;
        LockHandle.LockQueue.Next = 0LL;
        v22 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
        {
          v62 = KeGetCurrentPrcb();
          *((_DWORD *)v62->SchedulerAssist + 5) |= (-1 << (v22 + 1)) & 4;
        }
        LockHandle.OldIrql = v22;
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v63 = v24[6];
            v24[6] = v63 + 1;
            if ( v63 == -1 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &SpinLock);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle) )
        {
          KxWaitForLockOwnerShip(&LockHandle);
        }
LABEL_35:
        if ( !v17 || (v25 = 0, (struct _LIST_ENTRY *)v15[12] < Event[2].Header.WaitListHead.Flink) || v15[13] )
          v25 = 1;
        v26 = *((_DWORD *)v15 + 46);
        LOBYTE(v83) = v26;
        if ( v25 )
        {
          HIBYTE(v83) = BYTE1(v26) & 0xF9;
          *((_WORD *)v15 + 92) = v83;
          v27 = *((unsigned __int16 *)v15 + 87);
          v28 = *(_QWORD *)(qword_140C4E648 + 8 * v27) + 6856LL;
          v29 = *(__int64 ***)(*(_QWORD *)(qword_140C4E648 + 8 * v27) + 6864LL);
          if ( *v29 != (__int64 *)v28 )
            goto LABEL_83;
          *v16 = v28;
          v16[1] = (__int64)v29;
          *v29 = v16;
          *(_QWORD *)(v28 + 8) = v16;
          v30 = v15[13];
          if ( v30 )
            KeSignalGate(v30, 1LL);
        }
        else
        {
          v15[4] = (__int64)v7;
          HIBYTE(v83) = BYTE1(v26) | 6;
          v7 = v15 + 4;
          *((_WORD *)v15 + 92) = v83;
        }
        v8 = a2;
        v10 = 0LL;
        if ( v11 == 1 )
          goto LABEL_46;
        v12 = v81;
      }
      else if ( v15[13] )
      {
        v49 = (__int64 **)v9[1];
        if ( *v49 != v9 )
          goto LABEL_83;
        *v16 = (__int64)v9;
        v16[1] = (__int64)v49;
        *v49 = v16;
        v9[1] = (__int64)v16;
      }
      else
      {
        v84 = *((_DWORD *)v15 + 46);
        BYTE1(v84) |= 6u;
        *((_WORD *)v15 + 92) = v84;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v50 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v55 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(v50);
        KeRetryOutswapProcess(v15 - 208);
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v85 = *((_DWORD *)v15 + 46);
        BYTE1(v85) &= 0xF9u;
        *((_WORD *)v15 + 92) = v85;
        MiReturnWsToExpansionList(v15, 0LL);
        v12 = v81;
        v10 = 0LL;
        v8 = a2;
        v6 = v72;
      }
    }
    v31 = (__int64 **)v9[1];
    v32 = (__int64 **)(v15 + 3);
    if ( *v31 != v9 )
      goto LABEL_83;
    *v32 = v9;
    v32[1] = (__int64 *)v31;
    *v31 = (__int64 *)v32;
    v9[1] = (__int64)v32;
LABEL_46:
    v3 = a1;
LABEL_49:
    if ( (v6 & 0x40) != 0 )
    {
      while ( v7 )
      {
        v43 = *((_DWORD *)v7 + 38);
        v44 = v7 - 4;
        v7 = (_QWORD *)*v7;
        *((_WORD *)v44 + 92) = v43 & 0xF9FF;
        MiReturnWsToExpansionList(v44, 1LL);
      }
      v8 = a2;
      v10 = 0LL;
    }
    v5 = Event;
    v35 = v6 | v73;
    v73 |= v6;
    if ( v11 != 1 )
    {
      v36 = v6 & 0xFFFFFF3C | v74;
      Blink = (int)Event[1].Header.WaitListHead.Blink;
      v74 = v36;
      if ( v36 == Blink )
      {
        BYTE1(Event[2].Header.SignalState) = 0;
        if ( (v35 & 5) != 0 )
          LOBYTE(Event[2].Header.SignalState) = 0;
        if ( Blink )
        {
          LODWORD(Event[1].Header.WaitListHead.Blink) = 0;
          KeSetEvent(Event, 0, 0);
        }
        if ( (v35 & 0x83) != 0 )
        {
          Event[100].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 8);
          *(_QWORD *)&Event[101].Header.Lock = *(_QWORD *)(a2 + 16);
          Event[101].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 24);
          Event[101].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 32);
          *(_QWORD *)&Event[102].Header.Lock = *(_QWORD *)(a2 + 40);
          Event[102].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 48);
          Event[102].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 56);
          v38 = *(_QWORD *)(a2 + 64);
          *(_QWORD *)&Event[103].Header.Lock = v38;
          Event[100].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)Event[102].Header.WaitListHead.Blink
                                                                      + v38);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v39 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v65 = KeGetCurrentIrql();
            if ( v65 <= 0xFu && LockHandle.OldIrql <= 0xFu && v65 >= 2u )
            {
              v66 = KeGetCurrentPrcb();
              v67 = v66->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v55 = (v68 & v67[5]) == 0;
              v67[5] &= v68;
              if ( v55 )
                goto LABEL_134;
            }
          }
        }
        goto LABEL_59;
      }
      v6 = v36 ^ Blink;
      v72 = v6;
      if ( (v6 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v8 + 2) = 6;
      continue;
    }
    break;
  }
  BYTE1(Event[2].Header.SignalState) = 0;
  if ( (v35 & 5) != 0 )
    LOBYTE(Event[2].Header.SignalState) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v39 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v69 = KeGetCurrentIrql();
      if ( v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
      {
        v66 = KeGetCurrentPrcb();
        v70 = v66->SchedulerAssist;
        v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v55 = (v71 & v70[5]) == 0;
        v70[5] &= v71;
        if ( v55 )
LABEL_134:
          KiRemoveSystemWorkPriorityKick(v66);
      }
    }
  }
LABEL_59:
  __writecr8(v39);
  return MiLogProcessWorkingSetsStop(v3);
}
