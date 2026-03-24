/*
 * XREFs of MiReturnFullProcessCharges @ 0x1402989F0
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiRemoveVadCharges @ 0x14063A910 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14063BD10 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140660300 (MiDeleteVadBitmap.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x14063BE7C (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14065DD10 (PspChangeJobMemoryUsageByProcess.c)
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
