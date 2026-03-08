/*
 * XREFs of MiReturnFullProcessCharges @ 0x140289980
 * Callers:
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x1406ECCF0 (MiRemoveVadCharges.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406DBAB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1406EC714 (PsReturnProcessPageFileQuota.c)
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
