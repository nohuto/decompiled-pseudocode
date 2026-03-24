/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1C0163BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDwmGetRemoteSessionOcclusionState()
{
  return gbFreezeScreenUpdates;
}
