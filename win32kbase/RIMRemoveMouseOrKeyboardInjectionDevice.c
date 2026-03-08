/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01A7B1C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  char v2; // dl
  int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  char v20; // dl
  char v21; // dl
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      47,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  Object = 0LL;
  v3 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v21 = 0;
    }
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        3,
        1,
        49,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  else
  {
    v4 = Object;
    if ( *((_BYTE *)Object + 120) >= 2u )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1437);
    }
    v5 = v4[51];
    RIMLockExclusive(v5 + 104);
    if ( v5 )
    {
      if ( (*(_QWORD *)(v5 + 832) || *(_DWORD *)(v5 + 1056))
        && *(_QWORD *)(v5 + 32) != PsGetCurrentProcess(v7, v6, v8, v9) )
      {
        *((_DWORD *)v4 + 64) |= 0x100000u;
        v14 = SGDGetUserSessionState(v11, v10, v12, v13);
        RIMLockExclusive(v14 + 240);
        *((_DWORD *)v4 + 68) |= 4u;
        v19 = SGDGetUserSessionState(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 248) = 0LL;
        ExReleasePushLockExclusiveEx(v19 + 240, 0LL);
        KeLeaveCriticalRegion();
        if ( (v4[32] & 0x800000) != 0 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1458);
        }
        *((_DWORD *)v4 + 64) |= 0x800000u;
        ZwSetEvent(*(HANDLE *)(v5 + 344), 0LL);
        v3 = 0;
      }
      else if ( *(_BYTE *)(v5 + 81) || *(_BYTE *)(v5 + 82) )
      {
        v3 = -1073741637;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          v20 = 0;
        }
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (_DWORD)gRimLog,
            3,
            1,
            48,
            (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      else
      {
        v3 = RIMFreeDev(v5, (__int64)(v4 + 9));
      }
    }
    *(_QWORD *)(v5 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
