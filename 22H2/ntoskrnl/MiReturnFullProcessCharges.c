/*
 * XREFs of MiReturnFullProcessCharges @ 0x1402DF130
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1406FA4D0 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1406FB4F0 (MiRemoveVadCharges.c)
 *     MiDeleteVadBitmap @ 0x140706C64 (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140744A70 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140765364 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FAC70 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1407454C4 (PsReturnProcessPageFileQuota.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
