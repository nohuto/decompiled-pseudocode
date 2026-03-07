struct VIDMM_SEGMENT *__fastcall VIDMM_GLOBAL::GetMostPreferredSegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DDDI_SEGMENTPREFERENCE a3,
        bool *a4)
{
  __int64 v4; // r10
  UINT v5; // r8d

  v4 = 0LL;
  if ( a3.0 )
  {
    if ( (*(_BYTE *)&a3.0 & 0x1F) != 0 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 464)
                     + 8LL * ((*(_BYTE *)&a3.0 & 0x1Fu) + *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28) - 1));
      *a4 = *(_BYTE *)(v4 + 80) & 1;
    }
    else
    {
      v5 = (a3.Value >> 6) & 0x1F;
      if ( v5 )
        return *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                        + 8LL * (v5 + *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28) - 1));
    }
  }
  return (struct VIDMM_SEGMENT *)v4;
}
