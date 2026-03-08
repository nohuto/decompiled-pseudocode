/*
 * XREFs of KeThawExecution @ 0x14036B200
 * Callers:
 *     ExpWaitForBootDevices @ 0x140607340 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KiEndDebugAccumulation @ 0x14036A1E0 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x14036B330 (KiSendThawExecution.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeThawExecution(char a1)
{
  char v2; // di
  __int64 v3; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  struct _KPRCB *v7; // rcx
  signed __int32 *v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  off_140C01B48[0]();
  if ( !PoAllProcIntrDisabled )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = MmWriteableSharedUserData;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = PerformanceCounter;
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  LOBYTE(v3) = 1;
  KiSendThawExecution(v3);
  v5 = (unsigned __int8)KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
  v6 = __readcr4();
  if ( (v6 & 0x20080) != 0 )
  {
    __writecr4(v6 ^ 0x80);
    __writecr4(v6);
  }
  else
  {
    v11 = __readcr3();
    __writecr3(v11);
  }
  KiEndDebugAccumulation((__int64)KeGetCurrentPrcb());
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( a1 )
  {
    v7 = KeGetCurrentPrcb();
    v8 = (signed __int32 *)v7->SchedulerAssist;
    if ( v8 )
    {
      _m_prefetchw(v8);
      v9 = *v8;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(v8, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v7);
    }
    _enable();
  }
}
