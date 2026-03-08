/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C01A7490
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C000E8C0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00F3B84 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00F3CE0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMQueryDev @ 0x1C0089258 (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  char *v2; // rdi
  int v4; // edx
  int v5; // ebx
  int v6; // r8d
  _BYTE *v7; // rsi
  int v8; // edx
  PVOID v9; // rdi
  char *v10; // rdx
  PVOID v12; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0LL;
  v2 = a2;
  Object = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      111,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v12);
  if ( v5 >= 0 )
  {
    v7 = v12;
    RIMLockExclusive((__int64)v12 + 104);
    RIMLockExclusive((__int64)(v7 + 760));
    if ( v7[81] || v7[82] )
    {
      v5 = -1073741637;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          112,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    }
    else
    {
      v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
      if ( v5 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v10 = (char *)Object + 72;
        else
          v10 = 0LL;
        if ( v10[48] == 2 )
          v5 = -1073741811;
        else
          v5 = RIMQueryDev((__int64)v7, (__int64)v10);
        ObfDereferenceObject(v9);
      }
    }
    *((_QWORD *)v7 + 96) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 760, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      113,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
