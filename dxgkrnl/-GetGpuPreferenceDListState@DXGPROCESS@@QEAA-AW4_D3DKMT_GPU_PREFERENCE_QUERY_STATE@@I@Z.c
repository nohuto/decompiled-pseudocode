/*
 * XREFs of ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C00559C0
 * Callers:
 *     DxgkGetCachedHybridQueryValue @ 0x1C01D2B50 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01D4DE0 (DxgkCacheHybridQueryValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetGpuPreferenceDListState(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2);
  if ( v2 )
    return *(unsigned int *)(v2 + 104);
  WdLogSingleEntry1(3LL, a2);
  return 0LL;
}
