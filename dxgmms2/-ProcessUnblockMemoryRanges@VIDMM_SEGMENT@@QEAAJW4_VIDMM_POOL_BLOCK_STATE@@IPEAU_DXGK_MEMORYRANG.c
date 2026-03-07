__int64 __fastcall VIDMM_SEGMENT::ProcessUnblockMemoryRanges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v7; // rbx

  v5 = a2;
  if ( (*(_DWORD *)(a1 + 80) & 0x2000) != 0 && (_BYTE)a2 == 7 )
  {
    v7 = a1 + 92;
    if ( *(_DWORD *)(a1 + 92) != -1 )
    {
      VIDMM_CPU_HOST_APERTURE::UnblockRange(
        *(VIDMM_CPU_HOST_APERTURE **)(a1 + 504),
        (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v7);
      *(_DWORD *)v7 = -1;
      *(_DWORD *)(v7 + 4) = -1;
    }
  }
  LOBYTE(a2) = v5;
  return VIDMM_LINEAR_POOL::FreeMemoryBlocks(*(_QWORD *)(a1 + 152), a2, a3, a4);
}
