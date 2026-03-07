__int64 __fastcall DxgkCddDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkDestroyPagingQueueInternal(a1, 0, a3);
}
