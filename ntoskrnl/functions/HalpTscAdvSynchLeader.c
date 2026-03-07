char __fastcall HalpTscAdvSynchLeader(__int64 a1)
{
  __int64 Number; // r15
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 TimeStamp; // r14
  unsigned int i; // esi
  unsigned __int64 v7; // r14
  ULONG_PTR *Timer; // rax
  ULONG_PTR *v9; // rsi
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // r9
  REGHANDLE v16; // r14
  unsigned int v18; // [rsp+48h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h] BYREF
  __int64 v20; // [rsp+58h] [rbp-49h] BYREF
  int v21; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-39h] BYREF
  int v23; // [rsp+70h] [rbp-31h] BYREF
  int v24; // [rsp+78h] [rbp-29h] BYREF
  int v25; // [rsp+80h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  unsigned int *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  int *v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  int *v31; // [rsp+B8h] [rbp+17h]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]
  int *v33; // [rsp+C8h] [rbp+27h]
  __int64 v34; // [rsp+D0h] [rbp+2Fh]

  Number = KeGetCurrentPrcb()->Number;
  v3 = 0;
  TimeStamp = HalpTscAdvSynchReadTimeStamp(Number);
  if ( HalpTscRequestedSynchronization )
  {
    if ( !HalpTscRequestedIterations )
      HalpTscRequestedIterations = 500;
    if ( *(_BYTE *)(a1 + 34) )
    {
      HalpTscAdvSynchToLeader(*(unsigned int *)(a1 + 36));
    }
    else
    {
      v19 = 0LL;
      v20 = 0LL;
      v18 = KeGetCurrentPrcb()->Number;
      HalpTscAdvSynchCalculateRemoteDeltas((unsigned int)&v19, (unsigned int)&v20, (unsigned int)&v18, v4);
      if ( v18 != KeGetCurrentPrcb()->Number )
      {
        HalpTscAdvSynchReadTimeStamp((unsigned int)Number);
        LODWORD(Number) = v12;
        v13 = HalpTscAdvSynchReadTimeStamp(v12);
        TimeStamp = v13 - v15;
        HalpTscAdvSynchToTarget(v14);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      {
        if ( i != KeGetCurrentPrcb()->Number && i != v18 )
          HalpTscAdvSynchToLeader(i);
      }
    }
  }
  v19 = 0LL;
  v20 = 0LL;
  v18 = KeGetCurrentPrcb()->Number;
  HalpTscAdvSynchCalculateRemoteDeltas((unsigned int)&v19, (unsigned int)&v20, (unsigned int)&v18, v4);
  v7 = (unsigned __int64)(1000000 * (HalpTscAdvSynchReadTimeStamp((unsigned int)Number) - TimeStamp))
     / *(_QWORD *)KeGetPcr()->HalReserved;
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  v9 = Timer;
  HalpTscMaximumComputedSpread = v20 - v19;
  if ( v20 - v19 > (unsigned __int64)(unsigned int)HalpTscMaximumCounterSyncSpread )
  {
    *((_DWORD *)Timer + 46) &= ~0x20u;
    HalpTscSynchronizationFailureFallback = 1;
    LOBYTE(CurrentPrcb) = HalpTscTraceStatus(&HAL_ETW_EVENT_TIMER_SYNCH_FAILED);
  }
  else
  {
    v24 = v19;
    v23 = v20;
    v22 = v18;
    LODWORD(CurrentPrcb) = KeGetCurrentPrcb()->Number;
    v21 = (int)CurrentPrcb;
    v25 = v7;
    if ( HalpDiagnosticEventsRegistered )
    {
      v16 = HalpDiagnosticEventHandle;
      LOBYTE(CurrentPrcb) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY);
      if ( (_BYTE)CurrentPrcb )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v21;
        v28 = 4LL;
        v27 = &v22;
        v30 = 4LL;
        v29 = &v23;
        v32 = 4LL;
        v31 = &v24;
        v34 = 4LL;
        v33 = &v25;
        LOBYTE(CurrentPrcb) = EtwWriteEx(v16, &HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY, 0LL, 0, 0LL, 0LL, 5u, &UserData);
      }
    }
    *((_DWORD *)v9 + 46) |= 0x20u;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v3 != CurrentPrcb->Number )
      {
        v11 = (unsigned __int64)v3 << 7;
        _InterlockedExchange((volatile __int32 *)(v11 + TscRequest), 7);
        LODWORD(CurrentPrcb) = *(_DWORD *)(v11 + TscRequest);
        if ( (_DWORD)CurrentPrcb == 7 )
        {
          do
          {
            _mm_pause();
            LOBYTE(CurrentPrcb) = TscRequest;
          }
          while ( *(_DWORD *)(v11 + TscRequest) == 7 );
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 40) );
  }
  return (char)CurrentPrcb;
}
