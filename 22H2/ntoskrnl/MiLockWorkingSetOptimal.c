/*
 * XREFs of MiLockWorkingSetOptimal @ 0x140290314
 * Callers:
 *     MiMarkPteDirty @ 0x14027ABCC (MiMarkPteDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiDirtySystemCachePte @ 0x1403159C8 (MiDirtySystemCachePte.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rsi

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1, a2, (__int64)a3, a4);
  MiLockPageTableInternal(a1, v5, 0LL);
  return v5;
}
