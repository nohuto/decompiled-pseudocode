/*
 * XREFs of ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801FA1DC
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180060AB0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x180095C34 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D4790 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 */

char __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        int a1,
        gsl::details *a2,
        int a3,
        float *a4,
        __int64 *a5)
{
  __int64 *v5; // rax
  unsigned __int64 i; // rbx
  __int64 v11; // r10
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // r8d
  __int128 v26; // [rsp+38h] [rbp-41h] BYREF
  __int128 v27; // [rsp+48h] [rbp-31h]
  int v28; // [rsp+58h] [rbp-21h]
  float v29[9]; // [rsp+60h] [rbp-19h] BYREF
  float v30[13]; // [rsp+84h] [rbp+Bh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF

  v5 = (__int64 *)&retaddr;
  for ( i = 0LL; i < *(_QWORD *)a2; ++i )
  {
    v5 = (__int64 *)gsl::span<CDrawListBrush const *,-1>::operator[](a2, i);
    v11 = *v5;
    if ( *v5 && *(_BYTE *)(v11 + 52) )
    {
      v12 = *(float *)(v11 + 8);
      v13 = *(float *)(v11 + 12);
      if ( ((1 << i) & a3) != 0 )
      {
        v29[2] = 0.0;
        v29[5] = 0.0;
        v29[0] = v12;
        v14 = *(float *)(v11 + 16);
        v29[1] = v13;
        v15 = *(float *)(v11 + 20);
        v29[3] = v14;
        v16 = *(float *)(v11 + 24);
        v29[4] = v15;
        v17 = *(float *)(v11 + 28);
        v29[6] = v16;
        v29[7] = v17;
        v29[8] = 1.0;
        v18 = Matrix3x3::operator*(v29, v30, a4);
        v19 = *(_OWORD *)v18;
        v20 = *((_OWORD *)v18 + 1);
        *(float *)&v18 = v18[8];
        v26 = v19;
        v28 = (int)v18;
        v27 = v20;
      }
      else
      {
        LODWORD(v26) = *(_DWORD *)(v11 + 8);
        v21 = *(_DWORD *)(v11 + 16);
        *(_QWORD *)((char *)&v26 + 4) = LODWORD(v13);
        v22 = *(_DWORD *)(v11 + 20);
        HIDWORD(v26) = v21;
        v23 = *(_DWORD *)(v11 + 24);
        *(_QWORD *)&v27 = v22;
        *((_QWORD *)&v27 + 1) = __PAIR64__(*(_DWORD *)(v11 + 28), v23);
        v28 = 1065353216;
      }
      if ( a1 == 1 )
        v24 = 0;
      else
        v24 = *(_DWORD *)(v11 + 48);
      LOBYTE(v5) = CEdgeFlagsMap::AddEdgeFlags(
                     a5,
                     (D2DMatrixHelper *)(v11 + 32),
                     v24,
                     (FLOAT *)&v26,
                     SLODWORD(FLOAT_0_000081380211));
    }
  }
  return (char)v5;
}
