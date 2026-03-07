char __fastcall CDxHandleYUVBitmapRealization::GetTransform(
        CDxHandleYUVBitmapRealization *a1,
        CMILMatrix *a2,
        __int64 a3)
{
  CBitmapRealization *v3; // r15
  float v7; // xmm2_4
  char result; // al
  const struct D2D_SIZE_U *Size; // rax
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  int v11; // [rsp+28h] [rbp-31h]
  int v12; // [rsp+2Ch] [rbp-2Dh]
  _BYTE v13[64]; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+70h] [rbp+17h]
  float v15[12]; // [rsp+80h] [rbp+27h]

  v3 = (CDxHandleYUVBitmapRealization *)((char *)a1 - 456);
  if ( (*((_DWORD *)a1 - 56) & 0x4000) != 0 )
  {
    CMILMatrix::SetToIdentity(a2);
    v14 = 0;
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(v3, (CMILMatrix *)v13, &v10, 0LL);
    v7 = (float)SHIDWORD(v10);
    v15[2] = (float)v11;
    v15[0] = (float)(int)v10;
    v15[3] = (float)v12;
    v15[1] = (float)SHIDWORD(v10);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v10) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.0000011920929 )
    {
      CMILMatrix::Translate(
        a2,
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v10) ^ _xmm),
        COERCE_FLOAT(LODWORD(v7) ^ _xmm));
    }
    if ( !CMILMatrix::IsIdentity((CMILMatrix *)v13) )
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v13);
    result = !CMILMatrix::IsIdentity(a2);
    if ( a3 )
      *(_OWORD *)a3 = *(_OWORD *)v15;
  }
  else
  {
    Size = (const struct D2D_SIZE_U *)CDxHandleYUVBitmapRealization::GetSize(a1, &v10);
    result = CBitmapRealization::CalcRotationTransform(v3, Size, a2);
    if ( a3 )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(float *)(a3 + 8) = (float)*((int *)a1 - 62);
      *(float *)(a3 + 12) = (float)*((int *)a1 - 61);
    }
  }
  return result;
}
