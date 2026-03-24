/*
 * XREFs of ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801A6EE4
 * Callers:
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1802688E0 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntr.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000B9EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801A6D5C (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 */

_QWORD *__fastcall TransferVertices2DH_UV2(__int64 a1, CMILMatrix *a2, float a3)
{
  _QWORD *result; // rax
  unsigned int v4; // ebx
  __int64 v5; // r12
  int v8; // r15d
  _DWORD *v9; // rsi
  int v10; // xmm1_4
  int v11; // xmm1_4
  _DWORD *v12; // r11
  int v13; // eax
  __int64 v14; // r11
  char *v15; // rsi
  __int64 v16; // rcx
  _DWORD v17[4]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF

  result = (_QWORD *)*(unsigned int *)(a1 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v8 = 8 * (_DWORD)result + 16;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v17[3] = (_DWORD)FLOAT_1_0;
    do
    {
      v9 = (_DWORD *)(v5 + (int)(v4 * v8));
      v10 = v9[1];
      v17[0] = *v9;
      v17[2] = v9[2];
      v17[1] = v10;
      CMILMatrix::Transform(a2, (const struct MilPoint4F *)v17, (struct MilPoint4F *)v18, 1);
      v11 = v18[1];
      *v12 = v18[0];
      v12[2] = v18[3];
      v12[1] = v11;
      v13 = BlendPremultipliedColorDW(v9[3], a3);
      *(_DWORD *)(v14 + 12) = v13;
      v15 = (char *)v9 - v14;
      result = (_QWORD *)(v14 + 16);
      v16 = 2LL;
      do
      {
        *result = *(_QWORD *)((char *)result + (_QWORD)v15);
        ++result;
        --v16;
      }
      while ( v16 );
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
