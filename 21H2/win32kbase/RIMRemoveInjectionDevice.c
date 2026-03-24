/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C0157FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0054178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  char *v2; // rdi
  int v4; // edx
  int v5; // ebx
  HANDLE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  PVOID v15; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 48, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v15 = 0LL;
  Object = 0LL;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v15);
  if ( v5 >= 0 )
  {
    v6 = (HANDLE *)v15;
    RIMLockExclusive((__int64)v15 + 104);
    v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 50, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v9 = Object;
      if ( (v6[80] || *((_DWORD *)v6 + 216)) && v6[4] != (HANDLE)PsGetCurrentProcess(v8, v7) )
      {
        v9[68] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v9[72] |= 4u;
        qword_1C0255428 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v10 = v9[68];
        if ( (v10 & 0x200000) != 0 )
        {
          LODWORD(v15) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1477);
          v10 = v9[68];
        }
        v9[68] = v10 | 0x200000;
        ZwSetEvent(v6[48], 0LL);
        v5 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v6) )
      {
        v13 = (__int64)(v9 + 22);
        if ( !v9 )
          v13 = 0LL;
        v5 = RIMFreeDev(v12, v13);
      }
      else
      {
        v5 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 49, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
      }
      ObfDereferenceObject(v9);
    }
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 51, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
