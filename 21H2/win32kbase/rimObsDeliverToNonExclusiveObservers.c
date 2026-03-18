/*
 * XREFs of rimObsDeliverToNonExclusiveObservers @ 0x1C00077DC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInput @ 0x1C00CA6AC (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     rimObsIsObserverTarget_0 @ 0x1C01B2E20 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01B2E5C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C01B3FC8 (rimObsDeliverInputToObserver.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimObsDeliverToNonExclusiveObservers(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int Blink; // eax
  int v9; // ebp
  PDEVICE_OBJECT v10; // rcx
  struct _KPROCESS *Flink; // rdi
  int v12; // edx
  int v13; // r8d
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  RIMLockExclusive(&gInputObserverLock);
  RIMLockExclusive(&gObListLock);
  for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
  {
    v5 = i - 1;
    if ( (unsigned int)rimObsIsObserverTarget_0(&i[-1], a1, v2, v3) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        Blink = (int)v5[7].Blink;
        v9 = 0;
        memset(&ApcState, 0, sizeof(ApcState));
        if ( (Blink & 1) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v2);
        v10 = WPP_GLOBAL_Control;
        LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v6,
            v2,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            51,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
        Flink = (struct _KPROCESS *)v5[2].Flink;
        if ( Flink != (struct _KPROCESS *)PsGetCurrentProcess(v10, v6, v2, v3) )
        {
          LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              v13,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              52,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
            Flink = (struct _KPROCESS *)v5[2].Flink;
          }
          KeStackAttachProcess(Flink, &ApcState);
          v9 = 1;
        }
        rimObsDeliverInputToObserver(a1, &i[-1]);
        if ( v9 )
          KeUnstackDetachProcess(&ApcState);
      }
      else
      {
        LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v6,
            v2,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            23,
            53,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
      }
    }
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C029A158 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
}
