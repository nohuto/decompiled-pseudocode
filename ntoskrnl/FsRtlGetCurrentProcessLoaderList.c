/*
 * XREFs of FsRtlGetCurrentProcessLoaderList @ 0x14093BD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlGetCurrentProcessLoaderList()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24] + 24) + 16LL;
}
