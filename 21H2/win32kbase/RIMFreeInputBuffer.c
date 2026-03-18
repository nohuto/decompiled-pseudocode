/*
 * XREFs of RIMFreeInputBuffer @ 0x1C0183000
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1C0180450 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMFreeUserMem @ 0x1C01895C0 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  char v7; // bp
  struct RawInputManagerObject *v8; // rdi
  int v9; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      92,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  result = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal(v8) )
    {
      RIMLockExclusive((__int64)v8 + 792);
      RIMFreeUserMem(v8, v2);
      *((_QWORD *)v8 + 100) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v8 + 792, 0LL);
      KeLeaveCriticalRegion();
    }
    else
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
          93,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    *((_QWORD *)v8 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v8 + 104, 0LL);
    KeLeaveCriticalRegion();
    result = ObfDereferenceObject(v8);
  }
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_D(
             WPP_GLOBAL_Control->AttachedDevice,
             v5,
             v6,
             (_DWORD)gRimLog,
             4,
             1,
             94,
             (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
             v7);
  }
  return result;
}
