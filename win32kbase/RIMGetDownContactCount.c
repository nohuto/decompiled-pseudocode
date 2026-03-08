/*
 * XREFs of RIMGetDownContactCount @ 0x1C01A5A80
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMGetDownContactCount(char *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  int v4; // edx
  int v5; // esi
  int v6; // r8d
  _DWORD *v7; // rdi
  int v8; // edx
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = a2;
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
      117,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  *v2 = 0;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v7 + 81) || *((_BYTE *)v7 + 82) )
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
          118,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v7 + 190));
      *v2 = v7[118];
      *((_QWORD *)v7 + 96) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 190, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 26, 0LL);
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
      119,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
