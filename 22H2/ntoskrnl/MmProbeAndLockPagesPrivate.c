/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1402F67E8
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406666C8 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  MiProbeAndLockPages(a1, 1, 3u);
}
