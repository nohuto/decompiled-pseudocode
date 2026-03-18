/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C0179770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(char *a1, int *a2)
{
  int *v2; // r14
  int v4; // esi
  _QWORD *v5; // rbx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // dl
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = a2;
  *a2 = 0;
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
      114,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          115,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 95));
      v7 = v5[60];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 1016);
        if ( v8 )
          *v2 = (*(_DWORD *)(v8 + 2684) >> 2) & 1;
      }
      v5[96] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 95, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x74u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v4);
  return (unsigned int)v4;
}
