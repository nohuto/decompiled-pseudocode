/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180236444
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180236A10 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18023655C (--$_Uninitialized_move@PEAV-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathDat.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x180236E18 (-_Change_array@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CPathData>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (_QWORD *)(v13 + 8 * v5);
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = a1[1];
  v17 = (_QWORD *)v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<CPathData> *,std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
      v18,
      a2,
      v13);
    v16 = a1[1];
    v17 = v15 + 1;
    v18 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CPathData> *,std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
    v18,
    v16,
    v17);
  std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array(a1, v14, v9, v3);
  return v15;
}
