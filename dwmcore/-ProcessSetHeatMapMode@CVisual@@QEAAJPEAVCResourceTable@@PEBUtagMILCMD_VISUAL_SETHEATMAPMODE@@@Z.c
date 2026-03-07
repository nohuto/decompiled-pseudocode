__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  __int64 v5; // rax
  char v6; // al
  __m128i v7; // xmm0
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)a3 + 6) == 2 )
  {
    if ( (*((_BYTE *)this + 101) & 0x10) == 0 )
    {
      v5 = *((_QWORD *)this + 2);
      v10 = 0;
      ++*(_DWORD *)(v5 + 1232);
      *((_BYTE *)this + 101) |= 0x10u;
      v9 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
      CVisual::SetHeatMapProperties((__int64)this, &v9);
    }
  }
  else if ( (*((_BYTE *)this + 101) & 0x10) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1232LL);
    *((_BYTE *)this + 101) &= ~0x10u;
  }
  v6 = *((_BYTE *)this + 101);
  if ( *((_DWORD *)a3 + 6) == 1 )
  {
    *((_BYTE *)this + 101) = v6 | 8;
    v7 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    v10 = *((_DWORD *)a3 + 7);
    v9 = v7;
    CVisual::SetHeatMapProperties((__int64)this, &v9);
  }
  else
  {
    *((_BYTE *)this + 101) = v6 & 0xF7;
  }
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
