/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017EFC8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0166854 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1C017D390 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C017D3CC (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E1E8 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v3; // ebx
  struct _LIST_ENTRY *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int Blink; // eax
  int v15; // r14d
  struct _KPROCESS *v16; // rbp
  int v17; // edx
  int v19; // ebp
  struct _KPROCESS *v20; // rsi
  int v21; // edx
  struct _LIST_ENTRY *v22; // [rsp+38h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    if ( Flink == &gObRimInputObserverList )
      goto LABEL_9;
    v5 = (__int64)&Flink[-1];
    if ( ((__int64)Flink[6].Blink & 2) != 0 )
    {
      if ( (unsigned int)rimObsIsObserverTarget_0(&Flink[-1], a1) )
        break;
    }
LABEL_7:
    Flink = Flink->Flink;
  }
  if ( !(unsigned int)rimObsIsRegisteredObserverAllowed(v6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 23, 46, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    goto LABEL_7;
  }
  v22 = Flink - 1;
  v4 = Flink - 1;
  if ( Flink == (struct _LIST_ENTRY *)16 )
  {
LABEL_9:
    v9 = gObRimInputObserverList.Flink;
    if ( gObRimInputObserverList.Flink != &gObRimInputObserverList )
    {
      do
      {
        v10 = v9 - 1;
        if ( (unsigned int)rimObsIsObserverTarget_0(&v9[-1], a1) )
        {
          if ( (unsigned int)rimObsIsRegisteredObserverAllowed(v11) )
          {
            Blink = (int)v10[7].Blink;
            v15 = 0;
            memset(&ApcState, 0, sizeof(ApcState));
            if ( (Blink & 1) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 939);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v12) = 4;
              WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 23, 50, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
            }
            v16 = (struct _KPROCESS *)v10[2].Flink;
            if ( v16 != (struct _KPROCESS *)PsGetCurrentProcess(v13, v12) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v17) = 4;
                WPP_RECORDER_SF_(
                  (_DWORD)gBaseLog,
                  v17,
                  23,
                  51,
                  (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
                v16 = (struct _KPROCESS *)v10[2].Flink;
              }
              KeStackAttachProcess(v16, &ApcState);
              v15 = 1;
            }
            rimObsDeliverInputToObserver(a1, (__int64)&v9[-1]);
            if ( v15 )
              KeUnstackDetachProcess(&ApcState);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 3;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 23, 52, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
          }
        }
        v9 = v9->Flink;
      }
      while ( v9 != &gObRimInputObserverList );
      v4 = v22;
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v5 + 120) & 1) != 0 )
  {
    v19 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 23, 47, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v20 = *(struct _KPROCESS **)(v5 + 32);
    if ( v20 != (struct _KPROCESS *)PsGetCurrentProcess(v8, v7) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v21, 23, 48, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        v20 = *(struct _KPROCESS **)(v5 + 32);
      }
      KeStackAttachProcess(v20, &ApcState);
      v19 = 1;
    }
    rimObsDeliverInputToObserver(a1, v5);
    if ( v19 )
      KeUnstackDetachProcess(&ApcState);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 23, 49, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
  InputTraceLogging::RIM::DropInput(a1);
LABEL_24:
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0255498 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
