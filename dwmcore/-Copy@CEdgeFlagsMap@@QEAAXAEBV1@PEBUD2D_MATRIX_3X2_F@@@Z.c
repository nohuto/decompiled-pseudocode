/*
 * XREFs of ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FC538
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAAXXZ @ 0x1801F7F40 (-_Destroy@-$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStra.c)
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FDC0C (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CEdgeFlagsMap::Copy(
        CEdgeFlagsMap *this,
        const struct CEdgeFlagsMap *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  FLOAT m12; // xmm1_4
  FLOAT m11; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT m22; // xmm0_4
  FLOAT dy; // xmm0_4
  unsigned int v11; // r8d
  SIZE_T size_of; // rax
  __int64 v13; // rax
  _DWORD v14[10]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy((__int64)this);
  *((_BYTE *)this + 24) = 0;
  if ( a2 )
  {
    if ( *((_BYTE *)a2 + 24) == 1 )
    {
      if ( a3 )
      {
        m12 = a3->m12;
        m11 = a3->m11;
        v14[2] = 0;
        v14[5] = 0;
        *(FLOAT *)&v14[1] = m12;
        v14[3] = LODWORD(a3->m21);
        dx = a3->dx;
        *(FLOAT *)v14 = m11;
        m22 = a3->m22;
        *(FLOAT *)&v14[6] = dx;
        *(FLOAT *)&v14[4] = m22;
        dy = a3->dy;
        v14[8] = (_DWORD)FLOAT_1_0;
        *(FLOAT *)&v14[7] = dy;
      }
      v11 = *((_DWORD *)a2 + 4);
      v15 = *(_OWORD *)a2;
      CEdgeFlagsMap::AddEdgeFlags(
        (__int64 *)this,
        (D2DMatrixHelper *)&v15,
        v11,
        (FLOAT *)((unsigned __int64)v14 & -(__int64)(a3 != 0LL)),
        SLODWORD(FLOAT_0_000081380211));
    }
    else if ( *((_BYTE *)a2 + 24) == 2 )
    {
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy((__int64)this);
      *((_BYTE *)this + 24) = -1;
      *(_QWORD *)this = 0LL;
      *((_QWORD *)this + 1) = 0LL;
      size_of = std::_Get_size_of_n<48>(1uLL);
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *(_QWORD *)v13 = v13;
      *(_QWORD *)(v13 + 8) = v13;
      *(_QWORD *)(v13 + 16) = v13;
      *(_WORD *)(v13 + 24) = 257;
      *(_QWORD *)this = v13;
      *((_BYTE *)this + 24) = 2;
      CConvexPolygonEdgeMap<unsigned int>::Copy(this, a2, a3);
    }
  }
}
