/*
 * XREFs of IsAnyDelegationEnabled @ 0x1C00C9430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsAnyDelegationEnabled()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 2) != 0;
}
