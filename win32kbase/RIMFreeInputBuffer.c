__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  char v7; // bp
  _QWORD *v8; // rdi
  int v9; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      92,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  result = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v8 + 81) || *((_BYTE *)v8 + 82) )
    {
      v7 = -69;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          93,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v8 + 95));
      RIMFreeUserMem(v8, v2);
      v8[96] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 95, 0LL);
      KeLeaveCriticalRegion();
    }
    v8[14] = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 13, 0LL);
    KeLeaveCriticalRegion();
    result = ObfDereferenceObject(v8);
  }
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_d(
             WPP_GLOBAL_Control->AttachedDevice,
             v5,
             v6,
             (_DWORD)gRimLog,
             4,
             1,
             94,
             (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
             v7);
  }
  return result;
}
