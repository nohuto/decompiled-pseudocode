__int64 __fastcall DxgkSubmitCommandToHwQueue(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkSubmitCommandToHwQueueInternal(a1, 1, a3);
}
