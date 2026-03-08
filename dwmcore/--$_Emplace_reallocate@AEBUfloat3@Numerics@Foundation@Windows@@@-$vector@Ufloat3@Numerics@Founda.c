/*
 * XREFs of ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E788
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1800D16CC (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAXQEAUfloat3@Numerics@Foundation@Windows@@_K1@Z @ 0x1801C7ACC (-_Change_array@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics@Found.c)
 */

char *__fastcall std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v4 = 0x1555555555555555LL;
  v7 = (a2 - (_BYTE *)*a1) / 12;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v8 == 0x1555555555555555LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0x1555555555555555LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<12>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[12 * v7];
  *(_QWORD *)v14 = *(_QWORD *)a3;
  *((_DWORD *)v14 + 2) = *(_DWORD *)(a3 + 8);
  v15 = v13;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, a2 - (_BYTE *)*a1);
    v15 = v14 + 12;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<Windows::Foundation::Numerics::float3>::_Change_array((__int64)a1, (__int64)v13, v9, v4);
  return v14;
}
