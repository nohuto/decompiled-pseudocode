/*
 * XREFs of ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1800AB670
 * Callers:
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800AB5B0 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800AB8A0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x18010CE64 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

void __fastcall std::vector<unsigned char>::_Insert_range<unsigned char const *>(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  _BYTE *v4; // rbp
  _BYTE *v5; // rdi
  size_t v9; // rsi
  size_t v10; // r14
  char *v11; // rdi
  __int64 v12; // r14
  char *v13; // r12
  char *v14; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  char *v17; // [rsp+78h] [rbp+10h]
  SIZE_T v18; // [rsp+80h] [rbp+18h]

  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v9 = a4 - a3;
  if ( a4 != a3 )
  {
    if ( v9 > *(_QWORD *)(a1 + 16) - (_QWORD)v5 )
    {
      v12 = v5 - v4;
      if ( v9 > 0x7FFFFFFFFFFFFFFFLL - (v5 - v4) )
        std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
      v18 = std::vector<char>::_Calculate_growth(a1, v12 + v9);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v18);
      v17 = &v13[a2 - v4];
      memmove_0(v17, a3, v9);
      if ( v9 == 1 && a2 == v5 )
      {
        v15 = v5 - v4;
        v16 = v4;
        v14 = v13;
      }
      else
      {
        memmove_0(v13, v4, a2 - v4);
        v14 = &v17[v9];
        v15 = v5 - a2;
        v16 = a2;
      }
      memmove_0(v14, v16, v15);
      std::vector<unsigned char>::_Change_array(a1, v13, v12 + v9, v18);
    }
    else
    {
      v10 = v5 - a2;
      if ( v9 < v5 - a2 )
      {
        memmove_0(*(void **)(a1 + 8), &v5[-v9], a4 - a3);
        *(_QWORD *)(a1 + 8) = &v5[v9];
        memmove_0(&v5[-(v10 - v9)], a2, v10 - v9);
      }
      else
      {
        v11 = &a2[v9];
        memmove_0(&a2[v9], a2, v10);
        *(_QWORD *)(a1 + 8) = &v11[v10];
      }
      memmove_0(a2, a3, v9);
    }
  }
}
