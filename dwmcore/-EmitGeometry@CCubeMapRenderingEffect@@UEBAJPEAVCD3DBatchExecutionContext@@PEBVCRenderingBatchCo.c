/*
 * XREFs of ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1802B4F40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180202370 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206584 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::EmitGeometry(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  unsigned int v5; // ebx
  struct CDrawListPrimitive *Primitive; // rdi
  __int64 v7; // rsi
  gsl::details *v8; // rcx
  int appended; // eax
  __int64 v10; // rcx
  float v11; // xmm2_4
  int v12; // ecx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  Primitive = CRenderingBatchCommand::GetPrimitive(a3);
  v7 = *((_QWORD *)Primitive + 7);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v14, *((unsigned int *)Primitive + 5));
  v15 = v7;
  if ( v14 == -1 || !v7 && v14 )
  {
    gsl::details::terminate(v8);
    JUMPOUT(0x1802B5040LL);
  }
  if ( v14 )
  {
    appended = CD3DBatchExecutionContext::AppendGeometry(
                 (__int64)a2,
                 *((_DWORD *)Primitive + 2),
                 0,
                 (unsigned int *)&v14,
                 &v16,
                 0LL);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, appended, 0x94u, 0LL);
    }
    else
    {
      v11 = *((float *)a3 + 22);
      v14 = v16;
      v12 = *((_DWORD *)Primitive + 2);
      LODWORD(v15) = (*((_BYTE *)a2 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a2 + 19);
      HIDWORD(v15) = v12;
      TransferVertices2DH_UV2(
        (__int64)Primitive,
        (const struct CRenderingBatchCommand *)((char *)a3 + 16),
        v11,
        (__int64)&v14);
    }
  }
  return v5;
}
