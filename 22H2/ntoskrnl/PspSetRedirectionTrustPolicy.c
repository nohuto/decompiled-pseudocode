/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1405CF6A4
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1407062EC (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F8680 (SeTokenSetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 */

void __fastcall PspSetRedirectionTrustPolicy(struct _KPROCESS *a1, int a2)
{
  struct _DMA_ADAPTER *v4; // rdi

  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenSetRedirectionTrustPolicy((__int64)v4, a2 == 2);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v4);
}
