/*
 * XREFs of PopIdleWakeNotifyModernStandbyEnter @ 0x14057BB1C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PopIdleWakeNotifyModernStandbyEnter()
{
  __int64 result; // rax
  char *v1; // rdi
  unsigned int v2; // r14d
  char *v3; // rbp
  int *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v9; // zf

  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4510uLL, 0x67696450u);
  v1 = (char *)result;
  if ( result )
  {
    memset((void *)result, 0, 0x4510uLL);
    v2 = 0;
    v3 = v1 + 428;
    do
    {
      v4 = (int *)(v3 - 148);
      memset(v3 - 148, 0, 0x2B8uLL);
      *(_QWORD *)(v3 + 172) = -1LL;
      *((_DWORD *)v3 - 1) = 1310721;
      v3 += 696;
      v5 = 7;
      if ( v2 <= 4 )
        v5 = v2;
      ++v2;
      *v4 = v5;
    }
    while ( v2 < 0x19 );
    v6 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
    PopIdleWakeContext = v1;
    KxReleaseSpinLock(&PopIdleWakeContextLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return result;
}
