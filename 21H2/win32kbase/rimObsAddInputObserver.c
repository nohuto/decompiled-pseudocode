/*
 * XREFs of rimObsAddInputObserver @ 0x1C01B320C
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C017FD90 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0181670 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C005EF60 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C00A25B0 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C019A090 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C019A1EC (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C01B2B84 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C01B5628 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  unsigned int v9; // r9d
  char v10; // bl
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  int v14; // edx
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r8d
  PVOID v23; // r15
  __int64 v24; // rdx
  int v25; // r8d
  int v26; // eax
  int v27; // r8d
  bool v28; // r10
  int v29; // edx
  bool v30; // r10
  int v31; // edx
  PDEVICE_OBJECT v32; // rcx
  __int16 v33; // ax
  _QWORD *v34; // rdx
  int v35; // edx
  int v36; // r8d
  unsigned int v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+58h] [rbp-50h]
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp+10h]
  void *v43; // [rsp+C0h] [rbp+18h]

  v43 = a3;
  v42 = a2;
  v9 = a8;
  if ( !a8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v9 = 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v10 = 1;
  }
  else
  {
    v10 = 1;
    LOBYTE(a2) = 1;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = v9;
    v11 = a7;
    v37 = a7;
    v12 = a6;
    v13 = a5;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DDDD(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink);
  }
  else
  {
    v11 = a7;
    v12 = a6;
    v13 = a5;
  }
  v14 = 23;
  if ( v42 < 0x30 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = v10;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        61,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v17 = 62;
LABEL_58:
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v16->AttachedDevice,
      v14,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      v17,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    return 3221225485LL;
  }
  if ( v13 > 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = v10;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        63,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
        v13);
    }
    return 3221225485LL;
  }
  if ( v13 == 2 )
  {
    if ( !v11 || !v12 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v10 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v17 = 64;
      goto LABEL_58;
    }
    if ( v12 == 7 || v12 == 1 && (v11 == 6 || v11 == 2) )
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v10 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v17 = 65;
      goto LABEL_58;
    }
  }
  else
  {
    v12 = 0;
    v11 = 0;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  if ( rimObsCheckForRegistrationConflicts(a8, v13, v12, v11) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v18 = RawInputManagerInputObserverObjectCreate(a4, v19, v20, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v18 < 0 )
    {
      v32 = WPP_GLOBAL_Control;
      LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = 70;
        goto LABEL_104;
      }
    }
    else
    {
      Object = 0LL;
      v18 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v21, a4, &Object);
      if ( v18 >= 0 )
      {
        LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = Object;
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v22,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            66,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
            (char)Handle,
            Object,
            v37,
            v38);
        }
        else
        {
          v23 = Object;
        }
        *((_DWORD *)v23 + 18) = a4;
        *((_QWORD *)v23 + 12) = a1;
        *((_DWORD *)v23 + 26) = v42;
        *((_DWORD *)v23 + 27) = a5;
        *((_DWORD *)v23 + 28) = v12;
        *((_DWORD *)v23 + 29) = v11;
        *((_DWORD *)v23 + 30) = a8;
        v18 = rimConvertUserToKernelEventHandle(v43, (void **)v23 + 10);
        if ( v18 < 0 )
        {
          v30 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v31 = 68;
            LOBYTE(v31) = v30;
            LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v31,
              v25,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              23,
              68,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
          }
        }
        else
        {
          LOBYTE(v24) = 1;
          v26 = rimObsStartStopDeviceRead(v23, v24);
          v18 = v26;
          if ( v26 < 0 )
          {
            v28 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v29 = 67;
              LOBYTE(v29) = v28;
              LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                v29,
                v27,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                23,
                67,
                (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
                v26);
            }
          }
        }
        ObfDereferenceObject(v23);
        goto LABEL_93;
      }
      v32 = WPP_GLOBAL_Control;
      LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = 69;
LABEL_104:
        WPP_RECORDER_AND_TRACE_SF_(
          v32->AttachedDevice,
          v21,
          v22,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          v33,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
      }
    }
LABEL_93:
    if ( v18 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
      {
        LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v22,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            23,
            72,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
        }
        ObCloseHandle(Handle, a4);
      }
    }
    else if ( a4 )
    {
      v34 = a9;
      if ( (unsigned __int64)a9 >= MmUserProbeAddress )
        v34 = (_QWORD *)MmUserProbeAddress;
      *v34 = Handle;
    }
    else
    {
      *a9 = Handle;
    }
    goto LABEL_126;
  }
  v18 = -1073741823;
LABEL_126:
  qword_1C029A158 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v35) = v10;
    LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v35,
      v36,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      73,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      v18);
  }
  return (unsigned int)v18;
}
