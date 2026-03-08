/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800EFA48
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@@Z @ 0x1800EFA0C (--$emplace_back@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x1800EFB44 (--$_Uninitialized_move@PEAV-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCC.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x1800F3E58 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *result; // rax

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
    std::_Uninitialized_move<std::unique_ptr<CCachedVisualImage::CCachedTarget> *,std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(
      v19,
      a2,
      v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CCachedVisualImage::CCachedTarget> *,std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(
    v19,
    v18,
    v16);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v15;
  result = v17;
  a1[1] = v15 + 8 * v9;
  a1[2] = v15 + 8 * v3;
  return result;
}
