/*
 * XREFs of PsQueryProcessAttributes @ 0x140600F24
 * Callers:
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x14062B8D4 (PfpPrivSourceEnum.c)
 *     PopCreateUserPowerRequest @ 0x1406F71C8 (PopCreateUserPowerRequest.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x140601050 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 */

void __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rbx

  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
