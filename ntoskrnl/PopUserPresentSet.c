/*
 * XREFs of PopUserPresentSet @ 0x14058BAC4
 * Callers:
 *     PopSetSystemState @ 0x14058BA7C (PopSetSystemState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PopResetIdleTime @ 0x1403AF6E8 (PopResetIdleTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopUserPresentSet(__int32 a1)
{
  __int64 result; // rax
  KIRQL v3; // al
  int v4; // ebp
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rbx
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( (PopSimulate & 0x40000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    v4 = PopUserPresentSetStatus;
    v5 = v3;
    KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
    result = DbgkWerCaptureLiveKernelDump((unsigned int)L"UserPresenceSet", 160, 273, v4, PopFullWake, 0LL, 0LL, 0LL, 0);
  }
  if ( byte_140C3CD61 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( dword_140C3D494 )
    {
      if ( !PopUserPresentSetStatus )
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      result = KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v11 <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v13 = v12->SchedulerAssist;
          v10 = ((unsigned int)result & v13[5]) == 0;
          v13[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
      }
      __writecr8(v11);
    }
    else
    {
      PopUserPresentMonitorOnReason = a1;
      if ( !PopUserPresentSetStatus )
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      PopUserPresentSetStatus = 1;
      KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
      if ( KiIrqlFlags )
      {
        v15 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = v16->SchedulerAssist;
          v10 = (v17 & v18[5]) == 0;
          v14 = (unsigned int)v17 & v18[5];
          v18[5] = v14;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
      __writecr8(v11);
      return PopResetIdleTime(2LL, v14);
    }
  }
  return result;
}
