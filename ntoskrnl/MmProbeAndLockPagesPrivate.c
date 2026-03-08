/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x140242D40
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406B69F0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  return MiProbeAndLockPages(a1, 1, 3);
}
