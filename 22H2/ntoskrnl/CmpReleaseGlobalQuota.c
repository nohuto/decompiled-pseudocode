/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1407099D8
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140616580 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x140702FE0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x140707258 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x140709780 (HvHiveCleanup.c)
 *     CmpFree @ 0x1407099B0 (CmpFree.c)
 *     CmpDeleteHive @ 0x14074EBE4 (CmpDeleteHive.c)
 *     HvpAddBin @ 0x14074F684 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A2A22C (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
