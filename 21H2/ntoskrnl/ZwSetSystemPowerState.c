/*
 * XREFs of ZwSetSystemPowerState @ 0x14041EE20
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemPowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
