/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1407998F0
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x14070A66C (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140300474 (SeTokenSetNoChildProcessRestricted.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetNoChildProcessRestricted(v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
