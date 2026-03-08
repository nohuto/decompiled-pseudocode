/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B7DC8
 * Callers:
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x1800B7CA4 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B9F7C (--$_Uninitialized_move@PEAV-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800B9FBC (-_Change_array@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx

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
  v14 = *a3;
  v15 = v13;
  *a3 = 0LL;
  v16 = (_QWORD *)v13;
  v17 = (_QWORD *)(v13 + 8 * v5);
  *v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
      v19,
      a2,
      v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
    v19,
    v18,
    v16);
  std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Change_array(a1, v15, v9, v3);
  return v17;
}
