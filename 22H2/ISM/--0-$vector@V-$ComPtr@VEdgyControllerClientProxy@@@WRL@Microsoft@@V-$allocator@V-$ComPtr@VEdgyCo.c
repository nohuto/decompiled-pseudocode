/*
 * XREFs of ??0?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18004A2BC
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x18017862C (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x1801788D0 (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180012E00 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x180049F18 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

__int64 **__fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *v4; // rsi
  unsigned __int64 v5; // rsi
  size_t size_of; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rdx
  __int64 *i; // rcx
  __int64 v11; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    v5 = v4 - *a2;
    size_of = std::_Get_size_of_n<8>(v5);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    v8 = v7;
    a1[1] = v7;
    a1[2] = &v7[v5];
    v9 = a2[1];
    for ( i = *a2; i != v9; ++i )
    {
      v11 = *i;
      *v8 = *i;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 24));
      ++v8;
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>((__int64)v8, (__int64)v8);
    a1[1] = v8;
  }
  return a1;
}
