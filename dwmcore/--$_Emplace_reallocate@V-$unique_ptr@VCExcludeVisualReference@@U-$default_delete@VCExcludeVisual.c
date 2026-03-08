/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180214928
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@@Z @ 0x180214A78 (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x180214A38 (--$_Uninitialized_move@PEAV-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVis.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@2@_K1@Z @ 0x180214DDC (-_Change_array@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisua.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
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
    std::_Uninitialized_move<std::unique_ptr<CExcludeVisualReference> *,std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
      v19,
      a2,
      v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CExcludeVisualReference> *,std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
    v19,
    v18,
    v16);
  std::vector<std::unique_ptr<CExcludeVisualReference>>::_Change_array(a1, v15, v9, v3);
  return v17;
}
