/*
 * XREFs of NtUserLoadCursorsAndIcons @ 0x1C00B0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C00B0C2C (-_LoadCursorsAndIcons@@YAHXZ.c)
 */

__int64 NtUserLoadCursorsAndIcons()
{
  __int64 CursorsAndIcons; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  CursorsAndIcons = (int)_LoadCursorsAndIcons();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return CursorsAndIcons;
}
