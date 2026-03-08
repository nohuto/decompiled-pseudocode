/*
 * XREFs of KeFreezeExecution @ 0x14036ADA0
 * Callers:
 *     ExpWaitForBootDevices @ 0x140607340 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiStartDebugAccumulation @ 0x1403694D0 (KiStartDebugAccumulation.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x14036B174 (RtlWriteTryAcquireTickLock.c)
 *     KiSetDebuggerOwner @ 0x14036B4E0 (KiSetDebuggerOwner.c)
 *     KiSendFreeze @ 0x14036B528 (KiSendFreeze.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  char v2; // bl
  bool v3; // r14
  unsigned __int8 CurrentIrql; // r15
  int v5; // esi
  char v6; // bp
  unsigned int v7; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  signed __int64 v12; // rbx
  __int64 v13; // rbx
  LARGE_INTEGER v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r8
  _DWORD *v19; // r9
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-168h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-160h] BYREF
  __int128 v23; // [rsp+30h] [rbp-158h] BYREF
  __int64 v24; // [rsp+40h] [rbp-148h]
  _QWORD v25[34]; // [rsp+50h] [rbp-138h] BYREF
  int v26; // [rsp+180h] [rbp-8h]

  memset(v25, 0, 0x108uLL);
  v21 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v0 = v26;
  v23 = 0LL;
  v24 = 0LL;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v2 = 1;
  v3 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v19 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v20) = 0x8000;
    else
      v20 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v19[5] |= v20;
  }
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_5:
    v5 = 750000;
    do
    {
      v6 = KxTryToAcquireSpinLock(&KdDebuggerLock);
      if ( v6 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_5;
      KeStallExecutionProcessor(4u);
      --v5;
    }
    while ( v5 );
    v7 = v6 != 0 ? 4 * (750000 - v5) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v6 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v6;
    else
      KiFreezeFlag |= 8u;
    if ( v7 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v7;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation((__int64)CurrentPrcb);
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C01B48[0])(v9, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v10 = 20000;
      else
        v10 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      LODWORD(v25[0]) = 2097153;
      memset((char *)v25 + 4, 0, 0x104uLL);
      KiCopyAffinityEx((__int64)v25, 0x20u, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)v25, CurrentPrcb->Number);
      if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) == 3 )
        v2 = 0;
      LOBYTE(v11) = v2;
      KiSendFreeze(v25, v11);
      *((_QWORD *)&v23 + 1) = v25[1];
      *(_QWORD *)&v23 = v25;
LABEL_20:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v21, (unsigned __int16 **)&v23) )
      {
        v12 = KiProcessorBlock[v21];
        while ( *(_DWORD *)(v12 + 11656) != 2 )
        {
          if ( !v10 )
          {
            KiFreezeFlag |= 2u;
            _InterlockedCompareExchange64(&KiFreezeSkippedProcessor, v12, 0LL);
            goto LABEL_20;
          }
          KeStallExecutionProcessor(0x32u);
          --v10;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled )
    {
      v13 = MmWriteableSharedUserData;
      if ( (unsigned __int8)RtlWriteTryAcquireTickLock(MmWriteableSharedUserData + 832) )
      {
        v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v15 = MmWriteableSharedUserData;
        v16 = (unsigned int)KeMaximumIncrement;
        v17 = MEMORY[0xFFFFF78000000008]
            + 10000000 * (v14.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
        *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v17);
        *(_QWORD *)(v15 + 8) = v17;
        if ( (_DWORD)v16 )
        {
          KiTickOffset = v16 * (v17 / v16 + 1) - v17;
          *(_DWORD *)(v15 + 808) = (v17 / v16) >> 32;
          *(_QWORD *)(v15 + 800) = v17 / v16;
        }
        ++*(_QWORD *)(v13 + 832);
      }
    }
  }
  return v3;
}
