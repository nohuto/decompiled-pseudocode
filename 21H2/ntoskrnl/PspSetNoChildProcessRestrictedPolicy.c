/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1406E71BC
 * Callers:
 *     PspApplyMitigationOptions @ 0x14070E104 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenSetNoChildProcessRestricted @ 0x14025A33C (SeTokenSetNoChildProcessRestricted.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 */

__int64 __fastcall PspSetNoChildProcessRestrictedPolicy(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetNoChildProcessRestricted(v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
