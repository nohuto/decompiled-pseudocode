/*
 * XREFs of ZwSetSystemPowerState @ 0x14041DDE0
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemPowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
