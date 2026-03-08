/*
 * XREFs of RemoteRedrawScreen @ 0x1C0126610
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00F7034 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     NtUserRemoteRedrawScreen @ 0x1C01DAC50 (NtUserRemoteRedrawScreen.c)
 *     RemotePassthruDisable @ 0x1C0205C9C (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0205DF0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0205FFC (RemoteShadowStart.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteRedrawScreen(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  void *v4; // rdi
  __int128 v6; // [rsp+40h] [rbp-39h] BYREF
  __int64 v7; // [rsp+50h] [rbp-29h]
  __int128 v8; // [rsp+58h] [rbp-21h] BYREF
  __int64 v9; // [rsp+68h] [rbp-11h]
  _BYTE v10[8]; // [rsp+70h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp-1h] BYREF
  int v12; // [rsp+88h] [rbp+Fh]
  char v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+B0h] [rbp+37h]

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
      13,
      4,
      9,
      13,
      (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm(v3, a2, a3) )
    {
      memset_0(v10, 0, 0x48uLL);
      EtwActivityIdControl(3u, &ActivityId);
      v14 = MEMORY[0xFFFFF78000000014];
      v12 = 66;
      v13 = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL, 0LL, v10);
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
        v7 = 0LL;
        v9 = 0LL;
        v6 = 0LL;
        v8 = 0LL;
        PushW32ThreadLock((__int64)v4, &v8, UserDereferenceObject);
        if ( v4 )
          ObfReferenceObject(v4);
        PushW32ThreadLock(gspdeskShouldBeForeground, &v6, UserDereferenceObject);
        if ( gspdeskShouldBeForeground )
          ObfReferenceObject(gspdeskShouldBeForeground);
        xxxSwitchDesktop((__int64)v4, gspdeskShouldBeForeground, 2, 0);
        PopAndFreeW32ThreadLock((__int64)&v6);
        PopAndFreeW32ThreadLock((__int64)&v8);
      }
      LockObjectAssignment(gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
