/*
 * XREFs of MiLockPageTable @ 0x140376B40
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return MiLockPageTableInternal(a1, a2, 0, a4);
}
