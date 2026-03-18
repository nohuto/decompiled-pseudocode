/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C0185D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  char *v2; // rbp
  int v4; // edx
  int v5; // edi
  int v6; // r8d
  HANDLE *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  PVOID v21; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

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
      50,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v21 = 0LL;
  Object = 0LL;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v21);
  if ( v5 >= 0 )
  {
    v7 = (HANDLE *)v21;
    RIMLockExclusive((__int64)v21 + 104);
    v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
    if ( v5 < 0 )
    {
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
          52,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    else
    {
      v12 = Object;
      if ( (v7[108] || *((_DWORD *)v7 + 272)) && v7[4] != (HANDLE)PsGetCurrentProcess(v9, v8, v10, v11) )
      {
        v12[68] |= 0x100000u;
        RIMLockExclusive((__int64)&gObListLock);
        v12[72] |= 4u;
        qword_1C029A118 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v16 = v12[68];
        if ( (v16 & 0x800000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
          v16 = v12[68];
        }
        v12[68] = v16 | 0x800000;
        ZwSetEvent(v7[43], 0LL);
        v5 = 0;
      }
      else if ( bRimDispositionNormal((struct RawInputManagerObject *)v7) )
      {
        if ( v12 )
          v19 = (__int64)(v12 + 22);
        else
          v19 = 0LL;
        v5 = RIMFreeDev(v18, v19);
      }
      else
      {
        v5 = -1073741637;
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (_DWORD)gRimLog,
            3,
            1,
            51,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      ObfDereferenceObject(v12);
    }
    v7[14] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
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
      53,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
