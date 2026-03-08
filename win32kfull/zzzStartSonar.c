/*
 * XREFs of zzzStartSonar @ 0x1C01BE79C
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C00E8310 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BD6A4 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01BDEF0 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01BE518 (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01BE6C0 (zzzStartFade.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(gpsi + 4960LL);
  *(_QWORD *)(SGDGetUserSessionState(a1) + 15968) = v1;
  if ( gfade[12] )
  {
    StopFade();
    *(_DWORD *)(SGDGetUserSessionState(v3) + 15964) = -1;
  }
  v4 = SGDGetUserSessionState(v2);
  v9.left = *(_DWORD *)(v4 + 15968) - 100;
  v9.right = *(_DWORD *)(v4 + 15968) + 100;
  v9.top = *(_DWORD *)(v4 + 15972) - 100;
  v9.bottom = *(_DWORD *)(v4 + 15972) + 100;
  *(_DWORD *)(SGDGetUserSessionState((unsigned int)v9.top) + 15964) = 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
  result = CreateFadeInternal(0LL, &v9, 0x3E8u, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
    zzzStartFade();
    zzzAnimateFade();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
    return (HDC)1;
  }
  return result;
}
