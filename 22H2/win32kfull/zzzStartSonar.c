/*
 * XREFs of zzzStartSonar @ 0x1C01BD5FC
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C00AFC50 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BC500 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01BCD50 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01BD378 (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01BD520 (zzzStartFade.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(gpsi + 4960LL);
  *(_QWORD *)(SGDGetUserSessionState(a1) + 15968) = v1;
  if ( gfade[12] )
  {
    StopFade();
    *(_DWORD *)(SGDGetUserSessionState(v3) + 15964) = -1;
  }
  v4 = SGDGetUserSessionState(v2);
  v11.left = *(_DWORD *)(v4 + 15968) - 100;
  v11.right = *(_DWORD *)(v4 + 15968) + 100;
  v11.top = *(_DWORD *)(v4 + 15972) - 100;
  v11.bottom = *(_DWORD *)(v4 + 15972) + 100;
  *(_DWORD *)(SGDGetUserSessionState((unsigned int)v11.top) + 15964) = 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
  result = CreateFadeInternal(0LL, &v11, 0x3E8u, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
    zzzStartFade();
    zzzAnimateFade();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10, v8, v9);
    return (HDC)1;
  }
  return result;
}
