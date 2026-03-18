/*
 * XREFs of GetDelegationFlags @ 0x1C00BB580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetDelegationFlags()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
}
