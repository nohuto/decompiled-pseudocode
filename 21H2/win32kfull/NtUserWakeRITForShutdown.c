/*
 * XREFs of NtUserWakeRITForShutdown @ 0x1C00FCFB0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRITForShutdown @ 0x1C00FCFF0 (WakeRITForShutdown.c)
 */

__int64 NtUserWakeRITForShutdown()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = WakeRITForShutdown();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
