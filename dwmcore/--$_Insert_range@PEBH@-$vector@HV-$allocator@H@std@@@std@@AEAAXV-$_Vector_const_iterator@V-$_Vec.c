/*
 * XREFs of ??$_Insert_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@1@PEBH1Uforward_iterator_tag@1@@Z @ 0x1801BBF70
 * Callers:
 *     ?SetOrAppendTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBH$0?0@gsl@@_N@Z @ 0x1801C51A4 (-SetOrAppendTriangleIndices@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801B5680 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801B8C50 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x1801C73BC (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 */

void __fastcall std::vector<int>::_Insert_range<int const *>(_QWORD *a1, _BYTE *a2, const void *a3, __int64 a4)
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
  __int64 v16; // r15
  size_t v17; // r8
  unsigned __int64 v18; // rbp
  char *v19; // rdi
  unsigned __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+88h] [rbp+10h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v4 = (_BYTE *)*a1;
  v5 = (_BYTE *)a1[1];
  v6 = a4 - (_QWORD)a3;
  v8 = (a4 - (__int64)a3) >> 2;
  if ( v8 )
  {
    if ( v8 <= (__int64)(a1[2] - (_QWORD)v5) >> 2 )
    {
      v16 = 4 * v8;
      v17 = v5 - a2;
      v18 = (v5 - a2) >> 2;
      if ( v8 >= v18 )
      {
        v19 = &a2[v16];
        memmove_0(&a2[v16], a2, v17);
        a1[1] = &v19[4 * v18];
      }
      else
      {
        memmove_0(v5, &v5[-v16], 4 * v8);
        a1[1] = &v5[v16];
        memmove_0(&a2[4 * v8], a2, (size_t)&v5[-4LL * v8 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v10 = (v5 - v4) >> 2;
      if ( v8 > 0x3FFFFFFFFFFFFFFFLL - v10 )
        std::_Xlength_error("vector too long");
      v20 = v10 + v8;
      v23 = std::vector<float>::_Calculate_growth(a1, v10 + v8);
      size_of = std::_Get_size_of_n<4>(v23);
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v21 = (a2 - v4) >> 2;
      memmove_0(&v12[4 * v21], a3, v6);
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
        v15 = &v12[4 * v8 + 4 * v21];
      }
      memmove_0(v15, v14, v13);
      std::vector<int>::_Change_array(a1, v12, v20, v23);
    }
  }
}
