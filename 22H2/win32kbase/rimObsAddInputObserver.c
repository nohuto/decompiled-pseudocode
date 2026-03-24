/*
 * XREFs of rimObsAddInputObserver @ 0x1C017D7DC
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C0152EE0 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0154C60 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0008140 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0008458 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0056D50 (rimConvertUserToKernelEventHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C01661E0 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C016633C (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C017D118 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C017F2C4 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        HANDLE *a9)
{
  char v9; // cl
  unsigned int v10; // esi
  unsigned int v11; // r12d
  int v13; // r9d
  int v14; // esi
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  PVOID v19; // r13
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  int v23; // r9d
  _QWORD *v24; // rdx
  int v25; // edx
  unsigned int v26; // [rsp+50h] [rbp-58h]
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+10h]

  v30 = a2;
  v9 = a8;
  if ( !a8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1046);
    v9 = 0;
  }
  v10 = a7;
  v11 = a6;
  v26 = a7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDD(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a5,
      23,
      59,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a5,
      a6,
      a7,
      v9);
  if ( v30 < 0x30 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        60,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 61;
LABEL_26:
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        v13,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        62,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        a5);
    }
    return 3221225485LL;
  }
  if ( a5 == 2 )
  {
    if ( !a7 || !a6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 63;
        goto LABEL_26;
      }
      return 3221225485LL;
    }
    if ( a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 64;
        goto LABEL_26;
      }
      return 3221225485LL;
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v26 = 0;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v11, v10) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v15 = a4;
    v14 = RawInputManagerInputObserverObjectCreate(a4, v16, v17, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v23 = 69;
    }
    else
    {
      Object = 0LL;
      v14 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v18, a4, &Object);
      if ( v14 >= 0 )
      {
        v19 = Object;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_qq(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v18,
            23,
            65,
            (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
            (char)Handle,
            (char)Object);
        }
        *((_DWORD *)v19 + 18) = a4;
        *((_QWORD *)v19 + 12) = a1;
        *((_DWORD *)v19 + 26) = v30;
        *((_DWORD *)v19 + 27) = a5;
        *((_DWORD *)v19 + 28) = v11;
        *((_DWORD *)v19 + 29) = v26;
        *((_DWORD *)v19 + 30) = a8;
        v14 = rimConvertUserToKernelEventHandle(a3, (void **)v19 + 10);
        if ( v14 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 3;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v20,
              23,
              67,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
          }
        }
        else
        {
          LOBYTE(v20) = 1;
          v21 = rimObsStartStopDeviceRead(v19, v20);
          v14 = v21;
          if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 3;
            WPP_RECORDER_SF_d(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v22,
              23,
              66,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
              v21);
          }
        }
        ObfDereferenceObject(v19);
        v15 = a4;
        goto LABEL_47;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_47:
        if ( v14 < 0 )
        {
          if ( Handle != (HANDLE)-1LL )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 3;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v18,
                23,
                71,
                (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
            }
            ObCloseHandle(Handle, a4);
          }
        }
        else if ( v15 )
        {
          v24 = a9;
          if ( (unsigned __int64)a9 >= MmUserProbeAddress )
            v24 = (_QWORD *)MmUserProbeAddress;
          *v24 = Handle;
        }
        else
        {
          *a9 = Handle;
        }
        goto LABEL_57;
      }
      v23 = 68;
    }
    LOBYTE(v18) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v18,
      23,
      v23,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    goto LABEL_47;
  }
  v14 = -1073741823;
LABEL_57:
  qword_1C02544F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      23,
      72,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v14);
  }
  return (unsigned int)v14;
}
