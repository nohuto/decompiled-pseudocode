/*
 * XREFs of _lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator() @ 0x1800E58F8
 * Callers:
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18007C830 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 * Callees:
 *     ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x1800E59FC (--A-$span@$$CBUPrimitiveUVDesc@@$0-0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x1800E5A20 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 */

__int64 __fastcall lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // esi
  __int64 v7; // rbx
  float v8; // xmm6_4
  Matrix3x3 *v9; // rax
  float v10; // xmm6_4
  __int64 v11; // rax
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  struct D2D_POINT_2F v14; // [rsp+60h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  v4 = 0;
  if ( *(_QWORD *)a1 )
  {
    v7 = 0LL;
    do
    {
      result = *(unsigned int *)(a1 + 8);
      if ( _bittest((const int *)&result, v4) )
      {
        v9 = (Matrix3x3 *)gsl::span<PrimitiveUVDesc const,-1>::operator[](*(_QWORD *)(a1 + 16), v7);
        Matrix3x3::TransformHomogeneousPoint(v9, (struct D2D_POINT_2F)&v14);
        v10 = *(float *)(gsl::span<PrimitiveUVDesc const,-1>::operator[](*(_QWORD *)(a1 + 16), v7) + 44);
        v11 = gsl::span<PrimitiveUVDesc const,-1>::operator[](*(_QWORD *)(a1 + 16), v7);
        if ( v14.x <= v10 )
          v10 = fmaxf(v14.x, *(float *)(v11 + 36));
        v12 = *(_QWORD *)(a1 + 16);
        *(float *)(a3 + 8 * v7) = v10;
        v8 = *(float *)(gsl::span<PrimitiveUVDesc const,-1>::operator[](v12, v7) + 48);
        result = gsl::span<PrimitiveUVDesc const,-1>::operator[](*(_QWORD *)(a1 + 16), v7);
        if ( v14.y <= v8 )
          v8 = fmaxf(v14.y, *(float *)(result + 40));
      }
      else
      {
        *(_DWORD *)(a3 + 8 * v7) = 0;
        v8 = 0.0;
      }
      ++v4;
      *(float *)(a3 + 8 * v7 + 4) = v8;
      v7 = v4;
    }
    while ( (unsigned __int64)v4 < *(_QWORD *)a1 );
  }
  return result;
}
