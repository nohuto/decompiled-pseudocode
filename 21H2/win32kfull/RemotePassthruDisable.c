/*
 * XREFs of RemotePassthruDisable @ 0x1C021FC30
 * Callers:
 *     NtUserRemotePassthruDisable @ 0x1C01FBD60 (NtUserRemotePassthruDisable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x1C015359C (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C021FBE4 (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02BF390 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rsi
  int v3; // r8d
  PVOID v5; // r8
  HANDLE v6; // rdx
  __int64 v7; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  RemoteContext = GreGetRemoteContext();
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      26,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v5 = gConsoleShadowThinwireFileObject;
      v6 = ghConsoleShadowThinwireChannel;
      v7 = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v5 = (PVOID)gThinwireFileObject;
      v6 = (HANDLE)ghRemoteThinwireChannel;
      v7 = RemoteHDEV;
    }
    if ( !(unsigned int)bDrvReconnect(v7, v6, v5, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen(v10, v9, v11);
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
