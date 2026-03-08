/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14032F7CC
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     MiMarkPteDirty @ 0x1402DFE5C (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x1402E46F8 (MiDirtySystemCachePte.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403CE458 (MiReturnSystemCacheRegionsToKva.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0);
  return v4;
}
