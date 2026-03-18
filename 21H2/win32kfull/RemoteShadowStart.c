/*
 * XREFs of RemoteShadowStart @ 0x1C021FF90
 * Callers:
 *     NtUserRemoteShadowStart @ 0x1C01FBF90 (NtUserRemoteShadowStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C015359C (RemoteRedrawScreen.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     GetRemoteHDEV @ 0x1C021FBE4 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C02BF5A0 (bDrvShadowConnect.c)
 */

__int64 __fastcall RemoteShadowStart(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 v4; // rdx
  __int64 RemoteContext; // r15
  PDEVICE_OBJECT v6; // rcx
  _UNKNOWN **v7; // r8
  void *v9; // rax
  void *v10; // rdi
  __int64 RemoteHDEV; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext();
  v6 = WPP_GLOBAL_Control;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      (_DWORD)v7,
      22,
      4,
      9,
      22,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( PsGetCurrentProcess(v6, v4) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v9 = (void *)Win32AllocPoolWithQuotaZInit(v2, 1769435989LL);
  v10 = v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  memmove(v9, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  v12 = bDrvShadowConnect(RemoteHDEV, v10, (unsigned int)v2);
  Win32FreePool(v10);
  if ( !v12 )
    return 3221880856LL;
  RemoteRedrawScreen(v14, v13, v15);
  SetPointer(1LL);
  *(_DWORD *)(gpsi + 2236LL) |= 2u;
  return 0LL;
}
