/*
 * XREFs of ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@QEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x180269ECC
 * Callers:
 *     ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJXZ @ 0x18026A1E0 (-CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180085FC4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAUFlipPropertyItem@@_K1@Z @ 0x18026A734 (-_Change_array@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAU.c)
 */

char *__fastcall std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rbp
  char *v15; // rsi
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v16 = v13;
  *(_OWORD *)v15 = *a3;
  *((_OWORD *)v15 + 1) = a3[1];
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, a2 - (_BYTE *)*a1);
    v16 = v15 + 32;
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  std::vector<FlipPropertyItem>::_Change_array(a1, v14, v9, v3);
  return v15;
}
