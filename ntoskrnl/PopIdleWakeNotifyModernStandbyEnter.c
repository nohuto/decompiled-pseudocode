/*
 * XREFs of PopIdleWakeNotifyModernStandbyEnter @ 0x1403C2CD0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 PopIdleWakeNotifyModernStandbyEnter()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  _QWORD *v3; // rax
  unsigned int v4; // esi
  unsigned int *v5; // r14
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  signed __int32 v8; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf
  void *v12; // [rsp+50h] [rbp+8h]

  result = ExAllocatePool2(64LL, 38176LL, 1734960208LL);
  v12 = (void *)result;
  v1 = result;
  if ( result )
  {
    *(_QWORD *)(result + 38056) = result;
    *(_QWORD *)(result + 38048) = PopIdleWakeNotifyModernStandbyExitWorker;
    *(_QWORD *)(result + 38032) = 0LL;
    *(_QWORD *)(result + 38104) = PopIdleWakeDelayedWakeSourceReferencer;
    v2 = result + 292;
    *(_DWORD *)(result + 38080) = 275;
    v3 = (_QWORD *)(result + 38152);
    *(_QWORD *)(v1 + 38112) = v1;
    *(_QWORD *)(v1 + 38136) = 0LL;
    v4 = 0;
    *(_QWORD *)(v1 + 38096) = 0LL;
    *(_WORD *)(v1 + 38144) = 0;
    *(_BYTE *)(v1 + 38146) = 6;
    *(_DWORD *)(v1 + 38148) = 1;
    v3[1] = v3;
    *v3 = v3;
    do
    {
      v5 = (unsigned int *)(v2 - 148);
      memset((void *)(v2 - 148), 0, 0x4A0uLL);
      *(_QWORD *)(v2 + 276) = -1LL;
      *(_QWORD *)(v2 + 660) = -1LL;
      *(_QWORD *)(v2 - 4) = 2097153LL;
      memset((void *)(v2 + 4), 0, 0x100uLL);
      if ( v4 <= 0xB )
      {
        *v5 = v4;
        do
        {
          v8 = _InterlockedIncrement(&PopIdleWakeNextToken);
          *(_DWORD *)(v2 + 260) = v8;
        }
        while ( v8 == -1 );
      }
      else
      {
        *v5 = 130;
      }
      ++v4;
      v2 += 1184LL;
    }
    while ( v4 < 0x20 );
    v6 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
    PopIdleWakeContext = v12;
    v7 = v6;
    result = KxReleaseSpinLock((volatile signed __int64 *)&PopIdleWakeContextLock);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v7 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  return result;
}
