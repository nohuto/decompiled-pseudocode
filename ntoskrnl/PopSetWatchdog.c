/*
 * XREFs of PopSetWatchdog @ 0x1402BDFEC
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BE330 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCacheDisplayOnPhaseDuration @ 0x140597524 (PopCacheDisplayOnPhaseDuration.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  char *v5; // rdi
  unsigned __int64 v6; // r12
  unsigned int v7; // r13d
  KIRQL v8; // si
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  char *result; // rax
  __int64 v13; // rbx
  __int64 v14; // xmm0_8
  __int64 InterruptTimePrecise; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  PVOID *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  LARGE_INTEGER v28; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER v29; // [rsp+38h] [rbp-40h] BYREF
  LARGE_INTEGER v30; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER v31; // [rsp+48h] [rbp-30h] BYREF
  char v32; // [rsp+80h] [rbp+8h]
  LARGE_INTEGER v33; // [rsp+98h] [rbp+20h] BYREF

  v32 = 0;
  v5 = P;
  v6 = 0LL;
  v7 = 0;
  if ( P )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePool2(64LL, 384LL, 1146572624LL);
    v5 = result;
    if ( !result )
      return result;
    *((_DWORD *)result + 4) = 1146572624;
    *((_WORD *)result + 12) = 0;
    result[26] = 6;
    *((_DWORD *)result + 7) = 1;
    v16 = result + 32;
    v16[1] = v16;
    *v16 = v16;
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
    v17 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      goto LABEL_24;
    *(_QWORD *)v5 = PopWatchdogList;
    *((_QWORD *)v5 + 1) = &PopWatchdogList;
    *(_QWORD *)(v17 + 8) = v5;
    PopWatchdogList = (__int64)v5;
  }
  if ( *((_DWORD *)v5 + 4) != 1146572624 )
    __fastfail(5u);
  v9 = *a2;
  if ( (_DWORD)v9 && !a3 )
  {
    v13 = 10000 * v9;
    *(_OWORD *)(v5 + 216) = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 232) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v5 + 248) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v5 + 264) = *((_OWORD *)a2 + 3);
    v14 = *((_QWORD *)a2 + 8);
    v33.QuadPart = 0LL;
    *((_QWORD *)v5 + 35) = v14;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v33);
    *((_QWORD *)v5 + 37) = InterruptTimePrecise;
    *((_QWORD *)v5 + 38) = v13 + InterruptTimePrecise;
    *((_QWORD *)v5 + 36) = KeGetCurrentThread();
    *((_WORD *)v5 + 104) = 1;
    if ( !(unsigned __int8)KiSetTimerEx((__int64)(v5 + 48), -v13, 0, 0, (__int64)(v5 + 112)) )
    {
      v5[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
    v28.QuadPart = 0LL;
    *((_QWORD *)v5 + 39) = RtlGetInterruptTimePrecise(&v28);
    goto LABEL_10;
  }
  v29.QuadPart = 0LL;
  v10 = RtlGetInterruptTimePrecise(&v29);
  v11 = *((_DWORD *)v5 + 56) == 412;
  *((_QWORD *)v5 + 40) = v10;
  if ( v11 && *((_QWORD *)v5 + 29) > 0x20uLL )
  {
    v7 = *((_DWORD *)v5 + 58);
    v32 = 1;
    v6 = (v10 - *((_QWORD *)v5 + 37)) / 0xAuLL;
  }
  v5[208] = 0;
  if ( KeCancelTimer((PKTIMER)(v5 + 48)) )
  {
    v5[20] = 0;
    PopUpdateWatchdogNoWorkersEvent(v5);
  }
  v30.QuadPart = 0LL;
  *((_QWORD *)v5 + 40) = RtlGetInterruptTimePrecise(&v30);
  if ( !*((_DWORD *)v5 + 7) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v11 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    KeWaitForSingleObject(v5 + 24, Executive, 0, 0, 0LL);
    v8 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  v31.QuadPart = 0LL;
  *((_QWORD *)v5 + 42) = RtlGetInterruptTimePrecise(&v31);
  *((_QWORD *)v5 + 36) = 0LL;
  if ( !a3 )
    goto LABEL_10;
  v18 = *(_QWORD **)v5;
  v19 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v19 != v5 )
LABEL_24:
    __fastfail(3u);
  *v19 = v18;
  v18[1] = v19;
  *((_DWORD *)v5 + 4) = 1330532174;
  ExFreePoolWithTag(v5, 0x44574F50u);
  v5 = 0LL;
LABEL_10:
  KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
  if ( KiIrqlFlags )
  {
    v24 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && v8 <= 0xFu && v24 >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (v8 + 1));
      v11 = (v27 & v26[5]) == 0;
      v26[5] &= v27;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  __writecr8(v8);
  if ( v32 )
    PopCacheDisplayOnPhaseDuration(v7, v6);
  return v5;
}
