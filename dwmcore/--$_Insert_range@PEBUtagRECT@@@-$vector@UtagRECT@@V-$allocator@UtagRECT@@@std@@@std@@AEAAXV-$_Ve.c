/*
 * XREFs of ??$_Insert_range@PEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UtagRECT@@@std@@@std@@@1@PEBUtagRECT@@1Uforward_iterator_tag@1@@Z @ 0x1800A6FE8
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x1800A6F34 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800A7214 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800A7250 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

void __fastcall std::vector<tagRECT>::_Insert_range<tagRECT const *>(__int64 a1, _BYTE *a2, const void *a3, __int64 a4)
{
  _BYTE *v4; // r13
  _BYTE *v5; // rdi
  size_t v6; // r12
  unsigned __int64 v8; // rsi
  __int64 v10; // rcx
  SIZE_T size_of; // rax
  char *v12; // r15
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8
  __int64 v17; // r15
  unsigned __int64 v18; // rbp
  char *v19; // rdi
  unsigned __int64 v20; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+98h] [rbp+20h]

  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = a4 - (_QWORD)a3;
  v8 = (a4 - (__int64)a3) >> 4;
  if ( v8 )
  {
    if ( v8 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 4 )
    {
      v16 = v5 - a2;
      v17 = 16 * v8;
      v18 = (v5 - a2) >> 4;
      if ( v8 < v18 )
      {
        memmove_0(v5, &v5[-v17], 16 * v8);
        *(_QWORD *)(a1 + 8) = &v5[v17];
        memmove_0(&a2[16 * v8], a2, (size_t)&v5[-16LL * v8 - (_QWORD)a2]);
      }
      else
      {
        v19 = &a2[v17];
        memmove_0(&a2[v17], a2, v16);
        *(_QWORD *)(a1 + 8) = &v19[16 * v18];
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v10 = (v5 - v4) >> 4;
      if ( v8 > 0xFFFFFFFFFFFFFFFLL - v10 )
        std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
      v20 = v10 + v8;
      v22 = std::vector<tagRECT>::_Calculate_growth(a1, v10 + v8);
      size_of = std::_Get_size_of_n<16>(v22);
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v12[16 * ((a2 - v4) >> 4)], a3, v6);
      if ( v8 == 1 && a2 == v5 )
      {
        v13 = v5 - v4;
        v14 = v4;
        v15 = v12;
      }
      else
      {
        memmove_0(v12, v4, a2 - v4);
        v13 = v5 - a2;
        v14 = a2;
        v15 = &v12[16 * v8 + 16 * ((a2 - v4) >> 4)];
      }
      memmove_0(v15, v14, v13);
      std::vector<tagRECT>::_Change_array(a1, v12, v20, v22);
    }
  }
}
