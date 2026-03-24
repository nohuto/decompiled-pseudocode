/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0152DB8
 * Callers:
 *     DestroyMonitor @ 0x1C0007AD0 (DestroyMonitor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  struct tagMONITOR *v2; // r15
  int v4; // eax
  int v5; // edx
  char v6; // r14
  _QWORD *v7; // rdi
  int v8; // edx
  __int64 i; // rbx
  __int64 v10; // rax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 73, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v7 + 81) )
    {
      v6 = -69;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 74, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v7 + 71));
      for ( i = v7[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1344) )
        {
          v10 = 0LL;
          if ( v2 )
            v10 = *(_QWORD *)v2;
          if ( *(_QWORD *)(i + 1352) == v10 )
          {
            if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 480) + 24LL) == 6 )
            {
              LODWORD(Object) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2414);
            }
            *(_QWORD *)(i + 1352) = 0LL;
            *(_DWORD *)(i + 1360) = 0;
          }
        }
      }
      v7[72] = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v7[14] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 75, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v6);
  }
}
