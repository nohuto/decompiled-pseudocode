/*
 * XREFs of NtUserDoInitMessagePumpHook @ 0x1C0014FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDoInitMessagePumpHook()
{
  EnterCrit(0LL, 0LL);
  ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL);
  UserSessionSwitchLeaveCrit(gptiCurrent);
  return 1LL;
}
