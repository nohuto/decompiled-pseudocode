/*
 * XREFs of RIMGetDeviceProperties @ 0x1C01A5390
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C01A2000 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C01A55D0 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  int v8; // edx
  int v9; // ebx
  int v10; // r8d
  _BYTE *v11; // rsi
  int v12; // edx
  int v13; // r8d
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF

  Object = 0LL;
  v5 = a3;
  v6 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      132,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v11[81] )
    {
      v9 = -1073741637;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (_DWORD)gRimLog,
          3,
          1,
          133,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
    }
    else
    {
      v9 = RIMGetDevicePropertiesLockfree(v6, v5, a4);
    }
    *((_QWORD *)v11 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v11);
  }
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      (_DWORD)gRimLog,
      4,
      1,
      134,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
