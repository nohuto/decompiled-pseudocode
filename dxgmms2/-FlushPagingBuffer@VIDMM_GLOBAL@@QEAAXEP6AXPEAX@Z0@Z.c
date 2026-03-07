void __fastcall VIDMM_GLOBAL::FlushPagingBuffer(VIDMM_GLOBAL *this, unsigned __int8 a2, void (*a3)(void *), void *a4)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 1754); ++i )
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, i, a2, 0LL, 0LL, 0, 0);
}
