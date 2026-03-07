__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, _QWORD *a4)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r14d
  _BYTE *v9; // rbx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID v14; // r13
  char *v15; // r15
  PVOID v16; // rbx
  int v17; // edx
  _UNKNOWN **v18; // r8
  unsigned int *v19; // rbx
  __int64 v20; // rdx
  PVOID v21; // r15
  _UNKNOWN **v22; // r8
  PVOID v24; // [rsp+58h] [rbp-70h] BYREF
  PVOID v25; // [rsp+60h] [rbp-68h] BYREF
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  _BYTE *v27; // [rsp+70h] [rbp-58h]
  PVOID v28; // [rsp+78h] [rbp-50h]
  HANDLE Handle; // [rsp+80h] [rbp-48h] BYREF
  PVOID v30; // [rsp+88h] [rbp-40h] BYREF
  __int128 v31; // [rsp+90h] [rbp-38h] BYREF
  char *v32; // [rsp+D8h] [rbp+10h]
  int v33; // [rsp+E0h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v24 = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  v30 = 0LL;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      148,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v24);
  if ( v8 >= 0 )
  {
    v9 = v24;
    v27 = v24;
    RIMLockExclusive((__int64)v24 + 104);
    if ( v9[81] )
    {
      v8 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (_DWORD)gRimLog,
          3,
          1,
          151,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      goto LABEL_54;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(v32, 3u, 1, &v25);
    if ( v8 < 0 )
    {
LABEL_54:
      *((_QWORD *)v9 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
      goto LABEL_55;
    }
    v14 = v25;
    v15 = (char *)v25 + 72;
    if ( !v25 )
      v15 = 0LL;
    if ( v15[48] != 2
      || (*((_DWORD *)v15 + 50) & 0x80u) != 0
      || (*((_DWORD *)v15 + 46) & 0x2000) != 0
      || *((_DWORD *)v15 + 334) )
    {
      v8 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v12) = 0;
      }
      v22 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          (_DWORD)v22,
          (_DWORD)gRimLog,
          3,
          1,
          149,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      goto LABEL_39;
    }
    v8 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)v15 + 13,
           v12,
           v13,
           &Handle,
           &v30,
           (PDEVICE_OBJECT *)&Object);
    if ( v8 < 0 )
    {
LABEL_39:
      ObfDereferenceObject(v14);
      goto LABEL_54;
    }
    v16 = Object;
    v28 = Object;
    ObfReferenceObject(Object);
    v8 = RIMGetDeviceLocationInfo(v16, v15 + 2120);
    if ( v8 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4863);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v17) = 0;
      }
      v18 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          (_DWORD)v18,
          (_DWORD)gRimLog,
          3,
          1,
          150,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      v8 = 0;
    }
    *((_DWORD *)v15 + 334) = 1;
    RIMReadDigitizerToMonitorMappings(v15, v15 + 1336);
    v31 = 0LL;
    v19 = RIMGetQDCActivePathsData((unsigned int *)&v31);
    rimFindMonitorForDigitizerWithQDCData(v15, v19, 0LL);
    RIMSetDeviceOutputConfig((struct RIMDEV *)v15, 0LL);
    RIMFreeQDCActivePathsData((__int64)v19);
    if ( a4 )
    {
      if ( *((_QWORD *)v15 + 59) || *((_DWORD *)v15 + 334) )
        v20 = *((_QWORD *)v15 + 168);
      else
        v20 = -1LL;
      if ( v33 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_QWORD *)MmUserProbeAddress;
        *a4 = v20;
        v9 = v27;
        v21 = v28;
        goto LABEL_38;
      }
      *a4 = v20;
    }
    v21 = v28;
    v9 = v27;
LABEL_38:
    ZwClose(Handle);
    ObfDereferenceObject(v30);
    ObfDereferenceObject(v21);
    goto LABEL_39;
  }
LABEL_55:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      152,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
