/*
 * XREFs of PsQueryProcessAttributes @ 0x14071DE84
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x14071DEF0 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v6; // rbx

  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v6, 0x746C6644u);
}
