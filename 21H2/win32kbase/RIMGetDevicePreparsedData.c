/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C0183250
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C0180470 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C01834A0 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v9; // edx
  int v10; // ebx
  int v11; // r8d
  _BYTE *v12; // rdi
  int v13; // edx
  int v14; // r8d
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF

  Object = 0LL;
  v6 = a3;
  v7 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      129,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v12 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v12[81] )
    {
      v10 = -1073741637;
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          (_DWORD)gRimLog,
          3,
          1,
          130,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
    }
    else
    {
      v10 = RIMGetDevicePreparsedDataLockfree(v7, v6, a4, a5);
    }
    *((_QWORD *)v12 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
  }
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      (_DWORD)gRimLog,
      4,
      1,
      131,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
