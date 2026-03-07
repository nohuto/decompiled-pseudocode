__int64 __fastcall KeAccumulateTicks(__int64 a1, int a2, int a3, unsigned __int8 a4, char a5, unsigned int a6)
{
  __int64 result; // rax
  unsigned int v11; // esi
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  ULONG_PTR v22; // rbp
  unsigned int *v23; // r14
  ULONG_PTR BugCheckParameter4; // r15
  ULONG_PTR v25; // r14
  unsigned int v26; // ecx
  int v27; // r15d
  unsigned int v28; // r15d
  unsigned int v29; // ecx
  ULONG_PTR v30; // r12
  unsigned int v31; // r13d
  __int16 v32; // cx
  unsigned int v33; // ecx
  ULONG_PTR v34; // r10
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx

  result = KiCheckForTimerExpiration(a1, a6);
  *(_DWORD *)(a1 + 13248) = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)(a1 + 8);
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
      if ( (unsigned __int8)KiCheckKeepAlive(v25) )
      {
        if ( !*(_DWORD *)(v25 + 32416) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v25, BugCheckParameter4);
        }
        *(_DWORD *)(v25 + 32416) = 0;
      }
    }
  }
  if ( a5 )
  {
    *(_DWORD *)(a1 + 33096) += v11;
    *(_DWORD *)(v12 + 732) += v11;
    ++*(_DWORD *)(a1 + 32492);
    KiDpcWatchdogCounterReset(a1);
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 33092) += v11;
  v13 = 0;
  if ( *(_BYTE *)(a1 + 32) != 2 || !*(_BYTE *)(a1 + 13242) )
  {
    if ( *(_BYTE *)(a1 + 32) > 1u )
      *(_DWORD *)(a1 + 33104) += v11;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 652LL) += v11;
    goto LABEL_7;
  }
  v27 = *(_DWORD *)(a1 + 33116);
  *(_DWORD *)(a1 + 33100) += v11;
  v28 = v27 + 1;
  v29 = *(_DWORD *)(a1 + 33344);
  v30 = *(unsigned int *)(a1 + 33120);
  v31 = *(_DWORD *)(a1 + 13260);
  *(_DWORD *)(a1 + 33116) = v28;
  if ( v29 )
  {
    if ( v28 == v29 )
    {
      EtwTraceDpcProfilingStackBegin(a1, *(unsigned int *)(a1 + 32492), v29, 0LL);
LABEL_48:
      KiDpcWatchdogCaptureStack(a1);
      v13 = 1;
      EtwTraceDpcProfilingStack(*(unsigned int *)(a1 + 32492), v28);
      goto LABEL_49;
    }
    if ( v28 >= v29 )
      goto LABEL_48;
  }
LABEL_49:
  if ( v31 )
  {
    if ( v28 >= v31 )
    {
      v34 = *(_QWORD *)(a1 + 13264);
      if ( v34 )
      {
        v35 = *(_QWORD *)(a1 + 13152);
        if ( v35 )
        {
          if ( *(_DWORD *)(v34 + 72) )
          {
            if ( *(_QWORD *)(v34 + 64) == *(_QWORD *)(v35 + 24) )
              *(_DWORD *)(v34 + 72) = v28;
          }
          else
          {
            *(_DWORD *)(v34 + 72) = v28;
            *(_QWORD *)(v34 + 64) = *(_QWORD *)(v35 + 24);
            KiInsertQueueDpc(v34, 0);
          }
        }
      }
    }
  }
  if ( (_DWORD)v30 && v28 > (unsigned int)v30 )
  {
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(3LL, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KiForceBugcheckForDpcWatchdog )
      {
        if ( KiRecoveryCallbackCount <= 0 )
          KeBugCheckEx(0x133u, 0LL, v28, v30, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
        KiDeferDpcWatchdogViolation();
      }
      else
      {
        __int2c();
      }
    }
    *(_DWORD *)(a1 + 33116) = 0;
    KiResetGlobalDpcWatchdogProfiler(a1);
  }
LABEL_7:
  if ( a4 >= 2u )
  {
    ++*(_DWORD *)(a1 + 32428);
    v20 = *(_DWORD *)(a1 + 32436);
    v21 = *(_DWORD *)(a1 + 32428);
    v22 = *(unsigned int *)(a1 + 32424);
    if ( v20 && !v13 )
    {
      v23 = (unsigned int *)(a1 + 32492);
      if ( v21 == v20 )
      {
        EtwTraceDpcProfilingStackBegin(a1, *v23, v21, 1LL);
      }
      else if ( v21 < v20 )
      {
        goto LABEL_27;
      }
      KiDpcWatchdogCaptureStack(a1);
      EtwTraceDpcProfilingStack(*v23, v21);
    }
LABEL_27:
    if ( !(_DWORD)v22 )
      goto LABEL_9;
    if ( v21 == (unsigned int)v22 >> 1 )
      KiInsertQueueDpc(a1 + 34264, 0);
    if ( v21 < (unsigned int)v22 )
      goto LABEL_9;
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(2LL, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KiForceBugcheckForDpcWatchdog )
        KeBugCheckEx(0x133u, 1uLL, v22, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
      __int2c();
    }
  }
  KiDpcWatchdogCounterReset(a1);
  ++*(_DWORD *)(a1 + 32492);
LABEL_9:
  if ( v12 != *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 32) <= 1u
    && (*(char *)(v12 + 195) < 16
     && *(_QWORD *)(v12 + 104)
     && (v36 = *(_QWORD *)(v12 + 104)) != 0
     && (v37 = *(unsigned int *)(a1 + 216) + v36) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero(v12, v37, 0LL, 0LL)
     || *(char *)(v12 + 195) < 8) )
  {
    *(_DWORD *)(a1 + 33132) += v11;
  }
  if ( v11 >= 8 )
  {
    *(_DWORD *)(a1 + 11684) = 0;
  }
  else
  {
    v14 = v11;
    *(_DWORD *)(a1 + 11684) += 15 * (*(_DWORD *)(a1 + 33088) - *(_DWORD *)(a1 + 11680));
    v15 = *(_DWORD *)(a1 + 11684);
    do
    {
      v15 >>= 4;
      --v14;
    }
    while ( v14 );
    *(_DWORD *)(a1 + 11684) = v15;
  }
  v16 = *(_DWORD *)(a1 + 13228) - *(_DWORD *)(a1 + 13236);
  *(_DWORD *)(a1 + 11680) = *(_DWORD *)(a1 + 33088);
  v17 = *(_DWORD *)(a1 + 13148);
  v18 = (unsigned int)(v17 + v16) >> v11;
  *(_DWORD *)(a1 + 13228) = v18;
  *(_DWORD *)(a1 + 13236) = v17;
  result = *(unsigned int *)(a1 + 13144);
  if ( !(_DWORD)result || (v32 = *(_WORD *)(a1 + 13244), (v32 & 3) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 33108))-- == 1 )
    {
      *(_DWORD *)(a1 + 33108) = KiAdjustDpcThreshold;
      result = *(unsigned int *)(a1 + 13224);
      if ( (unsigned int)result < KiMaximumDpcQueueDepth )
      {
        result = (unsigned int)(result + 1);
        *(_DWORD *)(a1 + 13224) = result;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 33108) = KiAdjustDpcThreshold;
    if ( (v32 & 0xAF) == 0 )
    {
      LOBYTE(v18) = 2;
      KiRequestSoftwareInterrupt(a1, v18);
    }
    v33 = *(_DWORD *)(a1 + 13224);
    result = (unsigned int)KiIdealDpcRate;
    if ( v33 > 1 && *(_DWORD *)(a1 + 13228) < (unsigned int)KiIdealDpcRate )
    {
      result = v33 - 1;
      *(_DWORD *)(a1 + 13224) = result;
    }
  }
LABEL_20:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = *(unsigned int *)(a1 + 36);
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak();
  }
  return result;
}
