/*
 * XREFs of MiRewritePteWithLockBit @ 0x140371830
 * Callers:
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x14032F6D0 (MiMakePteClean.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x140649F5C (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x14064DD80 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140346D60 (MiUnlockNestedPageTableWritePte.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0);
  MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
