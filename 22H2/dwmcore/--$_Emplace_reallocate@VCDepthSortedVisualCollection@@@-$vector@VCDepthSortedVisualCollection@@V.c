/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x18019A058
 * Callers:
 *     ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAAEAVCDepthSortedVisualCollection@@$$QEAV2@@Z @ 0x18019A2E0 (--$emplace_back@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V-$alloc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@PEAV1@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAPEAVCDepthSortedVisualCollection@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x18019A228 (--$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@PEAV1@V-$allocator@VCDepthSortedVisualC.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18019A520 (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Emplace_reallocate<CDepthSortedVisualCollection>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx

  v6 = (a2 - *a1) / 56;
  v7 = (a1[1] - *a1) / 56;
  if ( v7 == 0x492492492492492LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 56;
  v10 = v9 >> 1;
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 56 * v11;
  if ( v11 > 0x492492492492492LL )
    v12 = -1LL;
  v13 = 56 * v6;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)(v13 + v14) = 0LL;
  *(_QWORD *)(v13 + v14 + 8) = 0LL;
  *(_QWORD *)(v13 + v14 + 16) = 0LL;
  *(_QWORD *)(v13 + v14) = *(_QWORD *)a3;
  *(_QWORD *)(v13 + v14 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v13 + v14 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v13 + v14 + 24) = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(v13 + v14 + 32) = 0LL;
  *(_QWORD *)(v13 + v14 + 40) = 0LL;
  *(_QWORD *)(v13 + v14 + 48) = 0LL;
  *(_QWORD *)(v13 + v14 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v13 + v14 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(v13 + v14 + 48) = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CDepthSortedVisualCollection *,CDepthSortedVisualCollection *,std::allocator<CDepthSortedVisualCollection>>(
      v16,
      a2);
    v15 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<CDepthSortedVisualCollection *,CDepthSortedVisualCollection *,std::allocator<CDepthSortedVisualCollection>>(
    v16,
    v15);
  std::vector<CDepthSortedVisualCollection>::_Change_array(a1, v14, v8, v11);
  return v13 + *a1;
}
