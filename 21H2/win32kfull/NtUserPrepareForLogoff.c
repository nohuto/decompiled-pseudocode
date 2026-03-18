/*
 * XREFs of NtUserPrepareForLogoff @ 0x1C011D160
 * Callers:
 *     <none>
 * Callees:
 *     PrepareForLogoff @ 0x1C011D19C (PrepareForLogoff.c)
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
