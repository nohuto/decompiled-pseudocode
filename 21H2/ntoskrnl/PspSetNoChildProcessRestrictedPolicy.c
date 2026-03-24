/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1406C0098
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406D8A1C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1402D1920 (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 */

void __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  struct _DMA_ADAPTER *v4; // rdi

  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v4);
}
