/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C017FAEC
 * Callers:
 *     DestroyMonitor @ 0x1C0050630 (DestroyMonitor.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  struct tagMONITOR *v2; // r14
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  char v7; // r15
  _QWORD *v8; // rdi
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 i; // rbx
  __int64 v14; // rax
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

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
      82,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v7 = v4;
  if ( v4 >= 0 )
  {
    v8 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v8 + 81) )
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
          83,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v8 + 99));
      for ( i = v8[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1336) )
        {
          v14 = v2 ? *(_QWORD *)v2 : 0LL;
          if ( *(_QWORD *)(i + 1344) == v14 )
          {
            if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 472) + 24LL) == 6 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
            *(_QWORD *)(i + 1344) = 0LL;
            *(_DWORD *)(i + 1352) = 0;
          }
        }
      }
      v8[100] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 99, 0LL);
      KeLeaveCriticalRegion();
    }
    v8[14] = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      84,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v7);
  }
}
