/*
 * XREFs of NtUserLoadCursorsAndIcons @ 0x1C00F5D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C010A118 (-_LoadCursorsAndIcons@@YAHXZ.c)
 */

__int64 NtUserLoadCursorsAndIcons()
{
  __int64 CursorsAndIcons; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  CursorsAndIcons = (int)_LoadCursorsAndIcons();
  UserSessionSwitchLeaveCrit(v1);
  return CursorsAndIcons;
}
