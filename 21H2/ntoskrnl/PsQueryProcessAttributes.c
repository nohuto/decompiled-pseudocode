/*
 * XREFs of PsQueryProcessAttributes @ 0x14070BA00
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall PsQueryProcessAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx

  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v6, 0x746C6644u);
}
