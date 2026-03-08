/*
 * XREFs of KeIsCoreIsolationMitigationPolicyEnforceable @ 0x140296974
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsCoreIsolationMitigationPolicyEnforceable()
{
  return KiCoreIsolationEnforceable != 0;
}
