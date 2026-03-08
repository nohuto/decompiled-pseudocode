/*
 * XREFs of ?GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z @ 0x1C00EFC00
 * Callers:
 *     VidMmGetNextBuffersContractedSize @ 0x1C001BB20 (VidMmGetNextBuffersContractedSize.c)
 * Callees:
 *     ?NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ @ 0x1C00EFDF4 (-NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00F04E0 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 */

void __fastcall VIDMM_DMA_POOL::GetNextBuffersContractedSize(
        VIDMM_DMA_POOL *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned __int64 v8; // rcx

  if ( (*((_BYTE *)this + 32) & 1) == 0 && (unsigned int)VIDMM_DMA_POOL::NeedToBeTrimmed(this) )
    VIDMM_DMA_POOL::TrimPool(this, 0);
  v8 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 18) = *((_DWORD *)this + 16);
  *((_DWORD *)this + 21) = *((_DWORD *)this + 19);
  *((_QWORD *)this + 7) = v8;
  *a2 = v8;
  *a3 = *((_DWORD *)this + 16);
  *a4 = *((_DWORD *)this + 19);
}
