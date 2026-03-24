/*
 * XREFs of RemoteShadowStart @ 0x1C02266D0
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawScreen @ 0x1C0163584 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     GetRemoteHDEV @ 0x1C0226328 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C02C0C08 (bDrvShadowConnect.c)
 */

__int64 __fastcall RemoteShadowStart(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 RemoteContext; // r15
  void *v9; // rax
  void *v10; // rdi
  __int64 RemoteHDEV; // rax
  int v12; // ebx
  int v13; // ecx

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(v5, v4, 9, 22, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( PsGetCurrentProcess(v5, v4, v6) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v9 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
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
  RemoteRedrawScreen(v13);
  SetPointer(1LL);
  *(_DWORD *)(gpsi + 2236LL) |= 2u;
  return 0LL;
}
