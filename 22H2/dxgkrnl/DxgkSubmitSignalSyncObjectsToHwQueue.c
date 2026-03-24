/*
 * XREFs of DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C0274DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C026D814 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueue(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkSubmitSignalSyncObjectsToHwQueueInternal(a1, 1, a3);
}
