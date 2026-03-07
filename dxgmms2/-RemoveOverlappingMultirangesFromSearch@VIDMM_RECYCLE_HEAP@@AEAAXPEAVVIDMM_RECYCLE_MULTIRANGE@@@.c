void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v5; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v7; // rsi

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    WdLogSingleEntry1(4LL, i);
    if ( *((_DWORD *)a2 + 54) )
    {
      v7 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
      if ( v7 )
      {
        WdLogSingleEntry1(4LL, *((_QWORD *)i + 17));
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v7, a2);
        *((_QWORD *)i + 17) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 1 )
    {
      v5 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 18);
      if ( v5 )
      {
        WdLogSingleEntry1(4LL, *((_QWORD *)i + 18));
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v5, a2);
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 2 )
    {
      v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 19);
      if ( v6 )
      {
        WdLogSingleEntry1(4LL, *((_QWORD *)i + 19));
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v6, a2);
        *((_QWORD *)i + 19) = 0LL;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
}
