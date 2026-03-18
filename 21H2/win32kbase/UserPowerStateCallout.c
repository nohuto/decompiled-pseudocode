/*
 * XREFs of UserPowerStateCallout @ 0x1C007BFDC
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C007C340 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E114 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  int v1; // ebx
  char v2; // si
  int v4; // r15d
  int v5; // ebp
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 result; // rax
  char *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  char *v17; // rcx
  char *v18; // rcx
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  v7 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
  *((_QWORD *)&gPowerStateLog + v7) = MEMORY[0xFFFFF78000000008];
  *((_DWORD *)&gPowerStateLog + 2 * v7 + 2) = 1;
  *((_DWORD *)&gPowerStateLog + 2 * v7 + 3) = v1;
  if ( !v1 )
  {
    LODWORD(result) = UserSessionSwitchBlock_Start();
    goto LABEL_15;
  }
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( gbPendingMonitorOn )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      v9 = v19;
      v19[1] = gPendingMonitorOnReason;
      v8 = 0LL;
      gbPendingMonitorOn = 0;
      v19[0] = 4LL;
      gPendingMonitorOnReason = 0;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  if ( !gbPowerCalloutsReady || !gbVideoInitialized || !gWinLogonRpcHandle )
  {
    v16 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_QWORD *)&gPowerStateLog + v16) = MEMORY[0xFFFFF78000000008];
    result = 2151546887LL;
    *((_DWORD *)&gPowerStateLog + 2 * v16 + 2) = 2;
    *((_DWORD *)&gPowerStateLog + 2 * v16 + 3) = -2143420409;
    return result;
  }
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( v1 == 1 )
  {
    if ( v2 )
    {
      if ( (gPowerState & 1) != 0 )
        goto LABEL_21;
    }
    else if ( (gPowerState & 1) == 0 )
    {
LABEL_21:
      gPowerState |= 1u;
      gPowerState = v6 & 4 | gPowerState & 0xFFFFFFFB;
      gPowerState = gPowerState & 0xFFFFFFFD | (v6 >> 30) & 2;
      gPowerState = (8 * (v6 & 1)) | gPowerState & 0xFFFFFFF7;
      dword_1C0296F08 = v4;
      gPowerState = (8 * (v6 & 2)) | gPowerState & 0xFFFFFFEF;
      dword_1C0296F0C = v5;
      dword_1C0296F10 = v6;
      if ( (gPowerState & 4) != 0 )
        dword_1C0296EE4 = 40;
      if ( (gPowerState & 2) != 0 )
        dword_1C0296EE4 = 9;
      if ( Event )
        KeSetEvent(Event, 1, 0);
LABEL_27:
      if ( !v2 )
      {
LABEL_11:
        if ( v1 == 2 || v1 == 13 )
          dword_1C0296F1C = *((_DWORD *)a1 + 5);
        dword_1C0296F18 = v1;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        LOBYTE(v8) = 1;
        v9 = 0LL;
LABEL_14:
        LODWORD(result) = QueuePowerRequest(v9, v8);
LABEL_15:
        v11 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *(_QWORD *)v11 = MEMORY[0xFFFFF78000000008];
        result = (unsigned int)result;
        *((_DWORD *)v11 + 2) = 2;
        *((_DWORD *)v11 + 3) = result;
        return result;
      }
      goto LABEL_30;
    }
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    v17 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *(_QWORD *)v17 = MEMORY[0xFFFFF78000000008];
    result = 2151546888LL;
    *((_DWORD *)v17 + 2) = 2;
    *((_DWORD *)v17 + 3) = -2143420408;
    return result;
  }
  if ( v1 == 14 )
  {
    dword_1C0296F0C = v5;
    goto LABEL_27;
  }
  if ( (gPowerState & 1) != 0 )
  {
    if ( !v2 )
    {
      if ( v1 != 8 )
        goto LABEL_11;
      Event = 0LL;
      gPowerState &= ~1u;
    }
LABEL_30:
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
LABEL_17:
    v15 = (_QWORD *)((char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F));
    *v15 = MEMORY[0xFFFFF78000000008];
    result = 0LL;
    v15[1] = 2LL;
    return result;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  v18 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
  *(_QWORD *)v18 = MEMORY[0xFFFFF78000000008];
  result = 2151546889LL;
  *((_DWORD *)v18 + 2) = 2;
  *((_DWORD *)v18 + 3) = -2143420407;
  return result;
}
