/*
 * XREFs of ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x180006AEC
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180006A74 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801FE598 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     EncodeTBNFrameToQuaternion @ 0x180006D24 (EncodeTBNFrameToQuaternion.c)
 *     CalculateTBNFrame @ 0x180006FFC (CalculateTBNFrame.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800DFB38 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall CalculateTBNFrameFrom3Vertices(
        struct D2DQuaternion *a1,
        int a2,
        int a3,
        CMILMatrix *a4,
        CMILMatrix *a5)
{
  struct D2D_VECTOR_3F *v7; // rax
  __int64 v8; // xmm0_8
  CMILMatrix *v9; // rcx
  struct D2D_VECTOR_3F *v10; // rax
  __int64 v11; // xmm0_8
  struct D2D_VECTOR_3F *v12; // rax
  float y; // xmm8_4
  float x; // xmm7_4
  float z; // xmm6_4
  __int64 v16; // xmm0_8
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm9_4
  struct D2D_VECTOR_3F v25; // [rsp+38h] [rbp-51h] BYREF
  struct D2D_VECTOR_3F v26; // [rsp+48h] [rbp-41h] BYREF
  struct D2D_VECTOR_3F v27; // [rsp+58h] [rbp-31h] BYREF
  struct D2D_VECTOR_3F v28; // [rsp+68h] [rbp-21h] BYREF

  v26.x = 0.0;
  v26.y = 0.0;
  v26.z = 1.0;
  CalculateTBNFrame(a2, a3, (unsigned int)&v26, (unsigned int)&v28, (__int64)&v27);
  v7 = CMILMatrix::Transform3DVector(a4, &v25, &v28);
  v8 = *(_QWORD *)&v7->x;
  *(FLOAT *)&v7 = v7->z;
  *(_QWORD *)&v28.x = v8;
  LODWORD(v28.z) = (_DWORD)v7;
  v10 = CMILMatrix::Transform3DVector(v9, &v25, &v27);
  v11 = *(_QWORD *)&v10->x;
  *(FLOAT *)&v10 = v10->z;
  *(_QWORD *)&v27.x = v11;
  LODWORD(v27.z) = (_DWORD)v10;
  v12 = CMILMatrix::Transform3DVector(a5, &v25, &v26);
  y = v28.y;
  x = v28.x;
  z = v28.z;
  v16 = *(_QWORD *)&v12->x;
  *(FLOAT *)&v12 = v12->z;
  *(_QWORD *)&v26.x = v16;
  LODWORD(v26.z) = (_DWORD)v12;
  *(float *)&v16 = sqrtf_0((float)((float)(y * y) + (float)(x * x)) + (float)(z * z));
  v28.x = x * (float)(1.0 / *(float *)&v16);
  v17 = v27.x;
  v28.y = y * (float)(1.0 / *(float *)&v16);
  v18 = v27.y;
  v28.z = z * (float)(1.0 / *(float *)&v16);
  v19 = v27.z;
  *(float *)&v16 = sqrtf_0((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  v27.y = v18 * (float)(1.0 / *(float *)&v16);
  v20 = v26.y;
  v27.x = v17 * (float)(1.0 / *(float *)&v16);
  v27.z = v19 * (float)(1.0 / *(float *)&v16);
  v21 = v26.x;
  v22 = v26.z;
  v23 = 1.0 / sqrtf_0((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22));
  v26.x = v23 * v21;
  v26.y = v23 * v20;
  v26.z = v23 * v22;
  EncodeTBNFrameToQuaternion(a1);
  return a1;
}
