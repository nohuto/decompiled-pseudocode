/*
 * XREFs of PsQueryProcessAttributes @ 0x1406D3448
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     PsQueryProcessAttributesByToken @ 0x1406D44E0 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v6; // rbx

  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v6, 0x746C6644u);
}
