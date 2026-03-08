/*
 * XREFs of KiStartRescheduleContext @ 0x140258AD0
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14040B280 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 */

char __fastcall KiStartRescheduleContext(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v5; // r14
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  int v8; // r14d
  struct _KPRCB **v9; // r8
  unsigned int v10; // r12d
  unsigned int v11; // esi
  unsigned __int8 *v12; // rbx
  __int64 v13; // rbp
  struct _KPRCB *v14; // r13
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // r15
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  char v19; // cl
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  char result; // al
  char v23; // al
  unsigned int v24; // r8d
  _QWORD *v25; // rdx
  _BYTE *v26; // rdi
  __int64 v27; // rcx
  char v28; // [rsp+70h] [rbp+8h]
  struct _KPRCB **v29; // [rsp+78h] [rbp+10h]
  unsigned __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = *a2;
  v6 = a3;
  v7 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v31 = v7;
  v8 = v5 & 1;
  if ( v8 )
  {
    v9 = (struct _KPRCB **)(*(_QWORD *)(v7 + 34904) + 8LL);
    v29 = v9;
    v11 = **(unsigned __int8 **)(v7 + 34904);
    v10 = 0;
    if ( !**(_BYTE **)(v7 + 34904) )
      goto LABEL_16;
  }
  else
  {
    v9 = (struct _KPRCB **)&v31;
    v10 = 0;
    v29 = (struct _KPRCB **)&v31;
    v11 = 1;
  }
  v12 = (unsigned __int8 *)(a1 + 48);
  v13 = v11;
  do
  {
    *((_OWORD *)v12 - 2) = 0LL;
    *((_OWORD *)v12 - 1) = 0LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 - 1) = -1LL;
    v12[4] = 63;
    v14 = *v9;
    *((_QWORD *)v12 - 4) = *v9;
    SharedReadyQueue = v14->SharedReadyQueue;
    if ( (v14->IdleState & 8) != 0 && (v14->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
      SharedReadyQueue = 0LL;
    *((_QWORD *)v12 - 3) = SharedReadyQueue;
    NextThread = (ULONG_PTR)v14->NextThread;
    *((_QWORD *)v12 - 2) = NextThread;
    if ( !NextThread )
    {
      NextThread = (ULONG_PTR)v14->CurrentThread;
      *((_QWORD *)v12 - 2) = NextThread;
    }
    if ( v14->NextThread == (_KTHREAD *)NextThread )
    {
      *v12 |= 4u;
    }
    else
    {
      v17 = *v12;
      if ( v14 == KeGetCurrentPrcb() )
        v18 = v17 | 4;
      else
        v18 = v17 & 0xFB;
      *v12 = v18;
    }
    v19 = 0;
    v28 = 0;
    if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 )
    {
      if ( NextThread != v6 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
          goto LABEL_12;
        v19 = 1;
        v28 = 1;
      }
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 && *(_DWORD *)(NextThread + 536) == v14->Number )
      {
        if ( *(_BYTE *)(NextThread + 388) == 2
          || *(_BYTE *)(NextThread + 388) == 3
          || *(_BYTE *)(NextThread + 388) == 5
          && (v23 = *(_BYTE *)(NextThread + 112) & 7, v23 != 1)
          && (unsigned __int8)(v23 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(NextThread);
          v9 = v29;
          v3 = 0LL;
          v19 = v28;
          v6 = a3;
        }
      }
      if ( v19 )
        *(_QWORD *)(NextThread + 64) = 0LL;
    }
LABEL_12:
    v20 = ((v14->IdleState & 1) == 0) | *v12 & 0xFE;
    *v12 = v20;
    v21 = v20 ^ (v20 ^ (v14->PriorityState->AllFields >> 6)) & 2;
    *v12 = v21;
    if ( ((v21 >> 1) & 1u) > v10 )
      v10 = (v21 >> 1) & 1;
    ++v9;
    v12 += 40;
    v29 = v9;
    --v13;
  }
  while ( v13 );
  v7 = v31;
LABEL_16:
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 4) = v10;
  *(_BYTE *)a1 = v11;
  if ( v8 )
    result = *(_BYTE *)(*(_QWORD *)(v7 + 34904) + 1LL);
  else
    result = 0;
  *(_BYTE *)(a1 + 1) = result;
  if ( v10 )
  {
    v24 = 0;
    if ( v11 )
    {
      v25 = (_QWORD *)(a1 + 16);
      while ( v25[2] == *(_QWORD *)(*v25 + 34944LL) )
      {
        ++v24;
        v25 += 5;
        if ( v24 >= v11 )
          goto LABEL_48;
      }
      v3 = v25;
LABEL_48:
      v26 = (_BYTE *)(a1 + 48);
      v27 = v11;
      do
      {
        result = (_BYTE)v26 - 32;
        if ( v26 - 32 != (_BYTE *)v3 )
        {
          *((_QWORD *)v26 - 2) = v3[2];
          result = *((_BYTE *)v3 + 32) | 0x20;
          *v26 = result;
        }
        v26 += 40;
        --v27;
      }
      while ( v27 );
    }
  }
  return result;
}
