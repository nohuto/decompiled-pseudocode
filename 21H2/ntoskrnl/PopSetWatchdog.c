/*
 * XREFs of PopSetWatchdog @ 0x14026E7A8
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14026EA80 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopCacheDisplayOnPhaseDuration @ 0x140578EDC (PopCacheDisplayOnPhaseDuration.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // r15
  unsigned int v7; // r13d
  KIRQL v8; // di
  __int64 v9; // rax
  char *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  PVOID *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  char v25; // [rsp+60h] [rbp+8h]

  v25 = 0;
  v5 = P;
  v6 = 0LL;
  v7 = 0;
  if ( P )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x44574F50u);
    v5 = result;
    if ( !result )
      return result;
    memset(result, 0, 0x138uLL);
    *((_DWORD *)v5 + 4) = 1146572624;
    *((_QWORD *)v5 + 5) = v5 + 32;
    *((_QWORD *)v5 + 4) = v5 + 32;
    *(_WORD *)(v5 + 25) = 1536;
    *((_DWORD *)v5 + 7) = 1;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 6) = 0LL;
    v5[48] = 8;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_DWORD *)v5 + 27) = 0;
    *((_WORD *)v5 + 52) = 0;
    *((_QWORD *)v5 + 17) = PopWatchdogDpc;
    *((_DWORD *)v5 + 28) = 275;
    *((_QWORD *)v5 + 18) = v5;
    *((_QWORD *)v5 + 21) = 0LL;
    *((_QWORD *)v5 + 16) = 0LL;
    *((_QWORD *)v5 + 24) = PopWatchdogWorker;
    *((_QWORD *)v5 + 25) = v5;
    *((_QWORD *)v5 + 22) = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    v13 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      goto LABEL_23;
    *(_QWORD *)v5 = PopWatchdogList;
    *((_QWORD *)v5 + 1) = &PopWatchdogList;
    *(_QWORD *)(v13 + 8) = v5;
    PopWatchdogList = (__int64)v5;
  }
  if ( *((_DWORD *)v5 + 4) != 1146572624 )
    __fastfail(5u);
  v9 = *a2;
  if ( (_DWORD)v9 && !a3 )
  {
    v11 = 10000 * v9;
    *((_OWORD *)v5 + 14) = *(_OWORD *)a2;
    *((_OWORD *)v5 + 15) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v5 + 16) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 17) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v5 + 36) = *((_QWORD *)a2 + 8);
    v12 = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 37) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 26) = v11 + v12;
    *((_QWORD *)v5 + 38) = KeGetCurrentThread();
    v5[216] = 1;
    if ( !(unsigned __int8)KiSetTimerEx((int)v5 + 48, -(int)v11, 0, 0, (__int64)(v5 + 112)) )
    {
      v5[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
    goto LABEL_10;
  }
  if ( *((_DWORD *)v5 + 58) == 412 && *((_QWORD *)v5 + 30) > 0x20uLL )
  {
    v7 = *((_DWORD *)v5 + 60);
    v25 = 1;
    v6 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)v5 + 37)) / 0xAuLL;
  }
  v5[216] = 0;
  if ( KeCancelTimer((PKTIMER)(v5 + 48)) )
  {
    v5[20] = 0;
    PopUpdateWatchdogNoWorkersEvent(v5);
  }
  if ( !*((_DWORD *)v5 + 7) )
  {
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    KeWaitForSingleObject(v5 + 24, Executive, 0, 0, 0LL);
    v8 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  if ( !a3 )
    goto LABEL_10;
  v14 = *(_QWORD **)v5;
  v15 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v15 != v5 )
LABEL_23:
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  *((_DWORD *)v5 + 4) = 1330532174;
  ExFreePoolWithTag(v5, 0x44574F50u);
  v5 = 0LL;
LABEL_10:
  KxReleaseSpinLock(&PopWatchdogLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && v8 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v20 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v8);
  if ( v25 )
    PopCacheDisplayOnPhaseDuration(v7, v6);
  return v5;
}
