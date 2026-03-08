/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1407A5908
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1406140E0 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x14072C880 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 *     CmpFree @ 0x1407A58E0 (CmpFree.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A274CC (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
