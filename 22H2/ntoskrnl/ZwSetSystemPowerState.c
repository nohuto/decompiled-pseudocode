/*
 * XREFs of ZwSetSystemPowerState @ 0x1403FCFC0
 * Callers:
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemPowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
