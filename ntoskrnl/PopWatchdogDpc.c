/*
 * XREFs of PopWatchdogDpc @ 0x1403D0E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BE330 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  LARGE_INTEGER v8[3]; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v9; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  v9.QuadPart = 0LL;
  *(_QWORD *)(a2 + 344) = RtlGetInterruptTimePrecise(&v9);
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a2 + 208) && !*(_BYTE *)(a2 + 21) )
  {
    v8[0].QuadPart = 0LL;
    *(_BYTE *)(a2 + 21) = 1;
    *(_QWORD *)(a2 + 352) = RtlGetInterruptTimePrecise(v8);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), RealTimeWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
