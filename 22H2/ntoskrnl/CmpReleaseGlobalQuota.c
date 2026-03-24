/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1406574DC
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14065702C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 *     CmpFree @ 0x14068C410 (CmpFree.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 *     CmpAllocate @ 0x1407201B0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x14072090C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140721E28 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x14079FB58 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
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
