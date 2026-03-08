/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C004C410
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    v8 = SGDGetUserSessionState(v5);
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 8)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    *(_QWORD *)&v15 = *(_QWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 416) = &v15;
    *((_QWORD *)&v15 + 1) = v7;
    HMLockObject(v7);
    if ( (*(_DWORD *)(v7 + 320) & 0x80000) != 0 && IsTopLevelWindow(v7) )
      v6 = 1LL;
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
