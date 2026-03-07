void __fastcall VidMmFlushAsyncOperations(struct VIDMM_GLOBAL *a1)
{
  KeWaitForSingleObject((char *)a1 + 44440, Executive, 0, 0, 0LL);
}
