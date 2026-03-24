/*
 * XREFs of ??$_Uninitialized_move@PEAVCDepthSortingLayer@@PEAV1@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAPEAVCDepthSortingLayer@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x1801FAB3C
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x1801FA7C0 (--$_Emplace_reallocate@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthS.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@0AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x180168EAC (--$_Destroy_range@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@0AEAV.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<CDepthSortingLayer *,CDepthSortingLayer *,std::allocator<CDepthSortingLayer>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = 0LL;
      *(_QWORD *)&v5[v4 - 8] = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *a3 = *(_QWORD *)(v4 - 16);
      a3 += 5;
      *(_QWORD *)&v5[v4 - 8] = *(_QWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)(v4 - 16) = 0LL;
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)&v5[v4 + 8] = *(_DWORD *)(v4 + 8);
      *(_DWORD *)&v5[v4 + 12] = *(_DWORD *)(v4 + 12);
      *(_DWORD *)&v5[v4 + 16] = *(_DWORD *)(v4 + 16);
      v4 += 40LL;
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<CDepthSortingLayer>>((__int64)a3, (__int64)a3);
  return a3;
}
