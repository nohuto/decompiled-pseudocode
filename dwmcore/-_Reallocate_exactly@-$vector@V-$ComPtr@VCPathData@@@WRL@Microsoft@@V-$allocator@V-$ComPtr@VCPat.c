/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180236E8C
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180236A10 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18023655C (--$_Uninitialized_move@PEAV-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathDat.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 *v6; // rbx

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CPathData> *,std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
    *a1,
    a1[1],
    v6);
  return std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array((__int64)a1, (__int64)v6, v4, a2);
}
