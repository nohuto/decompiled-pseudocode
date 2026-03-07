__int64 __fastcall RIMOnTimerNotification(char *a1)
{
  bool v2; // dl
  int v3; // edx
  int v4; // esi
  int v5; // r8d
  union _LARGE_INTEGER v6; // rbx
  bool v7; // dl
  bool v8; // dl
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
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v4 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 104);
    if ( *(_BYTE *)(v6.QuadPart + 81) || *(_BYTE *)(v6.QuadPart + 82) )
    {
      v4 = -1073741637;
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          77,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    }
    else
    {
      RIMLockExclusive(v6.QuadPart + 760);
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
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      RIMEndAllStaleContacts((struct RawInputManagerObject *)v6.QuadPart);
      if ( *(_DWORD *)(v6.QuadPart + 464) )
      {
        DueTime.QuadPart = -1000000LL;
        ZwSetTimer(*(HANDLE *)(v6.QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
      }
      else
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 336), 0LL);
        *(_DWORD *)(v6.QuadPart + 468) = 0;
      }
      *(_QWORD *)(v6.QuadPart + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v6.QuadPart + 760, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v6.QuadPart + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v5,
      (_DWORD)gRimLog,
      4,
      1,
      78,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
