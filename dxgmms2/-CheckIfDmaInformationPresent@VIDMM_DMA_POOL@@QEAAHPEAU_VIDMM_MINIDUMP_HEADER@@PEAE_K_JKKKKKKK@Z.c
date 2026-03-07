__int64 __fastcall VIDMM_DMA_POOL::CheckIfDmaInformationPresent(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12)
{
  int v12; // r9d

  v12 = *((_DWORD *)a2 + 330);
  if ( !v12 )
    return 0LL;
  while ( a5 != *((_QWORD *)a3 + 1)
       || a6 != *((_DWORD *)a3 + 12)
       || a7 != *((_DWORD *)a3 + 13)
       || a8 != *((_DWORD *)a3 + 14)
       || a9 != *((_DWORD *)a3 + 15)
       || a10 != *((_DWORD *)a3 + 16)
       || a11 != *((_DWORD *)a3 + 17)
       || a12 != *((_DWORD *)a3 + 11) )
  {
    a3 += 24 * *((unsigned int *)a3 + 15)
        + 24 * *((unsigned int *)a3 + 17)
        + *((unsigned int *)a3 + 13)
        + *((unsigned int *)a3 + 11)
        + 72;
    if ( !--v12 )
      return 0LL;
  }
  return 1LL;
}
