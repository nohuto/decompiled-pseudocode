/*
 * XREFs of MiLockPage @ 0x14054F844
 * Callers:
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiReadyLargePageToFree @ 0x1402AA3C0 (MiReadyLargePageToFree.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E6C70 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x1402EEF1C (MiLargeFreePageToMdl.c)
 *     MiScanPagefileSpace @ 0x1408D0820 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C5CE0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiLockPageInline(a1, a2, a3, a4);
}
