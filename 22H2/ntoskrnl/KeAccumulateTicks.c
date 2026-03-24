/*
 * XREFs of KeAccumulateTicks @ 0x1402243D0
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x140227590 (KiUpdateRunTime.c)
 * Callees:
 *     KiCheckForTimerExpiration @ 0x1402247B0 (KiCheckForTimerExpiration.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14024CE70 (KiGetThreadEffectiveRankNonZero.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F1418 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiCheckKeepAlive @ 0x140310D70 (KiCheckKeepAlive.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KdCheckForDebugBreak @ 0x140383F80 (KdCheckForDebugBreak.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404F1740 (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x140511F60 (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(__int64 a1, int a2, int a3, unsigned __int8 a4, char a5)
{
  char v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rbp
  unsigned int v14; // edi
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v19; // ecx
  int v20; // eax
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v25; // r13
  unsigned int v26; // ecx
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rdx
  size_t v34; // r8

  v9 = 0;
  result = KiCheckForTimerExpiration();
  *(_DWORD *)(a1 + 12596) = a3;
  v12 = a3 - a2;
  if ( !v12 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_18;
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v25 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v26 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v26 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v26) = 0;
      KiClockCheckSlot = v26;
      if ( (unsigned __int8)KiCheckKeepAlive(*(unsigned int *)(v25 + 36)) )
      {
        if ( !*(_DWORD *)(v25 + 31712) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v25, BugCheckParameter4);
        }
        *(_DWORD *)(v25 + 31712) = 0;
      }
    }
  }
  if ( a5 )
  {
    *(_DWORD *)(a1 + 32392) += v12;
    *(_DWORD *)(v13 + 732) += v12;
  }
  else
  {
    *(_DWORD *)(a1 + 32388) += v12;
    if ( *(_BYTE *)(a1 + 32) == 2 && *(_BYTE *)(a1 + 12586) )
    {
      v27 = *(_DWORD *)(a1 + 32412);
      *(_DWORD *)(a1 + 32396) += v12;
      v28 = v27 + 1;
      v29 = *(_DWORD *)(a1 + 32416);
      *(_DWORD *)(a1 + 32412) = v28;
      if ( v29 )
      {
        v30 = *(_DWORD *)(a1 + 32512);
        v31 = v28;
        if ( v30 && v28 >= v30 )
        {
          KiDpcWatchdogCaptureStack(a1, v28);
          v31 = *(_DWORD *)(a1 + 32412);
          v9 = 1;
          v29 = *(_DWORD *)(a1 + 32416);
        }
        if ( v31 > v29 )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(3LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
              KeBugCheckEx(
                0x133u,
                0LL,
                *(unsigned int *)(a1 + 32412),
                *(unsigned int *)(a1 + 32416),
                (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
            __int2c();
          }
          *(_DWORD *)(a1 + 32412) = 0;
          KiResetGlobalDpcWatchdogProfiler(a1);
        }
      }
    }
    else if ( *(_BYTE *)(a1 + 32) > 1u )
    {
      *(_DWORD *)(a1 + 32400) += v12;
    }
    else
    {
      *(_DWORD *)(v13 + 652) += v12;
    }
    if ( a4 < 2u )
    {
      ++*(_DWORD *)(a1 + 31788);
      v15 = *(void **)(a1 + 33960);
      *(_DWORD *)(a1 + 31724) = 0;
      if ( v15 && *(void **)(a1 + 33968) != v15 && *(int *)(a1 + 31732) > 0 )
      {
        v34 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        *(_QWORD *)(a1 + 33968) = v15;
        memset(v15, 0, v34);
      }
      goto LABEL_12;
    }
    v19 = *(_DWORD *)(a1 + 31720);
    v20 = *(_DWORD *)(a1 + 31724) + 1;
    *(_DWORD *)(a1 + 31724) = v20;
    if ( !v19 )
      goto LABEL_12;
    v21 = *(_DWORD *)(a1 + 31732);
    v22 = v20;
    v23 = v19;
    if ( v21 && v20 >= v21 && !v9 )
    {
      KiDpcWatchdogCaptureStack(a1, (unsigned int)v20);
      v22 = *(_DWORD *)(a1 + 31724);
      v23 = *(_DWORD *)(a1 + 31720);
    }
    if ( v22 < v23 )
      goto LABEL_12;
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(2LL, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
        KeBugCheckEx(0x133u, 1uLL, *(int *)(a1 + 31720), (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
      __int2c();
    }
  }
  ++*(_DWORD *)(a1 + 31788);
  *(_DWORD *)(a1 + 31724) = 0;
  KiResetGlobalDpcWatchdogProfiler(a1);
LABEL_12:
  if ( v13 != *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 32) <= 1u
    && (*(char *)(v13 + 195) < 16
     && *(_QWORD *)(v13 + 104)
     && (v32 = *(_QWORD *)(v13 + 104)) != 0
     && (v33 = *(unsigned int *)(a1 + 216) + v32) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero(v13, v33, 0, 0, 0LL)
     || *(char *)(v13 + 195) < 8) )
  {
    *(_DWORD *)(a1 + 32428) += v12;
  }
  if ( v12 < 8 )
  {
    *(_DWORD *)(a1 + 11684) += 15 * (*(_DWORD *)(a1 + 32384) - *(_DWORD *)(a1 + 11680));
    v14 = *(_DWORD *)(a1 + 11684);
    v16 = v12;
    do
    {
      v14 >>= 4;
      --v16;
    }
    while ( v16 );
  }
  *(_DWORD *)(a1 + 11684) = v14;
  v11 = v12;
  *(_DWORD *)(a1 + 11680) = *(_DWORD *)(a1 + 32384);
  v17 = (unsigned int)(*(_DWORD *)(a1 + 12572) + *(_DWORD *)(a1 + 12508) - *(_DWORD *)(a1 + 12580)) >> v12;
  *(_DWORD *)(a1 + 12572) = v17;
  *(_DWORD *)(a1 + 12580) = *(_DWORD *)(a1 + 12508);
  result = *(unsigned int *)(a1 + 12504);
  if ( !(_DWORD)result || (v11 = *(unsigned __int16 *)(a1 + 12588), (v11 & 3) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 32404))-- == 1 )
    {
      *(_DWORD *)(a1 + 32404) = KiAdjustDpcThreshold;
      result = *(unsigned int *)(a1 + 12568);
      if ( (unsigned int)result < KiMaximumDpcQueueDepth )
      {
        result = (unsigned int)(result + 1);
        *(_DWORD *)(a1 + 12568) = result;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 32404) = KiAdjustDpcThreshold;
    if ( (v11 & 0x2F) == 0 )
    {
      LOBYTE(v17) = 2;
      KiRequestSoftwareInterrupt(a1, v17);
    }
    v11 = *(unsigned int *)(a1 + 12568);
    result = (unsigned int)KiIdealDpcRate;
    if ( *(_DWORD *)(a1 + 12572) < (unsigned int)KiIdealDpcRate && (unsigned int)v11 > 1 )
    {
      result = (unsigned int)(v11 - 1);
      *(_DWORD *)(a1 + 12568) = result;
    }
  }
LABEL_18:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = *(unsigned int *)(a1 + 36);
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak(v11);
  }
  return result;
}
