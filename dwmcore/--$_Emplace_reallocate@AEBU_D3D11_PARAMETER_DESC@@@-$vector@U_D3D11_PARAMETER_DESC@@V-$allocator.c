/*
 * XREFs of ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x180208160
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800293A8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ?_Change_array@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXQEAU_D3D11_PARAMETER_DESC@@_K1@Z @ 0x180026A98 (-_Change_array@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180036EEC (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

char *__fastcall std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(
        __int64 *a1,
        const void *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rbp
  void *v14; // rcx
  char *v15; // rsi
  __int64 v16; // r8
  const void *v17; // rdx
  size_t v18; // r8

  v4 = 0x492492492492492LL;
  v7 = ((__int64)a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[56 * v7];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
  *((_QWORD *)v15 + 6) = *(_QWORD *)(a3 + 48);
  v16 = a1[1];
  v17 = (const void *)*a1;
  if ( a2 == (const void *)v16 )
  {
    v18 = v16 - (_QWORD)v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)a2 - *a1);
    v14 = v15 + 56;
    v18 = a1[1] - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v14, v17, v18);
  std::vector<_D3D11_PARAMETER_DESC>::_Change_array(a1, (__int64)v13, v9, v4);
  return v15;
}
