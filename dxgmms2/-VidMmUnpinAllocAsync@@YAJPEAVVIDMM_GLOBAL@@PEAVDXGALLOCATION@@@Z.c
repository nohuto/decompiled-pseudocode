__int64 __fastcall VidMmUnpinAllocAsync(struct VIDMM_GLOBAL *a1, struct DXGALLOCATION *a2)
{
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v5, 0, 0x48uLL);
  LODWORD(v5[4]) = 3;
  v5[5] = a1;
  v5[6] = a2;
  return (unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v5) == 0 ? 0xC0000017 : 0;
}
