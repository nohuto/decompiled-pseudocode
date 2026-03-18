/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C00FD080
 * Callers:
 *     NtUserEnableSessionForMMCSS @ 0x1C00FD040 (NtUserEnableSessionForMMCSS.c)
 * Callees:
 *     ?ToggleMMCSSForDT@@YAXXZ @ 0x1C00FD10C (-ToggleMMCSSForDT@@YAXXZ.c)
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax

  GreLockDwmState();
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      _InterlockedOr(gpsi, 0x1000u);
    else
      _InterlockedAnd(gpsi, 0xFFFFEFFF);
    WakeRIT(4LL);
    ToggleMMCSSForDT();
    v2 = 1LL;
  }
  GreUnlockDwmState();
  return v2;
}
