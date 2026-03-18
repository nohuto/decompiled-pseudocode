/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02007D8
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F42C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00C09DC (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  ShellWindowManagement *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx

  v3 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0
    && ShellWindowManagement::WindowSubjectToBehavior(a1, (const struct tagWND *)0xC, a3) )
  {
    v6 = (ShellWindowManagement *)*((_QWORD *)a1 + 3);
    if ( v6 )
    {
      v7 = *((_QWORD *)v6 + 41);
      if ( v7 )
      {
        if ( !IsThreadHungTimeCheck(*(const struct tagTHREADINFO **)(v7 + 16), gdwHungAppTimeout)
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
