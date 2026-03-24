/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01581AC
 * Callers:
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0055178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0058C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FBF0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  int v2; // esi
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 45, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  Object = 0LL;
  v2 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 47, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  else
  {
    v3 = Object;
    if ( *((_BYTE *)Object + 136) >= 2u )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1364);
    }
    v4 = v3[53];
    RIMLockExclusive(v4 + 104);
    if ( v4 )
    {
      if ( (*(_QWORD *)(v4 + 640) || *(_DWORD *)(v4 + 864)) && *(_QWORD *)(v4 + 32) != PsGetCurrentProcess(v6, v5) )
      {
        *((_DWORD *)v3 + 68) |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v3 + 72) |= 4u;
        qword_1C0254458 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v7 = *((_DWORD *)v3 + 68);
        if ( (v7 & 0x200000) != 0 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1385);
          v7 = *((_DWORD *)v3 + 68);
        }
        *((_DWORD *)v3 + 68) = v7 | 0x200000;
        ZwSetEvent(*(HANDLE *)(v4 + 384), 0LL);
        v2 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v4) )
      {
        v2 = RIMFreeDev(v8, (__int64)(v3 + 11));
      }
      else
      {
        v2 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 46, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    *(_QWORD *)(v4 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  return (unsigned int)v2;
}
