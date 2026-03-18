/*
 * XREFs of MiRewritePteWithLockBit @ 0x140376AE0
 * Callers:
 *     MiRevertValidPte @ 0x140278960 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x140285750 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x14064C578 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x1406503D4 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0, a4);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
