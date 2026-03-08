/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x1800F2970
 * Callers:
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800BB048 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z @ 0x18003A420 (--0-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BBE64 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800F2A6C (--$_Uninitialized_move@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 *v15; // rdx
  _QWORD *v16; // r8
  __int64 *v17; // rcx
  _QWORD *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
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
  v14 = (_QWORD *)(v13 + 8 * v5);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(v14, *a3);
  v15 = (__int64 *)a1[1];
  v16 = (_QWORD *)v13;
  v17 = (__int64 *)*a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
      v17,
      a2,
      v13);
    v15 = (__int64 *)a1[1];
    v16 = v14 + 1;
    v17 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
    v17,
    v15,
    v16);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
      (__int64 *)*a1,
      (__int64 *)a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  result = v14;
  a1[1] = v13 + 8 * v9;
  a1[2] = v13 + 8 * v3;
  return result;
}
