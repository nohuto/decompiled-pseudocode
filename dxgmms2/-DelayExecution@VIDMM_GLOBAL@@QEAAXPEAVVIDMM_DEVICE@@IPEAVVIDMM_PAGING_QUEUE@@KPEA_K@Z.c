void __fastcall VIDMM_GLOBAL::DelayExecution(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct VIDMM_PAGING_QUEUE *v6; // rbx
  _QWORD v8[13]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a4;
  if ( !a4 )
    v6 = (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2 + 10) + 176LL * a3);
  memset(v8, 0, 0x58uLL);
  v8[1] = *((_QWORD *)v6 + 17);
  LODWORD(v8[4]) = a5;
  LODWORD(v8[0]) = 217;
  VIDMM_GLOBAL::QueueDeferredCommand(this, v6, (struct _VIDMM_DEFERRED_COMMAND *)v8, 0, a6);
}
