/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18021A1B0
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18021A444 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801BA76C (-_Change_array@-$vector@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rbp
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  _QWORD *v16; // rdx
  char *v17; // r15
  char *v18; // r8
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // r9
  signed __int64 v23; // rdx
  __int64 v24; // rcx

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
  *a3 = 0LL;
  v15 = v13;
  v16 = (_QWORD *)v13;
  v17 = (char *)(v13 + 8 * v5);
  *(_QWORD *)v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  if ( v6 == v18 )
  {
    while ( v19 != v18 )
    {
      v20 = *(_QWORD *)v19;
      *(_QWORD *)v19 = 0LL;
      v19 += 8;
      *v16++ = v20;
    }
  }
  else
  {
    while ( v19 != v6 )
    {
      v21 = *(_QWORD *)v19;
      *(_QWORD *)v19 = 0LL;
      v19 += 8;
      *v16++ = v21;
    }
    v22 = a1[1];
    if ( v6 != v22 )
    {
      v23 = v17 - v6;
      do
      {
        v24 = *(_QWORD *)v6;
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)&v6[v23 + 8] = v24;
        v6 += 8;
      }
      while ( v6 != v22 );
    }
  }
  std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Change_array((__int64)a1, v15, v9, v3);
  return v17;
}
