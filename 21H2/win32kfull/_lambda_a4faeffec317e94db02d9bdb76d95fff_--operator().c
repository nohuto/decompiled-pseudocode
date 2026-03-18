/*
 * XREFs of _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C007EA40
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C007E9B8 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 */

char __fastcall lambda_a4faeffec317e94db02d9bdb76d95fff_::operator()(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 TopLevelWindow; // rax
  char v7; // r9
  ShellWindowManagement *v9; // rcx

  if ( a4 || *(char *)(*(_QWORD *)(a2 + 40) + 20LL) >= 0 )
  {
    TopLevelWindow = GetTopLevelWindow(a2);
    if ( TopLevelWindow )
    {
      if ( a3 > 9 )
      {
        if ( a3 > 12 && a3 != 15 )
          return 0;
        if ( ShellWindowManagement::BehaviorEnabled(
               *(ShellWindowManagement **)(TopLevelWindow + 24),
               (const struct tagDESKTOP *)0x40)
          && !ShellWindowManagement::BehaviorEnabled(v9, (const struct tagDESKTOP *)8) )
        {
          return 1;
        }
      }
      else
      {
        if ( a3 != 9 )
          return 0;
        if ( (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 30LL) & 1) != 0
          && ShellWindowManagement::BehaviorEnabled(
               *(ShellWindowManagement **)(TopLevelWindow + 24),
               (const struct tagDESKTOP *)0x80) )
        {
          return v7;
        }
      }
      return a4;
    }
  }
  return 0;
}
