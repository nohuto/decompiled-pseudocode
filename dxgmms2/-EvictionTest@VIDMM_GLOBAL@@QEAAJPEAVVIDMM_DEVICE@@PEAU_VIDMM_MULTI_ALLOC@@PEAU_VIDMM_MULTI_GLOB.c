__int64 __fastcall VIDMM_GLOBAL::EvictionTest(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a4)
{
  struct VIDMM_PAGING_QUEUE *v7; // rdx
  _QWORD v9[12]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, 0x58uLL);
  v7 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 10);
  LODWORD(v9[0]) = 213;
  v9[1] = a2;
  v9[2] = a3;
  return VIDMM_GLOBAL::QueueDeferredCommand(this, v7, (struct _VIDMM_DEFERRED_COMMAND *)v9, 1, 0LL);
}
