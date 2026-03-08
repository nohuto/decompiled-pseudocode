/*
 * XREFs of NtUserCreatePopupMenu @ 0x1C00ED870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00D76B8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

__int64 NtUserCreatePopupMenu()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct tagMENU *Menu; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  Menu = InternalCreateMenu(1, v0, v1);
  v4 = 0LL;
  if ( Menu )
    v4 = *(_QWORD *)Menu;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
