/*
 * XREFs of NtUserInvalidateRect @ 0x1C0050500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserInvalidateRect(__int64 a1, ULONG64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // r15
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  struct tagWND *v13; // r14
  __int128 *v14; // rsi
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v21; // [rsp+24h] [rbp-84h]
  __int128 v23; // [rsp+50h] [rbp-58h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h]
  __int128 v25; // [rsp+68h] [rbp-40h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = SGDGetUserSessionState(v3);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v10 = 0;
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v21 = *(_DWORD *)(v5 + 1548);
    *(_DWORD *)(v5 + 1548) = 0;
    v10 = 1;
  }
  if ( a1 )
  {
    v13 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v13 )
    {
      v15 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (__int128 *)a2;
  if ( a2 )
  {
    if ( a2 >= MmUserProbeAddress )
      v14 = (__int128 *)MmUserProbeAddress;
    v25 = *v14;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces(&v25, &v25, 0LL, v13);
  }
  ThreadLock(v13, &v23);
  v15 = xxxRedrawWindow(v13);
  ThreadUnlock1(v17, v16, v18);
LABEL_11:
  if ( v10 )
  {
    v12 = v21;
    *(_DWORD *)(v5 + 1548) = v21;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v15;
}
