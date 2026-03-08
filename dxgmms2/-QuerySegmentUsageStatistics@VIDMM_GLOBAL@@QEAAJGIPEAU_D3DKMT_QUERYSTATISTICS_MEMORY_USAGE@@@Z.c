/*
 * XREFs of ?QuerySegmentUsageStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1C00EED3C
 * Callers:
 *     ?VidMmQuerySegmentUsageStatistics@@YAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1C002CE00 (-VidMmQuerySegmentUsageStatistics@@YAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentUsageStatistics(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_MEMORY_USAGE *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = *((_DWORD *)this + 1754);
  v5 = a3;
  v7 = (unsigned __int16)a2;
  if ( (unsigned __int16)a2 >= v4 )
  {
    v8 = v4;
    a2 = (unsigned __int16)a2;
LABEL_3:
    WdLogSingleEntry2(3LL, a2, v8);
    return 3221225485LL;
  }
  v10 = 1616LL * (unsigned __int16)a2;
  v11 = *(_DWORD *)(1616 * v7 + *((_QWORD *)this + 5028) + 32);
  if ( (unsigned int)v5 >= v11 )
  {
    v8 = v11;
    a2 = v5;
    goto LABEL_3;
  }
  _mm_lfence();
  v12 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL
                                            * (unsigned int)(v5 + *(_DWORD *)(v10 + *((_QWORD *)this + 5028) + 28)));
  v13 = *(_QWORD *)(v12 + 224);
  v14 = *(_QWORD *)(v12 + 216);
  *(_QWORD *)a4 = v14;
  *((_QWORD *)a4 + 3) = v13 - v14;
  if ( (*(_DWORD *)(v12 + 80) & 0x1000) != 0 )
    v15 = -1LL;
  else
    v15 = *(_QWORD *)(v12 + 48) - v13;
  *((_QWORD *)a4 + 1) = v15;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  return 0LL;
}
