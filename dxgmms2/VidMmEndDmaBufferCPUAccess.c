void __fastcall VidMmEndDmaBufferCPUAccess(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  VIDMM_SEGMENT::Defragment(*(VIDMM_SEGMENT **)(a1 + 136), a1, a3);
}
