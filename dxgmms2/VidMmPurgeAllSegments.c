/*
 * XREFs of VidMmPurgeAllSegments @ 0x1C0018C40
 * Callers:
 *     <none>
 * Callees:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B4D90 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VidMmPurgeAllSegments()
{
  return VIDMM_GLOBAL::PurgeAllSegments();
}
