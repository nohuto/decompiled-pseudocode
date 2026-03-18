/*
 * XREFs of RIMAddInputOfType @ 0x1C0175990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0074D88 (RIMDiscoverDevicesOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v2; // ebx
  int v4; // edi
  unsigned int *v5; // rsi
  int v6; // edx
  unsigned int v7; // eax
  PDEVICE_OBJECT v8; // rcx
  bool v9; // r8
  __int16 v10; // ax
  char v11; // dl
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

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
      26,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
    {
      v4 = -1073741637;
      v8 = WPP_GLOBAL_Control;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      v10 = 29;
    }
    else
    {
      if ( !v2 || ((v2 - 1) & v2) != 0 && (v2 & 0x1C) == 0 )
      {
        v4 = -1073741811;
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
            28,
            (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
        goto LABEL_42;
      }
      v7 = v5[21];
      if ( (v7 & v2) == 0 )
      {
        v5[21] = v2 | v7;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_42:
        *((_QWORD *)v5 + 14) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 26, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_43;
      }
      v4 = -1073741637;
      v8 = WPP_GLOBAL_Control;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      v10 = 27;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v8->AttachedDevice,
      v6,
      v9,
      (_DWORD)gRimLog,
      3,
      1,
      v10,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
    goto LABEL_42;
  }
LABEL_43:
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x1Eu,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v4);
  return (unsigned int)v4;
}
