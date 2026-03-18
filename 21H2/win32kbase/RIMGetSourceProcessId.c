/*
 * XREFs of RIMGetSourceProcessId @ 0x1C01843F0
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C0180540 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, ULONG64 a3)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r14d
  _BYTE *v7; // r13
  int v8; // edx
  int v9; // r8d
  PVOID v10; // rsi
  char *v11; // r15
  __int64 v12; // rdx
  _DWORD *v13; // rax
  PVOID v15; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  char *v17; // [rsp+98h] [rbp+10h]
  ULONG64 v18; // [rsp+A0h] [rbp+18h]
  int v19; // [rsp+A8h] [rbp+20h]

  v18 = a3;
  v17 = a2;
  v15 = 0LL;
  Object = 0LL;
  v19 = 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      145,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v15);
  if ( v6 >= 0 )
  {
    v7 = v15;
    RIMLockExclusive((__int64)v15 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gRimLog,
          3,
          1,
          146,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v17, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 88;
        else
          v11 = 0LL;
        if ( *((_QWORD *)v11 + 48) )
        {
          RIMLockExclusive((__int64)&gObListLock);
          v12 = *(_QWORD *)(*((_QWORD *)v11 + 48) + 88LL);
          if ( v12 )
            v19 = *(_DWORD *)(v12 + 56);
          qword_1C029A118 = 0LL;
          ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
          KeLeaveCriticalRegion();
        }
        v13 = (_DWORD *)v18;
        if ( v18 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        *v13 = v19;
        ObfDereferenceObject(v10);
      }
    }
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (_DWORD)gRimLog,
      4,
      1,
      147,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
