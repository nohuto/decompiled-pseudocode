/*
 * XREFs of RemoteRedrawScreen @ 0x1C0163584
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0128460 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0162570 (xxxRemoteReconnect.c)
 *     NtUserRemoteRedrawScreen @ 0x1C0200FC0 (NtUserRemoteRedrawScreen.c)
 *     RemotePassthruDisable @ 0x1C0226400 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0226500 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02266D0 (RemoteShadowStart.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteRedrawScreen(int a1)
{
  void *v1; // rdi
  __int64 v2; // rdx
  __int128 v4; // [rsp+30h] [rbp-39h] BYREF
  __int64 v5; // [rsp+40h] [rbp-29h]
  __int128 v6; // [rsp+48h] [rbp-21h] BYREF
  __int64 v7; // [rsp+58h] [rbp-11h]
  _QWORD v8[10]; // [rsp+60h] [rbp-9h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 9, 19, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v8, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v8[1]);
      v8[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v8[3]) = 66;
      LOBYTE(v8[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL, 0LL, v8);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v1 = *(void **)(gspdeskShouldBeForeground + 40LL);
      if ( (*(_DWORD *)(gspdeskShouldBeForeground + 48LL) & 8) == 0 )
      {
        v5 = 0LL;
        v7 = 0LL;
        v4 = 0LL;
        v6 = 0LL;
        PushW32ThreadLock((__int64)v1, &v6, UserDereferenceObject);
        if ( v1 )
          ObfReferenceObject(v1);
        PushW32ThreadLock(gspdeskShouldBeForeground, &v4, UserDereferenceObject);
        v2 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v2 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v1, v2, 2);
        PopAndFreeW32ThreadLock((__int64)&v4);
        PopAndFreeW32ThreadLock((__int64)&v6);
      }
      LockObjectAssignment(gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
