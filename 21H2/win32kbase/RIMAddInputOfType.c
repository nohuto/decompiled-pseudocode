/*
 * XREFs of RIMAddInputOfType @ 0x1C01816C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0044B20 (RIMDiscoverDevicesOfInputType.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v2; // ebx
  int v4; // edx
  int v5; // edi
  int v6; // r8d
  _DWORD *v7; // rsi
  int v8; // edx
  unsigned int *v9; // rcx
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  bool v12; // r8
  __int16 v13; // ax
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
      26,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v7) )
    {
      if ( !v2 || ((v2 - 1) & v2) != 0 && (v2 & 0x1C) == 0 )
      {
        v5 = -1073741811;
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
            28,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
        goto LABEL_41;
      }
      v10 = v7[21];
      if ( (v10 & v2) == 0 )
      {
        v7[21] = v2 | v10;
        RIMDiscoverDevicesOfInputType(v9);
LABEL_41:
        *((_QWORD *)v7 + 14) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 26, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v7);
        goto LABEL_42;
      }
      v5 = -1073741637;
      v11 = WPP_GLOBAL_Control;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v13 = 27;
    }
    else
    {
      v5 = -1073741637;
      v11 = WPP_GLOBAL_Control;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v13 = 29;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v11->AttachedDevice,
      v8,
      v12,
      (_DWORD)gRimLog,
      3,
      1,
      v13,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    goto LABEL_41;
  }
LABEL_42:
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      30,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
