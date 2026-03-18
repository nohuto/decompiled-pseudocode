/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C01840C0
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C01804F0 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, _OWORD *a3)
{
  _OWORD *v3; // r12
  char *v4; // rsi
  int v6; // edx
  int v7; // edi
  int v8; // r8d
  _BYTE *v9; // r14
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  PVOID v14; // rsi
  char *v15; // rcx
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  PVOID v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v18 = 0LL;
  Object = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      141,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v18);
  if ( v7 >= 0 )
  {
    v9 = v18;
    RIMLockExclusive((__int64)v18 + 104);
    if ( v9[81] )
    {
      v7 = -1073741637;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (_DWORD)gRimLog,
          3,
          1,
          143,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, &Object);
      if ( v7 >= 0 )
      {
        v14 = Object;
        if ( Object )
          v15 = (char *)Object + 88;
        else
          v15 = 0LL;
        if ( (*((_DWORD *)v15 + 50) & 0x80u) == 0 )
        {
          v7 = -1073741637;
          LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              v13,
              (_DWORD)gRimLog,
              3,
              1,
              142,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
          }
        }
        else
        {
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_OWORD *)MmUserProbeAddress;
          *v3 = *(_OWORD *)(*((_QWORD *)v15 + 59) + 140LL);
        }
        ObfDereferenceObject(v14);
      }
    }
    *((_QWORD *)v9 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v8,
      (_DWORD)gRimLog,
      4,
      1,
      144,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
