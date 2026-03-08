/*
 * XREFs of ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00F0324
 * Callers:
 *     VidMmResizeBuffersInPool @ 0x1C002D440 (VidMmResizeBuffersInPool.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00B0F30 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::ResizeBuffersInPool(
        struct _VIDMM_DMA_BUFFER **this,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v9; // esi
  int v10; // r12d
  struct _VIDMM_DMA_BUFFER *v11; // rsi
  struct _VIDMM_DMA_BUFFER *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx

  if ( a2 < (unsigned __int64)this[6] || a3 < *((_DWORD *)this + 17) || a4 < *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1885LL);
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225485LL;
  }
  else if ( (struct _VIDMM_DMA_BUFFER *)a2 == this[5] && a3 == *((_DWORD *)this + 16) && a4 == *((_DWORD *)this + 19) )
  {
    return 0LL;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = VIDMM_DMA_POOL::AddDmaBufferToPool((VIDMM_DMA_POOL *)this, a2, a3, a4);
      if ( v10 < 0 )
        break;
      if ( ++v9 >= 2 )
      {
        v11 = this[13];
        this[5] = (struct _VIDMM_DMA_BUFFER *)a2;
        *((_DWORD *)this + 16) = a3;
        *((_DWORD *)this + 19) = a4;
        do
        {
          while ( 1 )
          {
            v12 = v11;
            v11 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)v11 + 1);
            if ( *((struct _VIDMM_DMA_BUFFER **)v12 + 5) == this[5]
              && *((_DWORD *)v12 + 12) == *((_DWORD *)this + 16)
              && *((_DWORD *)v12 + 13) == *((_DWORD *)this + 19) )
            {
              break;
            }
            if ( *((_BYTE *)v12 + 24) )
              *((_BYTE *)v12 + 25) = 1;
            else
              VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v12);
          }
        }
        while ( *((_BYTE *)v12 + 25) );
        return (unsigned int)v10;
      }
    }
    if ( v9 )
    {
      v13 = v9;
      do
      {
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, this[12]);
        --v13;
      }
      while ( v13 );
    }
    return (unsigned int)v10;
  }
}
