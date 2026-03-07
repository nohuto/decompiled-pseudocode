__int64 __fastcall VIDMM_GLOBAL::ReclaimAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  int v5; // r10d
  int v7; // r8d

  v5 = dword_1C007653C;
  if ( dword_1C007653C == -1 )
    v5 = *((_DWORD *)this + 8) >= 0x5022u ? 2 : 0;
  if ( a5 )
  {
    v7 = *((_DWORD *)this + 1764);
    if ( (v7 & 0x10000) != 0 && (*(_DWORD *)(**(_QWORD **)a3 + 76LL) & 0x40) != 0 )
      *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    else
      *a5 = ((unsigned __int8)v7 >> 3) & 1;
  }
  if ( !v5 )
    return 0LL;
  if ( v5 == 2 )
  {
    if ( a2 )
      return VIDMM_GLOBAL::ReclaimOneAllocation(this, a2, a3, a4, a5);
    WdLogSingleEntry0(3LL);
  }
  return 3221225473LL;
}
