/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180238E78
 * Callers:
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18023A07C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180238F98 (--$_Uninitialized_move@PEAV-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@PEAV12.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@2@_K1@Z @ 0x18023ADE0 (-_Change_array@-$vector@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@V-$alloc.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CRegion>>::_Emplace_reallocate<std::unique_ptr<CRegion>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx

  v4 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v13;
  *a3 = 0LL;
  v16 = v13;
  *(_QWORD *)(v13 + 8 * v4) = v14;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<std::unique_ptr<CRegion> *,std::unique_ptr<CRegion> *,std::allocator<std::unique_ptr<CRegion>>>(
      v18,
      a2,
      v13);
    v17 = a1[1];
    v16 = v15 + 8 * (v4 + 1);
    v18 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CRegion> *,std::unique_ptr<CRegion> *,std::allocator<std::unique_ptr<CRegion>>>(
    v18,
    v17,
    v16);
  std::vector<std::unique_ptr<CRegion>>::_Change_array(a1, v15, v8, v11);
  return *a1 + 8 * v4;
}
