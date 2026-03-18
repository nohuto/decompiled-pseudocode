/*
 * XREFs of RemoteRedrawScreen @ 0x1C015359C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 *     NtUserRemoteRedrawScreen @ 0x1C01FBE80 (NtUserRemoteRedrawScreen.c)
 *     RemotePassthruDisable @ 0x1C021FC30 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C021FD84 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C021FF90 (RemoteShadowStart.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteRedrawScreen(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  void *v4; // rdi
  __int64 v5; // rdx
  __int128 v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h]
  __int128 v9; // [rsp+58h] [rbp-21h] BYREF
  __int64 v10; // [rsp+68h] [rbp-11h]
  _QWORD v11[10]; // [rsp+70h] [rbp-9h] BYREF

  v3 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      12,
      4,
      9,
      12,
      (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm(v3, a2, a3) )
    {
      memset(v11, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v11[1]);
      v11[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v11[3]) = 66;
      LOBYTE(v11[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL, 0LL, v11);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v4 = *(void **)(gspdeskShouldBeForeground + 40LL);
      if ( (*(_DWORD *)(gspdeskShouldBeForeground + 48LL) & 8) == 0 )
      {
        v8 = 0LL;
        v10 = 0LL;
        v7 = 0LL;
        v9 = 0LL;
        PushW32ThreadLock((__int64)v4, &v9, UserDereferenceObject);
        if ( v4 )
          ObfReferenceObject(v4);
        PushW32ThreadLock(gspdeskShouldBeForeground, &v7, UserDereferenceObject);
        v5 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v5 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v4, v5, 2);
        PopAndFreeW32ThreadLock((__int64)&v7);
        PopAndFreeW32ThreadLock((__int64)&v9);
      }
      LockObjectAssignment(gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
