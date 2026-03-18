/*
 * XREFs of IsSpatialDelegationEnabledForThread @ 0x1C00A2620
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C000921C (_anonymous_namespace_--InMouseRawInputMode.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01E7AF8 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsSpatialDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
