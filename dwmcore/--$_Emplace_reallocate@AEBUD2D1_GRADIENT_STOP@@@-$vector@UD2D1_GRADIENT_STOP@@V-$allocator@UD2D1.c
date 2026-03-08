/*
 * XREFs of ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x180249E08
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800B9D68 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800B9EE4 (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x1800B9F14 (-_Change_array@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

char *__fastcall std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(
        __int64 *a1,
        const void *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  __int64 v14; // rsi
  char *v15; // r14
  void *v16; // rcx
  __int64 v17; // r8
  const void *v18; // rdx
  size_t v19; // r8

  v4 = 0xCCCCCCCCCCCCCCCLL;
  v7 = ((__int64)a2 - *a1) / 20;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 2);
  if ( v8 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0xCCCCCCCCCCCCCCCLL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<20>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v15 = &v13[20 * v7];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_DWORD *)v15 + 4) = *(_DWORD *)(a3 + 16);
  v16 = v13;
  v17 = a1[1];
  v18 = (const void *)*a1;
  if ( a2 == (const void *)v17 )
  {
    v19 = v17 - (_QWORD)v18;
  }
  else
  {
    memmove_0(v13, v18, (size_t)a2 - *a1);
    v16 = v15 + 20;
    v19 = a1[1] - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  std::vector<D2D1_GRADIENT_STOP>::_Change_array(a1, v14, v9, v4);
  return v15;
}
