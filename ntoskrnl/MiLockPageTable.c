/*
 * XREFs of MiLockPageTable @ 0x140371890
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 0);
}
