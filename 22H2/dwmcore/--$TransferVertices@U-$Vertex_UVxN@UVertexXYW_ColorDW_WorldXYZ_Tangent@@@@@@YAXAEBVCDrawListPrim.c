/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180020714
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800787D0 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180012390 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180015E24 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001897C (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180020A74 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA?AUD2D_MATRIX_3X2_F@@AEBVCMILMatrix@@@Z @ 0x180020AD0 (-GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA-AUD2D_MATRIX_3X2_F@@AEBVCMILMa.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180020B38 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180020B38.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180020E38 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800210F8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800210F8.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18003E07C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800821F0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088808 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4488 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800EF770 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A76E8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801A76E8.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A7C34 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801A7C34.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A809C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801A809C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A81FC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801A81FC.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A84C4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A85C0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801A85C0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A86BC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801A86BC.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A89B4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A8ADC (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801A8ADC.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A8C04 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801A8C04.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        CDrawListPrimitive *this,
        struct CMILMatrix *a2,
        char a3,
        float a4,
        __int64 *a5)
{
  __int64 v5; // rax
  CMILMatrix *v6; // rbx
  unsigned int v7; // r15d
  char v9; // di
  __int64 v12; // r12
  char v13; // r9
  float m11; // xmm3_4
  int v15; // xmm4_4
  float m21; // xmm2_4
  float v17; // xmm5_4
  CMILMatrix *v18; // rax
  __int64 v19; // r10
  CMILMatrix *v20; // rax
  __int64 v21; // r10
  CMILMatrix *v22; // rax
  __int64 v23; // r10
  CMILMatrix *v24; // rax
  __int64 v25; // r10
  __int64 result; // rax
  CMILMatrix *v27; // rax
  __int64 v28; // r10
  CMILMatrix *v29; // rax
  __int64 v30; // r10
  unsigned int *v31; // rax
  unsigned int *v32; // r10
  CMILMatrix *v33; // rax
  __int64 v34; // r10
  CMILMatrix *v35; // r10
  __int64 v36; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D8h]
  __int64 v38; // [rsp+38h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C8h]
  __int64 v40; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  _BYTE v45[80]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v46[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v47; // [rsp+108h] [rbp+0h]
  struct D2D_MATRIX_3X2_F v48; // [rsp+118h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 6);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 4);
  v9 = *((_BYTE *)this + 97);
  v47 = 0;
  v36 = v5;
  v37 = *((_QWORD *)this + 4);
  HIDWORD(v38) = *((_DWORD *)this + 2);
  v39 = *((_QWORD *)this + 5);
  HIDWORD(v40) = *((_DWORD *)this + 3);
  LODWORD(v38) = 8 * v7 + 16;
  v12 = *a5;
  v44 = a5[1];
  LODWORD(v40) = v38;
  v41 = __PAIR64__(LODWORD(a4), v7);
  LOBYTE(v42) = v9;
  v43 = v12;
  if ( !a3 )
  {
    CMILMatrix::SetToInverse((CMILMatrix *)v46, a2);
    CMILMatrix::Transpose((CMILMatrix *)v46);
    v6 = (CMILMatrix *)v46;
  }
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2) )
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform3x2(this, &v48, a2);
    m11 = v48.m11;
    v15 = _xmm;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v48.m11 - v48.m22) & _xmm) <= 0.000081380211
      && (m21 = v48.m21, IsCloseRealMatrixEpsilon(v48.m12, COERCE_FLOAT(LODWORD(v48.m21) ^ _xmm)))
      && IsCloseRealOne((float)(m21 * m21) + (float)(m11 * m11), v17) )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & v15) >= 0.0000011920929 )
      {
        if ( v13 )
        {
          v22 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v22,
              v23,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v22,
              v23,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
        }
        else
        {
          v24 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
          if ( v9 )
            VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v24,
              v25,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
          else
            VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v24,
              v25,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
        }
      }
      else if ( v13 )
      {
        v18 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
        ((void (__fastcall *)(__int64 *, CMILMatrix *, __int64, CMILMatrix *))VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___)(
          &v36,
          v18,
          v19,
          v6);
      }
      else
      {
        v20 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
        ((void (__fastcall *)(__int64 *, CMILMatrix *, __int64, CMILMatrix *))VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___)(
          &v36,
          v20,
          v21,
          v6);
      }
      result = *((unsigned int *)this + 2);
      dword_1803473A4 += result;
    }
    else
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & v15) >= 0.0000011920929 )
      {
        if ( v13 )
        {
          v31 = (unsigned int *)CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v31,
              v32,
              v6);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v31,
              v32,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
        }
        else
        {
          v33 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
          if ( v9 )
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v33,
              v34,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
          else
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              &v36,
              v33,
              v34,
              v6,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
        }
      }
      else if ( v13 )
      {
        v27 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
        ((void (__fastcall *)(__int64 *, CMILMatrix *, __int64, CMILMatrix *))VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___)(
          &v36,
          v27,
          v28,
          v6);
      }
      else
      {
        v29 = CMILMatrix::CMILMatrix((CMILMatrix *)v45, &v48);
        ((void (__fastcall *)(__int64 *, CMILMatrix *, __int64, CMILMatrix *))VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___)(
          &v36,
          v29,
          v30,
          v6);
      }
      result = *((unsigned int *)this + 2);
      dword_1803473A8 += result;
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4((__int64)this, (__int64)v45, (__int64)a2);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v9 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          &v36,
          v45,
          v35,
          v6,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          &v36,
          v45,
          v35,
          v6,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        (__int64)&v36,
        (CMILMatrix *)v45,
        v35);
    }
    result = *((unsigned int *)this + 2);
    dword_1803473AC += result;
  }
  return result;
}
