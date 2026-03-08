/*
 * XREFs of RemoteShadowStart @ 0x1C0205FFC
 * Callers:
 *     NtUserRemoteShadowStart @ 0x1C01DAD60 (NtUserRemoteShadowStart.c)
 * Callees:
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x1C0126610 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetRemoteHDEV @ 0x1C0205C54 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C02DF56C (bDrvShadowConnect.c)
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
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      (_DWORD)v7,
      22,
      4,
      9,
      22,
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  if ( PsGetCurrentProcess(v6, v4, v7) != gpepCSRSS )
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
