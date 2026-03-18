/*
 * XREFs of NtUserCreateMenu @ 0x1C00ACAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00A1618 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

__int64 NtUserCreateMenu()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct tagMENU *Menu; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  Menu = InternalCreateMenu(0, v0, v1);
  v7 = 0LL;
  if ( Menu )
    v7 = *(_QWORD *)Menu;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
