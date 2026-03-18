/*
 * XREFs of DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C0231770
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0318FBC (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueue(const struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1)
{
  return DxgkSubmitSignalSyncObjectsToHwQueueInternal(a1, 1);
}
