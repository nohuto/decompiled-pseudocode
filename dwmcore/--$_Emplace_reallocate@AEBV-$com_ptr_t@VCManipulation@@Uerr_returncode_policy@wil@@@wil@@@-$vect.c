/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1802701E0
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180270BF8 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18012CE14 (-_Change_array@-$vector@V-$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801E91F4 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180270A38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v5];
  wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
    v14,
    *a3);
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>(
      v17,
      a2,
      v13);
    v15 = a1[1];
    v16 = v14 + 1;
    v17 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>(
    v17,
    v15,
    v16);
  std::vector<wil::com_ptr_t<CSceneObject,wil::err_returncode_policy>>::_Change_array((__int64)a1, (__int64)v13, v9, v3);
  return v14;
}
