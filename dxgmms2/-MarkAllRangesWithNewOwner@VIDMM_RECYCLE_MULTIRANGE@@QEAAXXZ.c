/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00975D0
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0096738 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0099FC0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C009B840 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(VIDMM_RECYCLE_MULTIRANGE *this)
{
  _QWORD *v1; // rbx
  int v3; // ecx
  __int64 v4; // rcx
  int v5; // ecx

  v1 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 54);
    if ( v3 )
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v1[19] = this;
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v1[18] = this;
      }
    }
    else
    {
      v1[17] = this;
    }
    if ( v1 == *((_QWORD **)this + 9) )
      break;
    v4 = v1[15];
    if ( v4 == v1[9] + 72LL )
      v1 = 0LL;
    else
      v1 = (_QWORD *)(v4 - 120);
  }
}
