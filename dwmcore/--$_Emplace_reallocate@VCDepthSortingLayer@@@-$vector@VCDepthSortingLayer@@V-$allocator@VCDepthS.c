/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x1802564C4
 * Callers:
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAA?A_T$$QEAVCDepthSortingLayer@@@Z @ 0x1802568F8 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAPEAVCDepthSortingLayer@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x1802567E8 (--$_Uninitialized_move@PEAVCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x180256D0C (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx

  v4 = 0x666666666666666LL;
  v7 = (a2 - *a1) / 40;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<40>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = a3[2];
  v15 = a3[1];
  v16 = v13;
  v17 = v13 + 40 * v7;
  v18 = *a3;
  a3[2] = 0LL;
  a3[1] = 0LL;
  *a3 = 0LL;
  *(_QWORD *)(v17 + 16) = v14;
  v19 = v13;
  *(_QWORD *)v17 = v18;
  *(_QWORD *)(v17 + 8) = v15;
  *(_DWORD *)(v17 + 24) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v17 + 28) = *((_DWORD *)a3 + 7);
  *(_DWORD *)(v17 + 32) = *((_DWORD *)a3 + 8);
  v20 = a1[1];
  v21 = *a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CDepthSortingLayer *>(v21, a2, v13);
    v20 = a1[1];
    v19 = v17 + 40;
    v21 = a2;
  }
  std::_Uninitialized_move<CDepthSortingLayer *>(v21, v20, v19);
  std::vector<CDepthSortingLayer>::_Change_array(a1, v16, v9, v4);
  return v17;
}
