/*
 * XREFs of MiRewritePteWithLockBit @ 0x1403B65B8
 * Callers:
 *     MiMakePteClean @ 0x14028FBEC (MiMakePteClean.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x14054E124 (MiWriteAweClusterPte.c)
 *     MiDeleteLargeUserPde @ 0x14054F89C (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14028CECC (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0LL);
  return MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
