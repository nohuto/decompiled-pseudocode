/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1402E2E30
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x1402E2DD8 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeSetQuantumProcess @ 0x1402E39BC (KeSetQuantumProcess.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14033FBD0 (KiSetBasePriorityAndClearDecrement.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403578B0 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x14045EE2A (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, UCHAR a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  unsigned int v7; // edi
  int v9; // esi
  int v10; // r13d
  char v11; // r14
  __int64 CurrentIrql; // rcx
  int v13; // edi
  _QWORD *v14; // r15
  int v15; // r13d
  _KTHREAD *v16; // rbx
  char v17; // si
  int BasePriority; // r14d
  int v19; // edi
  char Saturation; // al
  char v21; // si
  char v22; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v25; // rax
  _KTHREAD *v26; // rbx
  char v27; // si
  int v28; // ecx
  int v29; // edi
  char v30; // al
  int v31; // esi
  int v32; // eax
  _DISPATCHER_HEADER *volatile v33; // rcx
  int v34; // [rsp+30h] [rbp-50h]
  int Priority; // [rsp+34h] [rbp-4Ch]
  int v36; // [rsp+38h] [rbp-48h]
  int v37; // [rsp+3Ch] [rbp-44h]
  int v38; // [rsp+40h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-38h] BYREF
  int v40; // [rsp+50h] [rbp-30h] BYREF
  int v41; // [rsp+54h] [rbp-2Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+58h] [rbp-28h]
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-20h]
  _QWORD *v44; // [rsp+68h] [rbp-18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-10h]
  __int64 v46; // [rsp+78h] [rbp-8h]
  int v47; // [rsp+C0h] [rbp+40h] BYREF
  char v48; // [rsp+C8h] [rbp+48h]
  unsigned int v49; // [rsp+D8h] [rbp+58h]

  v49 = a4;
  result = (unsigned int)*(char *)(a1 + 640);
  v47 = 0;
  v7 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return v7;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v34 = 0;
    v9 = 1;
    Priority = 0;
    if ( (_DWORD)a2 )
      v9 = a2;
    v48 = 0;
    v39 = 0LL;
    v38 = WORD2(PerfGlobalGroupMask) & 0x2000;
    v10 = 0;
    v11 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v46 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v25) = 4;
      if ( (_BYTE)CurrentIrql != 2 )
        v25 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v25;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( a3 )
      *(_BYTE *)(a1 + 641) = a3;
    v13 = *(char *)(a1 + 640);
    v36 = v13;
    v37 = v9 - v13;
    *(_BYTE *)(a1 + 640) = v9;
    KeFlushProcessWriteBuffers(1);
    v14 = *(_QWORD **)(a1 + 48);
    v44 = (_QWORD *)(a1 + 48);
    if ( v14 != (_QWORD *)(a1 + 48) )
    {
      if ( v9 < 16 )
      {
        v15 = a5;
        while ( 1 )
        {
          v16 = (_KTHREAD *)(v14 - 95);
          if ( a3 )
            v16->SchedulerApc.SpareByte1 = a3;
          v17 = v16 == CurrentThread;
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v16->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v41);
            while ( v16->ThreadLock );
          }
          BasePriority = v16->BasePriority;
          if ( BasePriority <= v13 || BasePriority < 16 )
            break;
          v16->ThreadLock = 0LL;
LABEL_36:
          v14 = (_QWORD *)*v14;
          if ( v14 == v44 )
            goto LABEL_37;
        }
        v19 = BasePriority + v37;
        if ( BasePriority + v37 >= 16 )
        {
          v19 = 15;
        }
        else if ( v19 <= 0 )
        {
          v19 = 1;
        }
        Saturation = v16->Saturation;
        v47 = v19;
        if ( Saturation )
        {
          if ( v36 < 16 )
          {
            v21 = 0;
            goto LABEL_33;
          }
          if ( Saturation > 0 )
            v19 = 15;
          else
            v19 = 1;
          v47 = v19;
        }
        KiSetQuantumTargetThread((__int64)(v14 - 95), (__int64)CurrentPrcb, v17);
        if ( !v15 || (v21 = 0, v19 != BasePriority) )
        {
          v34 = KiSetBasePriorityAndClearDecrement(v14 - 95, &v47, v49);
          v21 = 1;
        }
        v22 = 0;
        if ( v15 )
          v22 = KiApplyForegroundBoostThread(v14 - 95, &v39);
        if ( v21 )
        {
          if ( !v22 )
          {
            Priority = v16->Priority;
            if ( KiSetPriorityThread((__int64)(v14 - 95), (unsigned __int64)&v39, v34) )
            {
              v34 = v16->Priority;
              v48 = 1;
            }
          }
          Queue = v16->Queue;
          if ( Queue && (Queue->Type & 0x7F) == 0x15 )
          {
            KiPriQueueThreadPriorityChanged(Queue, v14 - 95);
            v19 = v47;
            goto LABEL_34;
          }
          v19 = v47;
        }
LABEL_33:
        v16->ThreadLock = 0LL;
LABEL_34:
        if ( v38 )
        {
          if ( v48 )
          {
            v48 = 0;
            EtwTracePriority((_DWORD)v14 - 760, 1328, Priority, v34, 0LL);
          }
          if ( v21 )
          {
            if ( BasePriority != v19 )
              EtwTracePriority((_DWORD)v14 - 760, 1329, BasePriority, v19, (__int64)&v47);
          }
        }
        v13 = v36;
        goto LABEL_36;
      }
      do
      {
        v26 = (_KTHREAD *)(v14 - 95);
        if ( a3 )
          v26->SchedulerApc.SpareByte1 = a3;
        v27 = v26 == CurrentThread;
        v40 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v26->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v40);
          while ( v26->ThreadLock );
        }
        v28 = v26->BasePriority;
        v29 = v28 + v37;
        if ( v28 + v37 >= 16 )
        {
          if ( v29 > 31 )
            v29 = 31;
          v47 = v29;
        }
        else
        {
          v29 = 16;
          v47 = 16;
        }
        v30 = v26->Saturation;
        if ( v30 )
        {
          if ( v36 >= 16 )
          {
            v31 = Priority;
LABEL_82:
            v26->ThreadLock = 0LL;
            goto LABEL_83;
          }
          if ( v30 <= 0 )
            v47 = 16;
          else
            v47 = 31;
        }
        v10 = v28;
        KiSetQuantumTargetThread((__int64)(v14 - 95), (__int64)CurrentPrcb, v27);
        v32 = KiSetBasePriorityAndClearDecrement(v14 - 95, &v47, 0LL);
        v31 = v26->Priority;
        Priority = v31;
        v34 = v32;
        v11 = 1;
        if ( KiSetPriorityThread((__int64)(v14 - 95), (unsigned __int64)&v39, v32) )
        {
          v34 = v26->Priority;
          v48 = 1;
        }
        v33 = v26->Queue;
        if ( !v33 || (v33->Type & 0x7F) != 0x15 )
        {
          v29 = v47;
          goto LABEL_82;
        }
        KiPriQueueThreadPriorityChanged(v33, v14 - 95);
        v29 = v47;
LABEL_83:
        if ( v38 )
        {
          if ( v48 )
          {
            v48 = 0;
            EtwTracePriority((_DWORD)v14 - 760, 1328, v31, v34, 0LL);
          }
          if ( v11 )
          {
            v11 = 0;
            if ( v10 != v29 )
              EtwTracePriority((_DWORD)v14 - 760, 1329, v10, v29, (__int64)&v47);
          }
        }
        v14 = (_QWORD *)*v14;
      }
      while ( v14 != v44 );
    }
LABEL_37:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v39, v46);
    return (unsigned int)v36;
  }
  return result;
}
