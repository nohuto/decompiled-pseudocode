__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  PDEVICE_OBJECT v9; // rcx
  char v10; // di
  char v11; // r10
  _UNKNOWN **v12; // rdx
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  unsigned int v15; // edx
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  PDEVICE_OBJECT v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // r8
  PVOID v27; // r13
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // eax
  int v31; // r8d
  char v32; // r10
  int v33; // edx
  char v34; // r10
  int v35; // edx
  __int16 v36; // ax
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  unsigned int v40; // [rsp+60h] [rbp-58h]
  HANDLE Handle; // [rsp+68h] [rbp-50h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  void *v45; // [rsp+D0h] [rbp+18h]

  v45 = a3;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1066);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
    v10 = 1;
  }
  else
  {
    v10 = 1;
    v11 = 1;
  }
  v12 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = a7;
    v40 = a7;
    v14 = a6;
    v15 = a5;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_DDDD(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink);
    v12 = &WPP_RECORDER_INITIALIZED;
  }
  else
  {
    v13 = a7;
    v40 = a7;
    v14 = a6;
  }
  if ( a2 < 0x30 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = v10;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        61,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v18 = 62;
LABEL_58:
    LOBYTE(v12) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v17->AttachedDevice,
      (_DWORD)v12,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      v18,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = v10;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        63,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
        a5);
    }
    return 3221225485LL;
  }
  if ( a5 == 2 )
  {
    if ( !v13 || !v14 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v10 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v18 = 64;
      goto LABEL_58;
    }
    if ( v14 == 7 || v14 == 1 && (v13 == 6 || v13 == 2) )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v10 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v18 = 65;
      goto LABEL_58;
    }
  }
  else
  {
    v14 = 0;
    v13 = 0;
    v40 = 0;
  }
  v19 = SGDGetUserSessionState(v9, &WPP_RECORDER_INITIALIZED, a3, a5);
  RIMLockExclusive(v19 + 256);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v14, v13) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v24 = RawInputManagerInputObserverObjectCreate(a4, v25, v26, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v24 < 0 )
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v20) = 0;
      }
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_90;
      v36 = 70;
    }
    else
    {
      Object = 0LL;
      v24 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, (__int64)v20, a4, &Object);
      if ( v24 >= 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v20) = 0;
        }
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = Object;
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v20,
            v22,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            66,
            (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
            (char)Handle,
            (char)Object);
        }
        else
        {
          v27 = Object;
        }
        *((_DWORD *)v27 + 18) = a4;
        *((_QWORD *)v27 + 12) = a1;
        *((_DWORD *)v27 + 26) = a2;
        *((_DWORD *)v27 + 27) = a5;
        *((_DWORD *)v27 + 28) = v14;
        *((_DWORD *)v27 + 29) = v40;
        *((_DWORD *)v27 + 30) = a8;
        v24 = rimConvertUserToKernelEventHandle(v45, (void **)v27 + 10);
        if ( v24 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            v34 = 0;
          }
          if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v35 = 68;
            LOBYTE(v35) = v34;
            LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v35,
              v29,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              23,
              68,
              (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
          }
        }
        else
        {
          LOBYTE(v28) = 1;
          v30 = rimObsStartStopDeviceRead(v27, v28);
          v24 = v30;
          if ( v30 < 0 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (v32 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              v32 = 0;
            }
            if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v33 = 67;
              LOBYTE(v33) = v32;
              LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v33,
                v31,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                23,
                67,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
                v30);
            }
          }
        }
        ObfDereferenceObject(v27);
        goto LABEL_90;
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v20) = 0;
      }
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_90;
      v36 = 69;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v21->AttachedDevice,
      (_DWORD)v20,
      v22,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      v36,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
LABEL_90:
    if ( v24 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v20) = 0;
        }
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v20,
            v22,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            23,
            72,
            (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
        }
        ObCloseHandle(Handle, a4);
      }
    }
    else if ( a4 )
    {
      v20 = a9;
      v21 = (PDEVICE_OBJECT)MmUserProbeAddress;
      if ( (unsigned __int64)a9 >= MmUserProbeAddress )
        v20 = (_QWORD *)MmUserProbeAddress;
      *v20 = Handle;
    }
    else
    {
      v21 = (PDEVICE_OBJECT)a9;
      *a9 = Handle;
    }
    goto LABEL_120;
  }
  v24 = -1073741823;
LABEL_120:
  v37 = SGDGetUserSessionState(v21, v20, v22, v23);
  *(_QWORD *)(v37 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v37 + 256, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v38) = v10;
    LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v38,
      v39,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      73,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      v24);
  }
  return (unsigned int)v24;
}
