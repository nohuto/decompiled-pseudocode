void __fastcall VIDMM_GLOBAL::xWaitForAllPagingEngines(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        void (*a3)(void *),
        void *a4,
        const unsigned __int64 *a5,
        unsigned int a6)
{
  unsigned int v6; // edi

  v6 = (unsigned int)a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    if ( a6 == -1 )
      VIDMM_GLOBAL::FlushPagingBuffer(this, 0, a3, a4);
    else
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, a6, 0, 0LL, 0LL, 0, 0);
  }
  VIDMM_GLOBAL::WaitForFences(this, a2, (const unsigned __int64 *)a3, v6, a5);
}
