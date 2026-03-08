/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801E8F88
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18001E160 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18012CE14 (-_Change_array@-$vector@V-$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801E91F4 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??0?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z @ 0x1801E9274 (--0-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  SIZE_T size_of; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11 + 8 * ((a2 - v3) >> 3);
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
    v12,
    *a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>(
      v15,
      a2,
      v11);
    v13 = a1[1];
    v14 = v12 + 8;
    v15 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>(
    v15,
    v13,
    v14);
  std::vector<wil::com_ptr_t<CSceneObject,wil::err_returncode_policy>>::_Change_array((__int64)a1, v11, v8, v9);
  return v12;
}
