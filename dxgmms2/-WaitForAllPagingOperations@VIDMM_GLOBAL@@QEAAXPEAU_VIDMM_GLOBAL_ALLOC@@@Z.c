void __fastcall VIDMM_GLOBAL::WaitForAllPagingOperations(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v4; // edx
  const unsigned __int64 *v5; // rsi
  struct _VIDSCH_SYNC_OBJECT **v6; // rbp

  v4 = *((_DWORD *)a2 + 17) & 0x3F;
  v5 = (const unsigned __int64 *)((char *)this + 8 * v4 + 5480);
  v6 = (struct _VIDSCH_SYNC_OBJECT **)((char *)this + 8 * v4);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, 0, 0LL, 0LL, 0, 0);
  VIDMM_GLOBAL::WaitForFences(this, v6 + 749, (const unsigned __int64 *)a2 + 20, 1u, v5);
}
