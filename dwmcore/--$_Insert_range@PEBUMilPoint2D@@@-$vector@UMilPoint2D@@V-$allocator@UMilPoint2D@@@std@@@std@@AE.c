/*
 * XREFs of ??$_Insert_range@PEBUMilPoint2D@@@?$vector@UMilPoint2D@@V?$allocator@UMilPoint2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint2D@@@std@@@std@@@1@PEBUMilPoint2D@@1Uforward_iterator_tag@1@@Z @ 0x1801BC390
 * Callers:
 *     ?SetOrAppendTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUMilPoint2D@@$0?0@gsl@@_N@Z @ 0x1801C5144 (-SetOrAppendTextureCoordinates@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEA.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@UMilPoint2D@@V?$allocator@UMilPoint2D@@@std@@@std@@AEAAXQEAUMilPoint2D@@_K1@Z @ 0x1801C78E4 (-_Change_array@-$vector@UMilPoint2D@@V-$allocator@UMilPoint2D@@@std@@@std@@AEAAXQEAUMilPoint2D@@.c)
 */

void __fastcall std::vector<MilPoint2D>::_Insert_range<MilPoint2D const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        __int64 a4)
{
  _BYTE *v4; // r13
  _BYTE *v5; // rdi
  size_t v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  char *v17; // r14
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  size_t v21; // r8
  __int64 v22; // r14
  unsigned __int64 v23; // rbp
  char *v24; // rdi
  unsigned __int64 v25; // [rsp+20h] [rbp-58h]
  size_t Size; // [rsp+98h] [rbp+20h]

  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = a4 - (_QWORD)a3;
  Size = a4 - (_QWORD)a3;
  v7 = (a4 - (__int64)a3) >> 4;
  if ( v7 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( v7 <= (v10 - (__int64)v5) >> 4 )
    {
      v21 = v5 - a2;
      v22 = 16 * v7;
      v23 = (v5 - a2) >> 4;
      if ( v7 >= v23 )
      {
        v24 = &a2[v22];
        memmove_0(&a2[v22], a2, v21);
        *(_QWORD *)(a1 + 8) = &v24[16 * v23];
      }
      else
      {
        memmove_0(v5, &v5[-v22], 16 * v7);
        *(_QWORD *)(a1 + 8) = &v5[v22];
        memmove_0(&a2[16 * v7], a2, (size_t)&v5[-16LL * v7 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v11 = 0xFFFFFFFFFFFFFFFLL;
      v12 = (v5 - v4) >> 4;
      if ( v7 > 0xFFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + v7;
      v14 = (v10 - (__int64)v4) >> 4;
      v25 = v12 + v7;
      v15 = v14 >> 1;
      if ( v14 <= 0xFFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<16>(v11);
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v17[16 * ((a2 - v4) >> 4)], a3, Size);
      if ( v7 == 1 && a2 == v5 )
      {
        v18 = v5 - v4;
        v19 = v4;
        v20 = v17;
      }
      else
      {
        memmove_0(v17, v4, a2 - v4);
        v18 = v5 - a2;
        v19 = a2;
        v20 = &v17[16 * v7 + 16 * ((a2 - v4) >> 4)];
      }
      memmove_0(v20, v19, v18);
      std::vector<MilPoint2D>::_Change_array(a1, v17, v25, v11);
    }
  }
}
