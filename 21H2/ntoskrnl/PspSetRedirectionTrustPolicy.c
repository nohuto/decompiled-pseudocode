/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1405CF6A4
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406AFCFC (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F9084 (SeTokenSetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 */

void __fastcall PspSetRedirectionTrustPolicy(struct _KPROCESS *a1, int a2)
{
  struct _DMA_ADAPTER *v4; // rdi

  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenSetRedirectionTrustPolicy((__int64)v4, a2 == 2);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v4);
}
