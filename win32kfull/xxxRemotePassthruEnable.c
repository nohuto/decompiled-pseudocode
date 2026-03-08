/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C0206C6C
 * Callers:
 *     NtUserRemotePassthruEnable @ 0x1C01DAB70 (NtUserRemotePassthruEnable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00F6E08 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0128FB4 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02DF008 (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  Gre::Base *RemoteContext; // rsi
  __int64 v3; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *OutputBuffer; // rdi
  __int64 v10; // rcx
  ULONG InputBufferLength; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  RemoteContext = (Gre::Base *)GreGetRemoteContext();
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      25,
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  if ( PsGetCurrentProcess(v1, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  dword_1C03629B4 = *(_QWORD *)(SGDGetUserSessionState(gpepCSRSS) + 13760) != gapulCvt_VK_84;
  ZwDeviceIoControlFile(
    gRemoteKeyboardChannelHandlePair,
    0LL,
    0LL,
    0LL,
    &IoStatusBlock,
    0x38080Fu,
    &dword_1C03629B4,
    4u,
    0LL,
    0);
  if ( *(_DWORD *)(SGDGetUserSessionState(v5) + 13888) )
  {
    OutputBuffer = *(void **)(SGDGetUserSessionState(v7) + 13840);
    InputBufferLength = *(_DWORD *)(SGDGetUserSessionState(v10) + 13888);
    v13 = SGDGetUserSessionState(v12);
    ZwDeviceIoControlFile(
      gRemoteKeyboardChannelHandlePair,
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      *(PVOID *)(v13 + 13880),
      InputBufferLength,
      OutputBuffer,
      0);
  }
  xxxRemoteStopScreenUpdates(v7, v6, v8);
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
