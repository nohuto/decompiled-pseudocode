/*
 * XREFs of GetDelegationFlags @ 0x1C00CAB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetDelegationFlags()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
}
