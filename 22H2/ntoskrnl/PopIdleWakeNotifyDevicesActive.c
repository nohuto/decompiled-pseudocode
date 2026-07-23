/*
 * XREFs of PopIdleWakeNotifyDevicesActive @ 0x14057B5B8
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14056B9CC (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopIdleWakeNotifyDevicesActive(unsigned __int8 a1)
{
  int v1; // esi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  int v5; // edx
  LARGE_INTEGER v6; // rcx
  LONGLONG v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 && (*(_DWORD *)PopIdleWakeContext & 1) != v1 )
    {
      v5 = *(_DWORD *)PopIdleWakeContext ^ ((unsigned __int8)*(_DWORD *)PopIdleWakeContext ^ (unsigned __int8)v1) & 1;
      *(_DWORD *)PopIdleWakeContext = v5;
      if ( (v5 & 2) == 0 )
      {
        RtlGetInterruptTimePrecise(&PerformanceCounter);
        v6 = PerformanceCounter;
        v7 = PerformanceCounter.QuadPart - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6.QuadPart;
      }
    }
  }
  KxReleaseSpinLock(&PopIdleWakeContextLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
