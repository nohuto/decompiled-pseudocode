void __fastcall VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        void (*a3)(void *),
        void *a4)
{
  char v4; // r12
  char *v7; // rdi
  char *i; // rbx
  char *j; // rsi

  v4 = (char)a3;
  if ( (*((_BYTE *)this + 40936) & 4) != 0 )
  {
    v7 = (char *)a2 + 272;
    for ( i = (char *)*((_QWORD *)a2 + 34); i != v7; i = *(char **)i )
    {
      for ( j = (char *)*((_QWORD *)i - 2); j != i - 16; j = *(char **)j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, (struct VIDMM_ALLOC *)(j - 40));
    }
    if ( v4 )
    {
      VIDMM_GLOBAL::FlushPagingBuffer(this, 0, a3, a4);
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
    }
  }
}
