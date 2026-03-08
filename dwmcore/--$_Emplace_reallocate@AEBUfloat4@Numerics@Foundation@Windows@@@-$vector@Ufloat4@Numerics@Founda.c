/*
 * XREFs of ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E8D8
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAXQEAUfloat4@Numerics@Foundation@Windows@@_K1@Z @ 0x1801C7B54 (-_Change_array@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Found.c)
 */

char *__fastcall std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  __int64 v14; // rsi
  char *v15; // r14
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v16 = v13;
  *(_OWORD *)v15 = *a3;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, a2 - (_BYTE *)*a1);
    v16 = v15 + 16;
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  std::vector<Windows::Foundation::Numerics::float4>::_Change_array((__int64)a1, v14, v9, v3);
  return v15;
}
