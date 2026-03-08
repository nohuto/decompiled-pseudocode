/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C01E4830
 * Callers:
 *     NtUserEnableSessionForMMCSS @ 0x1C01D0540 (NtUserEnableSessionForMMCSS.c)
 * Callees:
 *     WakeRIT @ 0x1C00DB568 (WakeRIT.c)
 *     ?ToggleMMCSSForDT@@YAXXZ @ 0x1C01BF9C8 (-ToggleMMCSSForDT@@YAXXZ.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  GreLockDwmState();
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      _InterlockedOr(gpsi, 0x1000u);
    else
      _InterlockedAnd(gpsi, 0xFFFFEFFF);
    WakeRIT(4u);
    ToggleMMCSSForDT(v9, v8, v10);
    v2 = 1LL;
  }
  GreUnlockDwmState(v7);
  return v2;
}
