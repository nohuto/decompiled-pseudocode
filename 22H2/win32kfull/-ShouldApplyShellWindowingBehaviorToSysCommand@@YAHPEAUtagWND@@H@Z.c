/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0223520
 * Callers:
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000798C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsThreadHung @ 0x1C003E0F4 (IsThreadHung.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C004B54C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B590 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  ShellWindowManagement *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx

  v3 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0
    && ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)a1, (struct tagWND *)0xC, a3) )
  {
    v6 = (ShellWindowManagement *)*((_QWORD *)a1 + 3);
    if ( v6 )
    {
      v7 = *((_QWORD *)v6 + 41);
      if ( v7 )
      {
        if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v7 + 16), 0)
          && (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
          v8 = 4LL;
          if ( a2 != 61456 )
            v8 = 8LL;
          return ShellWindowManagement::BehaviorEnabled(v6, (const struct tagDESKTOP *)v8);
        }
      }
    }
  }
  return v3;
}
