char __fastcall KePrepareClockTimerForIdle(char a1, char a2, unsigned __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  int v6; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // r13
  __int32 v12; // esi
  int v13; // edx
  int v14; // r9d
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  __int64 InterruptTimePrecise; // r15
  unsigned __int64 v18; // rbx
  bool v19; // zf
  bool v20; // cf
  bool v21; // r9
  __int64 *v22; // rdx
  __int64 v23; // r8
  volatile signed __int32 *v24; // rcx
  __int64 v27; // [rsp+48h] [rbp-91h] BYREF
  int v28; // [rsp+50h] [rbp-89h] BYREF
  int v29; // [rsp+54h] [rbp-85h] BYREF
  int v30; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-71h] BYREF
  char v33[8]; // [rsp+70h] [rbp-69h] BYREF
  __int64 v34; // [rsp+78h] [rbp-61h]
  LARGE_INTEGER v35; // [rsp+80h] [rbp-59h] BYREF
  _QWORD *v36; // [rsp+88h] [rbp-51h]
  int *v37; // [rsp+90h] [rbp-49h] BYREF
  int v38; // [rsp+98h] [rbp-41h]
  int v39; // [rsp+9Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+A0h] [rbp-39h] BYREF
  int *v41; // [rsp+C0h] [rbp-19h]
  int v42; // [rsp+C8h] [rbp-11h]
  int v43; // [rsp+CCh] [rbp-Dh]
  int *v44; // [rsp+D0h] [rbp-9h]
  int v45; // [rsp+D8h] [rbp-1h]
  int v46; // [rsp+DCh] [rbp+3h]

  v27 = 0LL;
  v6 = 0;
  v32 = 0LL;
  LOBYTE(v8) = a5;
  v9 = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 4;
  v34 = a5;
  v36 = a6;
  if ( !KiDynamicTickInitialized || (_BYTE)KiDynamicTickDisableReason )
    goto LABEL_5;
  LOBYTE(v8) = KiLastRequestedTimeIncrement;
  if ( a3 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
LABEL_4:
    v6 = 2;
    goto LABEL_5;
  }
  if ( a3 > KiMaxDynamicTickDuration )
  {
    ++dword_140C417CC;
    v9 = KiMaxDynamicTickDuration;
  }
  v12 = _InterlockedExchange(&KiClockState, 3);
  LOBYTE(v8) = PoAllProcessorsDeepIdle();
  if ( !(_BYTE)v8 )
  {
    v6 = 1;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    LOBYTE(v8) = KeIsForceIdleEngaged();
    if ( (_BYTE)v8 )
    {
      v6 = 6;
      goto LABEL_5;
    }
  }
  LOBYTE(v14) = a1;
  LOBYTE(v13) = 1;
  v15 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime(
    (_DWORD)CurrentPrcb,
    v13,
    MEMORY[0xFFFFF78000000008],
    v14,
    a2,
    (__int64)&v32,
    (__int64)v33,
    v34);
  v16 = v32;
  if ( a4 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v35);
  }
  else
  {
    v8 = v15 + (unsigned int)KiLastRequestedTimeIncrement;
    if ( v32 <= v8 )
      goto LABEL_4;
    if ( !a1 )
    {
      LOBYTE(v8) = KiClockTimerOneShotReady(v15);
      if ( !(_BYTE)v8 )
      {
        v6 = 3;
        goto LABEL_5;
      }
    }
    v8 = RtlGetInterruptTimePrecise(&v35);
    InterruptTimePrecise = v8;
    if ( v16 <= v8 + (unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_47;
  }
  v8 = InterruptTimePrecise + (unsigned int)KiMinDynamicTickDuration;
  if ( v16 <= v8 )
  {
LABEL_47:
    v6 = 4;
    goto LABEL_5;
  }
  v18 = v16 - InterruptTimePrecise;
  if ( v18 > v9 )
    v18 = v9;
  v31 = v18;
  if ( a4 )
  {
    if ( !a1 )
    {
      v18 = v31;
      if ( v31 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      {
        v18 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
        v31 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
      }
    }
  }
  ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_140C01CA0[0])(1LL, v18, &v27);
  KiLogClockIncrementUpdate((_DWORD)CurrentPrcb, InterruptTimePrecise, v18, v27, 1);
  KiSetPendingTick(1);
  KiClockTimerOneShotStartTime = InterruptTimePrecise;
  KiEventClockStateChange(1, v12, &v27, (__int64 *)&v31);
  if ( (unsigned int)dword_140C02F28 > 5 )
  {
    v43 = 0;
    v46 = 0;
    v41 = &v28;
    v29 = v27;
    v42 = 4;
    v44 = &v29;
    v45 = 4;
    v28 = v18;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02F28, (unsigned __int8 *)word_14002D1F2, 0LL, 0LL, 4u, &v40);
  }
  if ( a4 )
    KiClockLatencyMeasurementEnabled = 1;
  if ( KeIsForceIdleEngaged() )
    KiForceIdleReset = 1;
  v19 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockOwner = 0;
  if ( !v19 )
  {
    KiCancelClockTimer(CurrentPrcb, 0LL);
    KiCancelClockTimer(CurrentPrcb, 1LL);
    KiCancelClockTimer(CurrentPrcb, 2LL);
  }
  ++qword_140C417D0;
  v12 = 1;
  v20 = v18 < qword_140C41808;
  CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotArmed;
  if ( v20 )
    qword_140C41808 = v18;
  if ( v18 > qword_140C41800 )
    qword_140C41800 = v18;
  if ( a1 )
    KiConsiderTimerRebasing = 1;
  LOBYTE(v8) = KeNumberProcessors_0;
  v21 = KiHrTimerActiveCount > 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v22 = KiProcessorBlock;
    v23 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 = *v22;
      v24 = *(volatile signed __int32 **)(*v22 + 35000);
      if ( v24 )
      {
        if ( v21 )
          _InterlockedOr(v24, 0x80000u);
        else
          _InterlockedAnd(v24, 0xFFF7FFFF);
      }
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  KiClockTimerNextTickTime = InterruptTimePrecise + v27;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + v27;
LABEL_5:
  if ( v36 )
  {
    LOBYTE(v8) = KiClockTimerNextTickTime;
    *v36 = KiClockTimerNextTickTime;
  }
  if ( v12 != 4 )
    _InterlockedExchange(&KiClockState, v12);
  if ( v6 )
  {
    v30 = v6;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v39 = 0;
      v37 = &v30;
      v38 = 1;
      LOBYTE(v8) = EtwTraceKernelEvent((unsigned int)&v37, 1, 1074790400, 3929, 1538);
    }
  }
  return v8;
}
