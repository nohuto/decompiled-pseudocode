/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C0220C50
 * Callers:
 *     NtUserRemotePassthruEnable @ 0x1C01FBDA0 (NtUserRemotePassthruEnable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0123460 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0154A58 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02BF004 (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbx
  int v3; // r8d
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
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
      25,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0) != gpepCSRSS )
    return 3221225506LL;
  dword_1C033BE38 = gapulCvt_VK != gapulCvt_VK_84;
  ZwDeviceIoControlFile(
    gRemoteKeyboardChannelHandlePair,
    0LL,
    0LL,
    0LL,
    &IoStatusBlock,
    0x38080Fu,
    &dword_1C033BE38,
    4u,
    0LL,
    0);
  v7 = guKbdTblSize;
  if ( guKbdTblSize )
    ZwDeviceIoControlFile(
      gRemoteKeyboardChannelHandlePair,
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      ghKbdTblBase,
      guKbdTblSize,
      gpKbdTbl,
      0);
  xxxRemoteStopScreenUpdates(v5, v7, v6);
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
