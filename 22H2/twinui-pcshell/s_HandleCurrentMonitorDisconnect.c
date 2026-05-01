/*
 * XREFs of s_HandleCurrentMonitorDisconnect @ 0x1803A0500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall s_HandleCurrentMonitorDisconnect(__int64 a1, struct IUnknown *a2, char a3)
{
  return ImmersiveMonitorHelper::HandleCurrentMonitorDisconnect(a1, a2, a3);
}
