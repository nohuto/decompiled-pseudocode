/*
 * XREFs of MiProcessDereferenceList @ 0x140622C74
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403A2790 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1406236E4 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiProcessingPageExtendComplete @ 0x140623220 (MiProcessingPageExtendComplete.c)
 *     MiRemoveUnusedSegments @ 0x1406236E4 (MiRemoveUnusedSegments.c)
 *     MiAttemptPageFileReduction @ 0x140635794 (MiAttemptPageFileReduction.c)
 *     MiFreeClonePool @ 0x14066213C (MiFreeClonePool.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x140A2FD7C (MiExtendPagingFiles.c)
 */

__int64 __fastcall MiProcessDereferenceList(__int64 a1, int a2)
{
  volatile LONG *v3; // r14
  KIRQL v4; // bl
  __int64 *v5; // r13
  __int64 *v6; // rdi
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 *v13; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  __int64 **v18; // r12
  __int64 *v19; // rax
  __int64 v20; // rcx
  struct _KEVENT *v21; // rdi
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  struct _KEVENT *v26; // rcx
  __int128 v27; // xmm0
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  KIRQL v32; // al
  int v33; // ecx
  _QWORD **v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // r15
  __int128 v38; // xmm0
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int64 result; // rax
  _OWORD v48[6]; // [rsp+20h] [rbp-60h] BYREF
  int v49; // [rsp+C0h] [rbp+40h]

  memset(v48, 0, 0x58uLL);
  v49 = 0;
  v3 = (volatile LONG *)(a1 + 1408);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  v5 = (__int64 *)(a1 + 1616);
  do
  {
    while ( 1 )
    {
      v6 = (__int64 *)*v5;
      if ( (__int64 *)*v5 == v5 )
        break;
      v7 = *v6;
      if ( (__int64 *)v6[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
LABEL_84:
        __fastfail(3u);
      *v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        *((_DWORD *)v6 + 12) &= ~0x10000000u;
        v6[1] = (__int64)v6;
        *v6 = (__int64)v6;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 + 16);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v4);
        MiSegmentDelete(v6 - 1);
        v3 = (volatile LONG *)(a1 + 1408);
      }
      else
      {
        v13 = (__int64 *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5 )
          goto LABEL_84;
        *v6 = (__int64)v13;
        v3 = (volatile LONG *)(a1 + 1408);
        v6[1] = (__int64)v5;
        v13[1] = (__int64)v6;
        *v5 = (__int64)v6;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
        if ( KiIrqlFlags )
        {
          v14 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && v4 <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v12 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
        __writecr8(v4);
      }
      v4 = ExAcquireSpinLockExclusive(v3);
    }
    v18 = (__int64 **)(a1 + 1648);
    while ( 1 )
    {
      v19 = *v18;
      if ( *v18 == (__int64 *)v18 )
        break;
      v20 = *v19;
      if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
        goto LABEL_84;
      *v18 = (__int64 *)v20;
      v21 = (struct _KEVENT *)(v19 - 1);
      *(_QWORD *)(v20 + 8) = v18;
      if ( v19[3] == -1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992)) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
          if ( KiIrqlFlags )
          {
            v22 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && v4 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = v23->SchedulerAssist;
              v25 = ~(unsigned __int16)(-1LL << (v4 + 1));
              v12 = (v25 & v24[5]) == 0;
              v24[5] &= v25;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)v23);
            }
          }
          __writecr8(v4);
          MiAttemptPageFileReduction(v21);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992));
          v3 = (volatile LONG *)(a1 + 1408);
          v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
        }
        else
        {
          v3 = (volatile LONG *)(a1 + 1408);
        }
        if ( (v21[3].Header.SignalState & 0x10000000) == 0 )
        {
          v26 = v21 + 2;
          goto LABEL_52;
        }
      }
      else
      {
        v48[0] = *(_OWORD *)&v21->Header.Lock;
        v48[1] = *(_OWORD *)&v21->Header.WaitListHead.Blink;
        v48[2] = v21[1].Header.WaitListHead;
        v48[3] = *(_OWORD *)&v21[2].Header.Lock;
        v27 = *(_OWORD *)&v21[2].Header.WaitListHead.Blink;
        *(_QWORD *)&v48[5] = v19 - 1;
        v48[4] = v27;
        v21[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v48;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v4 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v12 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v29);
          }
        }
        __writecr8(v4);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992)) )
        {
          MiExtendPagingFiles(v48);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992));
        }
        v32 = MiProcessingPageExtendComplete(v48, v21, a1);
        --*(_DWORD *)(a1 + 2092);
        v4 = v32;
        if ( *(_DWORD *)(a1 + 2088) )
        {
          v26 = (struct _KEVENT *)(a1 + 2096);
LABEL_52:
          KeSetEvent(v26, 0, 0);
        }
      }
    }
    v33 = a2;
    v34 = (_QWORD **)(a1 + 1632);
    if ( !a2 )
      continue;
    while ( 2 )
    {
      v35 = *v34;
      if ( *v34 != v34 )
      {
        v36 = *v35;
        if ( (_QWORD **)v35[1] != v34 || *(_QWORD **)(v36 + 8) != v35 )
          goto LABEL_84;
        *v34 = (_QWORD *)v36;
        v37 = v35 - 1;
        *(_QWORD *)(v36 + 8) = v34;
        v48[0] = *(_OWORD *)(v35 - 1);
        v48[1] = *(_OWORD *)(v35 + 1);
        v48[2] = *(_OWORD *)(v35 + 3);
        v48[3] = *(_OWORD *)(v35 + 5);
        v38 = *(_OWORD *)(v35 + 7);
        *(_QWORD *)&v48[5] = v35 - 1;
        v48[4] = v38;
        v35[9] = v48;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
        if ( KiIrqlFlags )
        {
          v39 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && v4 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v12 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
        __writecr8(v4);
        if ( (unsigned int)MiRemoveUnusedSegments(a1, *(_QWORD *)&v48[2]) )
        {
          v49 = 1;
          goto LABEL_67;
        }
        if ( v49 )
LABEL_67:
          *((_QWORD *)&v48[2] + 1) = 1LL;
        v4 = MiProcessingPageExtendComplete(v48, v37, a1);
        continue;
      }
      break;
    }
    v19 = *v18;
    v3 = (volatile LONG *)(a1 + 1408);
    v33 = a2;
  }
  while ( (__int64 *)*v5 != v5 || v33 && *v34 != v34 || v19 != (__int64 *)v18 );
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v4 <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << (v4 + 1));
      v12 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v44);
    }
  }
  result = v4;
  __writecr8(v4);
  if ( *(_DWORD *)(a1 + 2044) )
  {
    KeResetEvent((PRKEVENT)(a1 + 2040));
    return MiFreeClonePool(a1);
  }
  return result;
}
