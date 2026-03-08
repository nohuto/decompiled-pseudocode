/*
 * XREFs of ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801FE9E0
 * Callers:
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1802415C4 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x18005BB80 (PrimitiveStorage--Alloc_16_.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x18007C24C (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@_NW4Enum@ParticleSortMode@@@Z @ 0x1801FEAC8 (-InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_Co.c)
 */

__int64 __fastcall CDrawListPrimitive::CreateInstanced(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        int a5,
        int a6,
        PrimitiveStorage::CInlineStorageBase **a7)
{
  int v7; // ebp
  unsigned int v8; // edi
  __int64 v11; // rcx
  PrimitiveStorage::CInlineStorageBase *v12; // rbx
  int v13; // r8d
  __int128 v14; // xmm1
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+60h] [rbp-18h]

  v7 = a1;
  *(_QWORD *)&v17 = *(unsigned int *)(a1 + 12);
  v8 = 0;
  HIDWORD(v17) = *a3;
  v18 = *a4;
  DWORD2(v17) = 2;
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)&v17);
  v12 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v17);
  if ( v12 )
  {
    v14 = *(_OWORD *)a3;
    v16 = *(_OWORD *)a4;
    v17 = v14;
    CDrawListPrimitive::InitializeInstanced((_DWORD)v12, v7, v13, (unsigned int)&v17, (__int64)&v16);
    *a7 = v12;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x96u, 0LL);
  }
  return v8;
}
