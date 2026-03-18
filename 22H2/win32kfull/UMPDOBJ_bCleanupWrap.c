/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C015AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C02997BC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
