/*
 * XREFs of RIMResetPointerDevices @ 0x1C00B71A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(char *a1)
{
  bool v2; // dl
  int v3; // edx
  int v4; // ebp
  int v5; // r8d
  struct RawInputManagerObject *v6; // rdi
  __int64 i; // rbx
  bool v9; // dl
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  Object = 0LL;
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
      155,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v6 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal(v6) )
    {
      RIMLockExclusive((__int64)v6 + 792);
      for ( i = *((_QWORD *)v6 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(v6, *(_QWORD *)(i + 472), 0LL);
      }
      *((_QWORD *)v6 + 100) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v6 + 792, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v4 = -1073741637;
      v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          156,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    *((_QWORD *)v6 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v5,
      (_DWORD)gRimLog,
      4,
      1,
      157,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
