/*
 * XREFs of zzzStartSonar @ 0x1C01E2F90
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C01081E0 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E1D94 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01E2D24 (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01E2EB4 (zzzStartFade.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v7; // [rsp+38h] [rbp-20h] BYREF

  gptSonarCenter = *(_QWORD *)(gpsi + 4960LL);
  if ( LODWORD(gfade[6]) )
    StopFade();
  giSonarRadius = 100;
  v7.left = gptSonarCenter - 100;
  v7.right = gptSonarCenter + 100;
  v7.top = HIDWORD(gptSonarCenter) - 100;
  v7.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter), a2);
  result = CreateFadeInternal(0LL, &v7, 1000LL, 192LL, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
    zzzStartFade();
    zzzAnimateFade();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6, v4, v5);
    return (HDC)1;
  }
  return result;
}
