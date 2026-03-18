/*
 * XREFs of PopSystemIrpCompletion @ 0x140A50A10
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x1403B1020 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     IoFindDeviceThatFailedIrp @ 0x140259568 (IoFindDeviceThatFailedIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403945DC (PopCompleteNotifyTransitionCommon.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140394878 (PopFxIncrementDeviceSleepCount.c)
 *     PopFreeIrp @ 0x1403A4DCC (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1403A4EC4 (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceIrpPended @ 0x1405D31E8 (PopDiagTraceIrpPended.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 DeviceThatFailedIrp; // rdi
  char v5; // bp
  __int64 *v6; // r14
  int v7; // ebx
  int v8; // ebp
  NTSTATUS v9; // eax
  PRKSEMAPHORE *v10; // rbx
  KIRQL v12; // al
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  IRP *v24; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS Status; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v27[2]; // [rsp+40h] [rbp-38h] BYREF

  DeviceThatFailedIrp = 0LL;
  v5 = PopErrataDisablePrimaryDeviceFastResume;
  v6 = *(__int64 **)(a3 + 216);
  v7 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v26 = 0;
    v27[0] = &v24;
    v24 = a2;
    v27[1] = 16LL;
    EtwTraceKernelEvent((__int64)v27, 1u, 0x80008000, 0x1227u, 0x401802u);
  }
  if ( !PopPoFxSystemIrpWaitForReportDevicePoweredReg && !v5 || v7 != 1 )
    goto LABEL_6;
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6 - 18);
  v13 = *(v6 - 10);
  v14 = v12;
  if ( !v13
    || !*(_QWORD *)(v13 + 136)
    || (_m_prefetchw((const void *)(v13 + 32)), (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) & 0x800) == 0) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 - 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
LABEL_6:
    v8 = a2->IoStatus.Status;
    if ( ((DWORD1(PopCurrentBroadcast) >> 23) & 1) != 0 || v8 >= 0 )
    {
      v9 = 0;
      if ( ((DWORD1(PopCurrentBroadcast) >> 23) & 1) == 0 )
        v9 = a2->IoStatus.Status;
      v8 = v9;
    }
    else
    {
      DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
    }
    PopDequeueQuerySetIrp((__int64)a2);
    PopFreeIrp(a2);
    v10 = (PRKSEMAPHORE *)qword_140C22750;
    if ( (unsigned __int8)(*(_BYTE *)qword_140C22750 - 2) <= 1u && *((int *)qword_140C22750 + 1) > 1 )
    {
      PopFxIncrementDeviceSleepCount(*(v6 - 16));
      ObfDereferenceObjectWithTag((PVOID)*(v6 - 16), 0x72496F50u);
    }
    PopCompleteNotifyTransitionCommon((__int64)v10, v6, v8, DeviceThatFailedIrp);
    KeReleaseSemaphore(v10[5], 0, 1, 0);
    return 3221225494LL;
  }
  _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x400u);
  PopDiagTraceIrpPended((__int64)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 - 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  __writecr8(v14);
  return 3221225494LL;
}
