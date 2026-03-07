__int64 __fastcall HalpTimerSelectRoles(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 Timer; // rdi
  __int64 IdealClockSource; // rax
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  __int64 IdealPerformanceCounterSource; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 BestAlwaysOnTimer; // rax
  ULONG_PTR v17; // rdi
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  ULONG_PTR v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 IdealWatchdog; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  ULONG_PTR *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  ULONG_PTR v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi

  v2 = 0;
  if ( HalpTimerFrequenciesMeasured )
    goto LABEL_7;
  do
  {
    v3 = 0LL;
    v4 = 0LL;
    Timer = HalpFindTimer(1, 2, 24576, 0, 0);
    if ( Timer || (Timer = HalpFindTimer(3, 2, 24576, 0, 0)) != 0 || (Timer = HalpFindTimer(2, 0, 0, 0, 0)) != 0 )
    {
LABEL_3:
      if ( !Timer )
        goto LABEL_62;
    }
    else
    {
      v29 = (ULONG_PTR *)HalpRegisteredTimers;
      if ( (ULONG_PTR *)HalpRegisteredTimers == &HalpRegisteredTimers )
        goto LABEL_62;
      do
      {
        Timer = (__int64)v29;
        v29 = (ULONG_PTR *)*v29;
        v5 = *(unsigned int *)(Timer + 184);
        if ( (v5 & 1) == 0 )
        {
          if ( *(_QWORD *)(Timer + 176) )
            v3 = Timer;
          if ( (*(_DWORD *)(Timer + 224) & 2) != 0 && *(_QWORD *)(Timer + 192) )
          {
            if ( (v5 & 8) == 0 )
              goto LABEL_3;
            if ( !v4 )
              v4 = Timer;
          }
        }
      }
      while ( v29 != &HalpRegisteredTimers );
      if ( v3 )
      {
        Timer = v3;
      }
      else
      {
        if ( !v4 )
        {
LABEL_62:
          HalpTimerLastProblem = 19;
          return (unsigned int)-1073741823;
        }
        *(_DWORD *)(v4 + 184) &= ~8u;
        Timer = v4;
      }
    }
    if ( (int)HalpTimerInitialize(Timer, v5) >= 0 )
    {
      HalpTimerMeasureFrequencies(Timer, a2);
      HalpTimerFrequenciesMeasured = 1;
    }
  }
  while ( !HalpTimerFrequenciesMeasured );
LABEL_7:
  while ( !HalpClockTimer )
  {
    IdealClockSource = HalpTimerFindIdealClockSource();
    v9 = IdealClockSource;
    if ( !IdealClockSource )
      goto LABEL_64;
    if ( (int)HalpTimerInitialize(IdealClockSource, v8) >= 0 )
    {
      *(_DWORD *)(v9 + 184) |= 4u;
      HalpClockTimer = v9;
      break;
    }
  }
  while ( 2 )
  {
    if ( HalpPerformanceCounter
      && (*(_DWORD *)(HalpPerformanceCounter + 184) & 4) != 0
      && HalpPerformanceCounter != HalpClockTimer )
    {
      goto LABEL_16;
    }
    IdealPerformanceCounterSource = HalpTimerFindIdealPerformanceCounterSource();
    v12 = IdealPerformanceCounterSource;
    if ( !IdealPerformanceCounterSource )
    {
      HalpTimerLastProblem = 21;
      return (unsigned int)-1073741823;
    }
    if ( (int)HalpTimerInitialize(IdealPerformanceCounterSource, v11) < 0 )
      continue;
    break;
  }
  HalpPerformanceCounter = v12;
  HalpTimerPropagateQpcBiasUpdate(v12);
  *(_DWORD *)(v12 + 184) |= 4u;
LABEL_16:
  v13 = HalpStallCounter;
  if ( (*(_DWORD *)(HalpStallCounter + 224) & 0x2000) != 0 || HalpStallCounter == HalpClockTimer )
  {
    v13 = HalpPerformanceCounter;
    HalpStallCounter = HalpPerformanceCounter;
  }
  else
  {
    *(_DWORD *)(HalpStallCounter + 184) |= 4u;
  }
  if ( v13 != HalpOriginalStallTimer )
    *(_DWORD *)(HalpOriginalStallTimer + 184) |= 4u;
  if ( !HalpAuxiliaryCounter )
  {
    v14 = HalpFindTimer(14, 1048578, 24576, 0, 0);
    v15 = v14;
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 192) <= 0x3B9ACA00uLL && (int)HalpTimerInitialize(v14, a2) >= 0 )
      {
        *(_DWORD *)(v15 + 184) |= 4u;
        HalpAuxiliaryCounter = v15;
      }
    }
  }
  while ( !HalpAlwaysOnTimer )
  {
    if ( _bittest((const signed __int32 *)(HalpClockTimer + 224), 0xFu) )
      break;
    BestAlwaysOnTimer = HalpTimerFindBestAlwaysOnTimer(0LL);
    v17 = BestAlwaysOnTimer;
    if ( !BestAlwaysOnTimer )
      break;
    if ( (int)HalpTimerInitialize(BestAlwaysOnTimer, a2) >= 0 )
    {
      *(_DWORD *)(v17 + 184) |= 4u;
      HalpAlwaysOnTimer = v17;
      break;
    }
  }
  v18 = HalpClockTimer;
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 1) == 0 )
  {
    if ( (int)HalpVpptTimerRegister(HalpClockTimer, 0LL) < 0 )
    {
      HalpClockTimer = 0LL;
      goto LABEL_64;
    }
    v30 = HalpFindTimer(11, 32, 0, 3840, 0);
    HalpClockTimer = v30;
    if ( v30 )
    {
      if ( (int)HalpTimerInitialize(v30, v31) >= 0 )
      {
        v18 = HalpClockTimer;
        *(_DWORD *)(HalpClockTimer + 184) |= 4u;
        goto LABEL_30;
      }
      v32 = HalpClockTimer;
      HalpTimerLastProblem = 20;
      if ( HalpClockTimer )
      {
        *(_DWORD *)(HalpClockTimer + 252) = 20;
        *(_QWORD *)(v32 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
        *(_DWORD *)(v32 + 256) = 2;
        *(_DWORD *)(v32 + 272) = 3280;
      }
    }
    else
    {
LABEL_64:
      HalpTimerLastProblem = 20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_30:
  if ( !HalpAlwaysOnTimer || (*(_DWORD *)(HalpAlwaysOnTimer + 224) & 1) != 0 || (*(_DWORD *)(v18 + 224) & 1) == 0 )
    goto LABEL_31;
  LOBYTE(a2) = 1;
  if ( (int)HalpVpptTimerRegister(HalpAlwaysOnTimer, a2) < 0 )
  {
    HalpAlwaysOnTimer = 0LL;
    goto LABEL_82;
  }
  v33 = HalpFindTimer(11, 32, 0, 3840, 0);
  HalpAlwaysOnTimer = v33;
  if ( !v33 )
  {
LABEL_82:
    HalpTimerLastProblem = 33;
    return (unsigned int)-1073741823;
  }
  *(_DWORD *)(v33 + 184) |= 4u;
LABEL_31:
  while ( !HalpAlwaysOnCounter
       && (!_bittest((const signed __int32 *)(HalpPerformanceCounter + 224), 0xFu)
        || !_bittest((const signed __int32 *)(HalpStallCounter + 224), 0xFu)) )
  {
    LOBYTE(v18) = 1;
    v19 = HalpTimerFindBestAlwaysOnTimer(v18);
    v21 = v19;
    if ( !v19 )
      break;
    if ( (int)HalpTimerInitialize(v19, v20) >= 0 )
    {
      *(_DWORD *)(v21 + 184) |= 4u;
      HalpAlwaysOnCounter = v21;
      break;
    }
  }
  while ( !HalpProfileTimer && HalpProfileInterface == &DefaultProfileInterface )
  {
    v35 = HalpFindTimer(0, 65, 0, 3840, 0);
    if ( !v35
      && ((unsigned int)HalpQueryMaximumRegisteredProcessorCount() != 1 || (v35 = HalpFindTimer(0, 64, 0, 3840, 0)) == 0) )
    {
      HalpTimerLastProblem = 23;
      break;
    }
    if ( (int)HalpTimerInitialize(v35, v34) >= 0 )
    {
      *(_DWORD *)(v35 + 184) |= 4u;
      HalpProfileTimer = v35;
      HalpTimerStopProfileInterrupt();
      break;
    }
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 1) != 0 )
  {
    while ( !HalpFallbackPerformanceCounter )
    {
      v22 = HalpTimerFindIdealPerformanceCounterSource();
      v24 = v22;
      if ( !v22 )
      {
        HalpTimerLastProblem = 22;
        break;
      }
      if ( (int)HalpTimerInitialize(v22, v23) >= 0 )
      {
        *(_DWORD *)(v24 + 184) |= 4u;
        HalpFallbackPerformanceCounter = v24;
        break;
      }
    }
  }
  if ( !HalpTimerWatchdogDisable )
  {
    IdealWatchdog = HalpTimerFindIdealWatchdog();
    v27 = IdealWatchdog;
    if ( IdealWatchdog )
    {
      if ( (int)HalpTimerInitialize(IdealWatchdog, v26) >= 0 )
      {
        *(_DWORD *)(v27 + 184) |= 4u;
        HalpWatchdogTimer = v27;
      }
    }
  }
  return v2;
}
