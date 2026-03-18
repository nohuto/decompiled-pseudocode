/*
 * XREFs of EditionGetThreadDesktopEntryPoint @ 0x1C009B300
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C009B33C (_GetThreadDesktop.c)
 */

__int64 __fastcall EditionGetThreadDesktopEntryPoint(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 ThreadDesktop; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  ThreadDesktop = GetThreadDesktop(v3);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return ThreadDesktop;
}
