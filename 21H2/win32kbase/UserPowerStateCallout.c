/*
 * XREFs of UserPowerStateCallout @ 0x1C00763AC
 * Callers:
 *     W32CalloutDispatch @ 0x1C004DFB0 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C0076700 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077CA4 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0077F58 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  int v1; // edi
  char v2; // bp
  int v4; // r15d
  int v5; // r12d
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 result; // rax
  char *v11; // rdx
  char *v12; // rcx
  __int64 v13; // rcx
  char *v14; // rcx
  char *v15; // rcx
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  HIDWORD(v16[0]) = 0;
  v7 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
  *((_QWORD *)&gPowerStateLog + v7) = MEMORY[0xFFFFF78000000008];
  *((_DWORD *)&gPowerStateLog + 2 * v7 + 2) = 1;
  *((_DWORD *)&gPowerStateLog + 2 * v7 + 3) = v1;
  if ( !v1 )
  {
    LODWORD(result) = UserSessionSwitchBlock_Start();
    goto LABEL_14;
  }
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( gbPendingMonitorOn )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3152LL);
      v9 = v16;
      v16[1] = gPendingMonitorOnReason;
      v8 = 0LL;
      gbPendingMonitorOn = 0;
      v16[0] = 4LL;
      gPendingMonitorOnReason = 0;
      goto LABEL_13;
    }
    goto LABEL_17;
  }
  if ( !gbPowerCalloutsReady || !gbVideoInitialized || !gWinLogonRpcHandle )
  {
    v13 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_QWORD *)&gPowerStateLog + v13) = MEMORY[0xFFFFF78000000008];
    result = 2151546887LL;
    *((_DWORD *)&gPowerStateLog + 2 * v13 + 2) = 2;
    *((_DWORD *)&gPowerStateLog + 2 * v13 + 3) = -2143420409;
    return result;
  }
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( v1 == 1 )
  {
    if ( v2 )
    {
      if ( (gPowerState & 1) != 0 )
      {
LABEL_25:
        gPowerState |= 1u;
        gPowerState = v6 & 4 | gPowerState & 0xFFFFFFFB;
        gPowerState = gPowerState & 0xFFFFFFFD | (v6 >> 30) & 2;
        gPowerState = (8 * (v6 & 1)) | gPowerState & 0xFFFFFFF7;
        dword_1C0252138 = v4;
        gPowerState = (8 * (v6 & 2)) | gPowerState & 0xFFFFFFEF;
        dword_1C025213C = v5;
        dword_1C0252140 = v6;
        if ( (gPowerState & 4) != 0 )
          dword_1C0252114 = 40;
        if ( (gPowerState & 2) != 0 )
          dword_1C0252114 = 9;
        if ( Event )
          KeSetEvent(Event, 1, 0);
        if ( !v2 )
          goto LABEL_12;
LABEL_16:
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
LABEL_17:
        v12 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *(_QWORD *)v12 = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v12 + 2) = 2;
        *((_DWORD *)v12 + 3) = 0;
        return 0LL;
      }
    }
    else if ( (gPowerState & 1) == 0 )
    {
      goto LABEL_25;
    }
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    v14 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *(_QWORD *)v14 = MEMORY[0xFFFFF78000000008];
    result = 2151546888LL;
    *((_DWORD *)v14 + 2) = 2;
    *((_DWORD *)v14 + 3) = -2143420408;
    return result;
  }
  if ( (gPowerState & 1) != 0 )
  {
    if ( !v2 )
    {
      if ( v1 != 8 )
      {
        if ( v1 == 2 || v1 == 13 )
          dword_1C025214C = *((_DWORD *)a1 + 5);
LABEL_12:
        dword_1C0252148 = v1;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        LOBYTE(v8) = 1;
        v9 = 0LL;
LABEL_13:
        LODWORD(result) = QueuePowerRequest(v9, v8);
LABEL_14:
        v11 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *(_QWORD *)v11 = MEMORY[0xFFFFF78000000008];
        result = (unsigned int)result;
        *((_DWORD *)v11 + 2) = 2;
        *((_DWORD *)v11 + 3) = result;
        return result;
      }
      Event = 0LL;
      gPowerState &= ~1u;
    }
    goto LABEL_16;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  v15 = (char *)&gPowerStateLog + 16 * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
  *(_QWORD *)v15 = MEMORY[0xFFFFF78000000008];
  result = 2151546889LL;
  *((_DWORD *)v15 + 2) = 2;
  *((_DWORD *)v15 + 3) = -2143420407;
  return result;
}
