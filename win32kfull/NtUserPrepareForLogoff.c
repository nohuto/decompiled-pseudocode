/*
 * XREFs of NtUserPrepareForLogoff @ 0x1C00EED90
 * Callers:
 *     <none>
 * Callees:
 *     PrepareForLogoff @ 0x1C00EEDCC (PrepareForLogoff.c)
 */

__int64 NtUserPrepareForLogoff()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)PrepareForLogoff();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
