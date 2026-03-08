/*
 * XREFs of ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800E3AC0
 * Callers:
 *     ??$_Emplace_back_internal@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800E39F4 (--$_Emplace_back_internal@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@-$deque@V-$ComPtr@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  SIZE_T size_of; // rax
  __int64 v7; // r15
  char *v8; // r14
  size_t v9; // rbx
  const void *v10; // rdx
  char *v11; // rbx
  size_t v12; // r8
  char *v13; // rcx
  void *v14; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  size_of = std::_Get_size_of_n<8>(v3);
  v7 = 8 * v5;
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v9 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v8[8 * v5], (const void *)(a1[1] + 8 * v5), v9);
  v10 = (const void *)a1[1];
  v11 = &v8[8 * v5 + v9];
  if ( v5 > v4 )
  {
    memmove_0(v11, v10, 8 * v4);
    memmove_0(v8, (const void *)(8 * v4 + a1[1]), v7 - 8 * v4);
    v13 = &v8[v7 - 8 * v4];
    v12 = 8 * v4;
  }
  else
  {
    memmove_0(v11, v10, 8 * v5);
    memset_0(&v11[v7], 0, 8 * (v4 - v5));
    v12 = 8 * v5;
    v13 = v8;
  }
  memset_0(v13, 0, v12);
  v14 = (void *)a1[1];
  if ( v14 )
    std::_Deallocate<16,0>(v14, 8LL * a1[2]);
  a1[1] = v8;
  a1[2] += v4;
}
