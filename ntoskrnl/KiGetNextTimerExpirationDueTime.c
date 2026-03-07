unsigned __int64 __fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int64 *a6,
        int *a7,
        __int64 a8)
{
  unsigned __int64 v8; // rbx
  int v9; // esi
  int v13; // r13d
  __int64 NextTimerDueTime; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 NextWakeTimeForDeepSleep; // r14
  __int64 v19; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  char v26; // [rsp+20h] [rbp-48h] BYREF
  char v27[7]; // [rsp+21h] [rbp-47h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-30h] BYREF
  char v31; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v9 = 0;
  v13 = 0;
  v31 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v28 = -1LL;
  v26 = 0;
  v27[0] = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( PoSkipTickMode == 2 && !KiSerializeTimerExpiration && !*(_BYTE *)(a1 + 33) )
  {
    v9 = 2;
    goto LABEL_12;
  }
  v8 = -1LL;
  if ( a4 )
  {
    v13 = 12;
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep();
    v28 = NextWakeTimeForDeepSleep;
  }
  else
  {
    v9 = 4;
    NextTimerDueTime = KiFindNextTimerDueTime(a1, a3, a2, &v28);
    NextWakeTimeForDeepSleep = v28;
    v8 = NextTimerDueTime;
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( a2 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(KiGroupSchedulingOverQuotaMask) )
        goto LABEL_6;
    }
    else if ( !(unsigned int)KeCheckProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, *(_DWORD *)(a1 + 36)) )
    {
      goto LABEL_6;
    }
    if ( KiGenerationEndTick * (unsigned __int64)(unsigned int)KeMaximumIncrement < NextWakeTimeForDeepSleep )
    {
      NextWakeTimeForDeepSleep = KiGenerationEndTick * (unsigned int)KeMaximumIncrement;
      v28 = NextWakeTimeForDeepSleep;
      v13 = 5;
    }
  }
LABEL_6:
  if ( *(_BYTE *)(a1 + 33) )
  {
    KiGetNextTimer2ExpirationDueTime(a4, &v29, &v30, &v31);
    v16 = v29;
    if ( v29 < v8 )
    {
      v8 = v29;
      v9 = 6;
    }
    if ( v30 < NextWakeTimeForDeepSleep )
    {
      NextWakeTimeForDeepSleep = v30;
      v28 = v30;
      if ( v31 )
      {
        v13 = 7;
        KiGetPastDueIRTimerInfo(v30, &v26, v27);
      }
      else
      {
        v13 = 6;
      }
    }
  }
  if ( !KiGlobalTimerResolutionRequests )
  {
    NextWakeTimeForDeepSleep = v28;
    v17 = (unsigned int)KeNonHrTimeIncrement
        - (unsigned __int64)(unsigned int)(KeMinimumIncrement - 1)
        + KiLastNonHrTimerExpiration;
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && v28 < v17 )
    {
      v16 = (unsigned int)KePseudoHrTimeIncrement;
      NextWakeTimeForDeepSleep = (unsigned int)KePseudoHrTimeIncrement + a3;
      if ( NextWakeTimeForDeepSleep < v17 )
      {
        v23 = (unsigned int)KePseudoHrTimeIncrement + a3;
        v24 = v23;
        do
        {
          v25 = (unsigned int)KePseudoHrTimeIncrement + v24;
          v24 = v25;
          if ( (unsigned int)KePseudoHrTimeIncrement + v23 > v28 + (unsigned int)KeNonHrTimeIncrement )
            break;
          NextWakeTimeForDeepSleep = v25;
          v23 = v25;
        }
        while ( v25 < v17 );
      }
    }
  }
  if ( NextWakeTimeForDeepSleep < v8 )
  {
    v8 = NextWakeTimeForDeepSleep;
    v9 = v13;
  }
  if ( a2 )
  {
    if ( KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest < v8 )
    {
      v8 = KiClockOwnerOneShotRequest;
      v9 = 6;
    }
    if ( !(_BYTE)KdDebuggerNotPresent && a3 < v8 )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        v21 = (unsigned int)(10000 * KiDebugPollInterval);
        if ( v8 - a3 > v21 )
        {
          v8 = v21 + a3;
          v9 = 8;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v22 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, unsigned __int64))off_140C01D78[0])(a5, v16, v17);
    if ( v22 )
    {
      if ( v8 > v22 )
      {
        v8 = v22;
        v9 = 9;
        if ( a3 > v22 )
          v8 = a3;
      }
    }
  }
LABEL_12:
  v19 = a8;
  *a6 = v8;
  result = (unsigned __int64)a7;
  *a7 = v9;
  if ( v19 )
  {
    result = 0LL;
    *(_QWORD *)v19 = 0LL;
    *(_DWORD *)v19 = v9;
    if ( v9 == 7 )
    {
      *(_BYTE *)(v19 + 4) = v26;
      result = (unsigned __int8)v27[0];
      *(_BYTE *)(v19 + 5) = v27[0];
    }
    else if ( !v9 )
    {
      *(_DWORD *)v19 = 11;
    }
  }
  return result;
}
