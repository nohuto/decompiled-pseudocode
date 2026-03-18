/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C018614C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  bool v2; // dl
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  bool v18; // dl
  bool v19; // dl
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      47,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  Object = 0LL;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 < 0 )
  {
    v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        3,
        1,
        49,
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  else
  {
    v7 = Object;
    if ( *((_BYTE *)Object + 136) >= 2u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6);
    v8 = v7[53];
    RIMLockExclusive(v8 + 104);
    if ( v8 )
    {
      if ( (*(_QWORD *)(v8 + 864) || *(_DWORD *)(v8 + 1088))
        && *(_QWORD *)(v8 + 32) != PsGetCurrentProcess(v10, v9, v11, v12) )
      {
        *((_DWORD *)v7 + 68) |= 0x100000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v7 + 72) |= 4u;
        qword_1C029A118 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v16 = *((_DWORD *)v7 + 68);
        if ( (v16 & 0x800000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
          v16 = *((_DWORD *)v7 + 68);
        }
        *((_DWORD *)v7 + 68) = v16 | 0x800000;
        ZwSetEvent(*(HANDLE *)(v8 + 344), 0LL);
        v5 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v8) )
      {
        v5 = RIMFreeDev(v17, (__int64)(v7 + 11));
      }
      else
      {
        v5 = -1073741637;
        v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (_DWORD)gRimLog,
            3,
            1,
            48,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
    }
    *(_QWORD *)(v8 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v5;
}
