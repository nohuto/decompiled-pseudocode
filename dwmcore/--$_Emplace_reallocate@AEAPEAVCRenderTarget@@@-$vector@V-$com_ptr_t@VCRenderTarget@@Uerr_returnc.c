/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCRenderTarget@@@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCRenderTarget@@@Z @ 0x1801BA48C
 * Callers:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801BA76C (-_Change_array@-$vector@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<CRenderTarget * &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rbp
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r14
  char *v16; // rbp
  char *v17; // rdx
  char *v18; // rcx
  _QWORD *v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  char *v23; // r9
  signed __int64 v24; // rdx
  __int64 v25; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v6 = a2;
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
  v15 = (_QWORD *)v13;
  v16 = (char *)(v13 + 8 * v5);
  *(_QWORD *)v16 = *a3;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v17 = a1[1];
  v18 = *a1;
  if ( v6 == v17 )
  {
    v19 = v15;
    while ( v18 != v17 )
    {
      v20 = *(_QWORD *)v18;
      *(_QWORD *)v18 = 0LL;
      v18 += 8;
      *v19++ = v20;
    }
  }
  else
  {
    v21 = v15;
    while ( v18 != v6 )
    {
      v22 = *(_QWORD *)v18;
      *(_QWORD *)v18 = 0LL;
      v18 += 8;
      *v21++ = v22;
    }
    v23 = a1[1];
    if ( v6 != v23 )
    {
      v24 = v16 - v6;
      do
      {
        v25 = *(_QWORD *)v6;
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)&v6[v24 + 8] = v25;
        v6 += 8;
      }
      while ( v6 != v23 );
    }
  }
  std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Change_array(a1, v15, v9, v3);
  return v16;
}
