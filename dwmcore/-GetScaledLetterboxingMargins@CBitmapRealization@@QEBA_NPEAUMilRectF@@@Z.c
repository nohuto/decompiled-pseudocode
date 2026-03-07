char __fastcall CBitmapRealization::GetScaledLetterboxingMargins(CBitmapRealization *this, struct MilRectF *a2)
{
  char result; // al
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm9_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // [rsp+28h] [rbp-B0h]
  float v16; // [rsp+30h] [rbp-A8h]
  _BYTE v17[64]; // [rsp+40h] [rbp-98h] BYREF
  int v18; // [rsp+80h] [rbp-58h]
  float v19; // [rsp+E0h] [rbp+8h] BYREF
  float v20; // [rsp+F0h] [rbp+18h] BYREF

  result = 0;
  if ( (*((_DWORD *)this + 58) & 0x8000) != 0 )
  {
    v5 = *((float *)this + 44);
    v6 = *((float *)this + 43);
    v16 = *((float *)this + 47);
    v7 = *((float *)this + 45);
    v15 = *((float *)this + 46);
    v8 = *((float *)this + 42);
    v18 = 0;
    CMILMatrix::Set2DAffineMatrix((CMILMatrix *)v17, v8, v6, v5, v7, v15, v16);
    v9 = *((float *)this + 48);
    *(float *)a2 = v9;
    v10 = *((float *)this + 49);
    *((float *)a2 + 1) = v10;
    v11 = *((float *)this + 50);
    *((float *)a2 + 2) = v11;
    v12 = *((float *)this + 51);
    *((float *)a2 + 3) = v12;
    v19 = 1.0;
    v20 = 1.0;
    CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v17, &v19, &v20);
    v13 = v19;
    if ( COERCE_FLOAT(LODWORD(v19) & _xmm) >= 0.0000011920929 )
    {
      *(float *)a2 = v9 / v19;
      *((float *)a2 + 2) = v11 / v13;
    }
    v14 = v20;
    if ( COERCE_FLOAT(LODWORD(v20) & _xmm) >= 0.0000011920929 )
    {
      *((float *)a2 + 1) = v10 / v20;
      *((float *)a2 + 3) = v12 / v14;
    }
    return 1;
  }
  return result;
}
