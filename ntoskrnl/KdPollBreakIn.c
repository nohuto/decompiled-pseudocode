char KdPollBreakIn()
{
  char v0; // di
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 Number; // rcx
  unsigned int *v3; // rdx
  _DWORD **v4; // rsi
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // rax
  _DWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v11; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int16 v15; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    v0 = 0;
    if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled )
      return v0;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    Number = KeGetPcr()->Prcb.Number;
    v3 = (unsigned int *)KdLogBuffer[Number];
    v4 = (_DWORD **)&KdLogBuffer[Number];
    if ( v3 )
    {
      v5 = (unsigned __int64 *)&v3[4 * *v3 + 4];
      v6 = __rdtsc();
      *v5 = ((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6;
      v5[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v0 = 1;
      BYTE4(KdpContext) = 0;
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned __int8)KiTryToAcquireSpinLockInstrumented(&KdDebuggerLock) )
        goto LABEL_10;
    }
    else
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
      {
LABEL_10:
        if ( !(unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) )
          v0 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&KdDebuggerLock, 0LL);
        goto LABEL_14;
      }
      _mm_pause();
    }
LABEL_14:
    v0 &= (unsigned __int8)KdDebuggerEnabled;
    v7 = *v4;
    KdpControlCPressed |= v0;
    if ( v7 )
    {
      v8 = (unsigned int)*v7;
      v9 = __rdtsc();
      *(_QWORD *)&v7[4 * v8 + 6] = v7[4 * v8 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - *(_QWORD *)&v7[4 * v8 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v8 == 254 )
        *v7 = 0;
      else
        *v7 = v8 + 1;
    }
    if ( (v15 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        _m_prefetchw(v11);
        v13 = *v11;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(v11, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    return v0;
  }
  return 0;
}
