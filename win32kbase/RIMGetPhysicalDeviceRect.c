__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, _OWORD *a3)
{
  _OWORD *v3; // r12
  int v5; // edx
  int v6; // edi
  int v7; // r8d
  _BYTE *v8; // r13
  char *v9; // r14
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  PVOID v13; // rsi
  char *v14; // rcx
  _UNKNOWN **v15; // r8
  PVOID Object[7]; // [rsp+50h] [rbp-38h] BYREF
  char *v18; // [rsp+98h] [rbp+10h]
  PVOID v19; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a2;
  v3 = a3;
  v19 = 0LL;
  Object[0] = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      141,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v19);
  if ( v6 >= 0 )
  {
    v8 = v19;
    v9 = (char *)v19 + 104;
    Object[1] = (char *)v19 + 104;
    RIMLockExclusive((__int64)v19 + 104);
    if ( v8[81] )
    {
      v6 = -1073741637;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
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
          143,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v18, 3u, 1, Object);
      if ( v6 >= 0 )
      {
        v13 = Object[0];
        if ( Object[0] )
          v14 = (char *)Object[0] + 72;
        else
          v14 = 0LL;
        if ( (*((_DWORD *)v14 + 50) & 0x80u) == 0 )
        {
          v6 = -1073741637;
          LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v15 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              (_DWORD)v15,
              (_DWORD)gRimLog,
              3,
              1,
              142,
              (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
          }
        }
        else
        {
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_OWORD *)MmUserProbeAddress;
          *v3 = *(_OWORD *)(*((_QWORD *)v14 + 59) + 140LL);
        }
        ObfDereferenceObject(v13);
      }
    }
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      144,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
