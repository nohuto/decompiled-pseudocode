/*
 * XREFs of RIMOnTimerNotification @ 0x1C01857B0
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C0180930 (NtRIMOnTimerNotification.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01DC610 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMEndAllStaleContacts @ 0x1C00E704A (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0205F80 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1)
{
  bool v2; // dl
  int v3; // edx
  int v4; // esi
  int v5; // r8d
  __int64 QuadPart; // rbx
  bool v7; // dl
  __int64 v8; // rcx
  bool v9; // dl
  union _LARGE_INTEGER DueTime; // [rsp+78h] [rbp+10h] BYREF

  DueTime.QuadPart = 0LL;
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
      75,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v4 >= 0 )
  {
    QuadPart = DueTime.QuadPart;
    RIMLockExclusive(DueTime.QuadPart + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)QuadPart) )
    {
      RIMLockExclusive(QuadPart + 792);
      v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          4,
          1,
          76,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      RIMEndAllStaleContacts(QuadPart);
      if ( *(_DWORD *)(QuadPart + 464) )
      {
        DueTime.QuadPart = -1000000LL;
        ZwSetTimer(*(HANDLE *)(QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
      }
      else
      {
        ZwCancelTimer(*(HANDLE *)(QuadPart + 336), 0LL);
        *(_DWORD *)(QuadPart + 468) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v8, 0LL);
      }
      *(_QWORD *)(QuadPart + 800) = 0LL;
      ExReleasePushLockExclusiveEx(QuadPart + 792, 0LL);
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
          77,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    *(_QWORD *)(QuadPart + 112) = 0LL;
    ExReleasePushLockExclusiveEx(QuadPart + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)QuadPart);
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
      78,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
