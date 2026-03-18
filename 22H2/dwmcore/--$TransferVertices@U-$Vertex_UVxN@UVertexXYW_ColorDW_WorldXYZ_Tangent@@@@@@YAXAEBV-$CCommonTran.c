/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18000625C
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x180072D70 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180006414 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800064D0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18000671C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800B505C (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E8FC4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180205C9C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180205C9C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180205F48 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180205F48.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802063EC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1802063EC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802066C0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1802066C0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180206C68 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180206DC8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180206DC8.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180206F28 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180206F28.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802071D8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802072D4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1802072D4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802073D0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1802073D0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802076C8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802077F0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1802077F0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180207918 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_180207918.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rsi
  _OWORD *v5; // rbp
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  char v11; // r14
  __int64 result; // rax
  char v13; // al
  char v14; // al
  _OWORD v15[4]; // [rsp+20h] [rbp-68h] BYREF
  int v16; // [rsp+60h] [rbp-28h]

  v4 = 0LL;
  v16 = 0;
  v5 = 0LL;
  if ( !a4 )
  {
    v4 = a2;
    v8 = *(_OWORD *)(a2 + 16);
    v15[0] = *(_OWORD *)a2;
    v9 = *(_OWORD *)(a2 + 32);
    v15[1] = v8;
    v10 = *(_OWORD *)(a2 + 48);
    v15[2] = v9;
    v15[3] = v10;
    v16 = *(_DWORD *)(a2 + 64);
    CMILMatrix::Invert((CMILMatrix *)v15);
    CMILMatrix::Transpose((CMILMatrix *)v15);
    v5 = v15;
  }
  v11 = 1;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 || (*(_BYTE *)(a1 + 56) & 0xF) != 0 )
    v11 = 0;
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)a3, a2) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - *(float *)(a3 + 20)) & _xmm) > 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 4) - COERCE_FLOAT(*(_DWORD *)(a3 + 16) ^ _xmm)) & _xmm) > 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(*(float *)(a3 + 16) * *(float *)(a3 + 16)) + (float)(*(float *)a3 * *(float *)a3))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v14 = *(_BYTE *)(a1 + 48);
        if ( v11 )
        {
          if ( v14 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              a1,
              a3,
              v4,
              v5);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              a1,
              a3,
              v4,
              v5);
        }
        else if ( v14 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            a1,
            a3,
            v4,
            v5);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            a1,
            a3,
            v4,
            v5);
        }
      }
      else if ( v11 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          a1,
          a3,
          v4,
          v5);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          a1,
          a3,
          v4,
          v5);
      }
      result = *(unsigned int *)(a1 + 20);
      dword_1803E5B18 += result;
    }
    else
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v13 = *(_BYTE *)(a1 + 48);
        if ( v11 )
        {
          if ( v13 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              a1,
              a3,
              v4,
              v5);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              a1,
              a3,
              v4,
              v5);
        }
        else if ( v13 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            a1,
            a3,
            v4,
            v5);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            a1,
            a3,
            v4,
            v5);
        }
      }
      else if ( v11 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          a1,
          a3,
          v4,
          v5);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          a1,
          a3,
          v4,
          v5);
      }
      result = *(unsigned int *)(a1 + 20);
      dword_1803E5B14 += result;
    }
  }
  else
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( *(_BYTE *)(a1 + 48) )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          a1,
          a3,
          v4,
          v5);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          a1,
          a3,
          v4,
          v5);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        a1,
        a3,
        v4,
        v5);
    }
    result = *(unsigned int *)(a1 + 20);
    dword_1803E5B1C += result;
  }
  return result;
}
