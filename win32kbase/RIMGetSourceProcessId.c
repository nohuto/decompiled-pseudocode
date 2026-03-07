__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, ULONG64 a3)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r14d
  _BYTE *v7; // r12
  char *v8; // r13
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // rsi
  char *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *v22; // rax
  _UNKNOWN **v23; // r8
  PVOID v25; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+58h] [rbp-40h] BYREF
  char *v27; // [rsp+A8h] [rbp+10h]
  ULONG64 v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B8h] [rbp+20h]

  v28 = a3;
  v27 = a2;
  v25 = 0LL;
  Object[0] = 0LL;
  v29 = 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
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
      145,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v25);
  if ( v6 >= 0 )
  {
    v7 = v25;
    v8 = (char *)v25 + 104;
    Object[1] = (char *)v25 + 104;
    RIMLockExclusive((__int64)v25 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v23 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          (_DWORD)v23,
          (_DWORD)gRimLog,
          3,
          1,
          146,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v27, 3u, 1, Object);
      if ( v6 >= 0 )
      {
        v14 = Object[0];
        if ( Object[0] )
          v15 = (char *)Object[0] + 72;
        else
          v15 = 0LL;
        if ( *((_QWORD *)v15 + 48) )
        {
          v16 = SGDGetUserSessionState(v11, v10, v12, v13);
          RIMLockExclusive(v16 + 240);
          v20 = *(_QWORD *)(*((_QWORD *)v15 + 48) + 88LL);
          if ( v20 )
            v29 = *(_DWORD *)(v20 + 56);
          v21 = SGDGetUserSessionState(v20, v17, v18, v19);
          *(_QWORD *)(v21 + 248) = 0LL;
          ExReleasePushLockExclusiveEx(v21 + 240, 0LL);
          KeLeaveCriticalRegion();
        }
        v22 = (_DWORD *)v28;
        if ( v28 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v29;
        ObfDereferenceObject(v14);
      }
    }
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (_DWORD)gRimLog,
      4,
      1,
      147,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
