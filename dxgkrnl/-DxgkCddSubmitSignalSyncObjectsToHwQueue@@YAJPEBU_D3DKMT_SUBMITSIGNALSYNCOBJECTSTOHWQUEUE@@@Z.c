__int64 __fastcall DxgkCddSubmitSignalSyncObjectsToHwQueue(const struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1)
{
  return DxgkSubmitSignalSyncObjectsToHwQueueInternal(a1, 0);
}
