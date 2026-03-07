__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // r8d
  float v4; // xmm3_4
  int v5; // eax
  bool v6; // cc
  float v7; // xmm0_4
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rdi
  _DWORD *v16; // r11
  float v18; // xmm0_4
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+0h] [rbp-40h] BYREF
  int v23; // [rsp+4h] [rbp-3Ch]
  int v24; // [rsp+8h] [rbp-38h]
  int v25; // [rsp+Ch] [rbp-34h]
  _DWORD v26[8]; // [rsp+10h] [rbp-30h] BYREF

  v3 = (int)this;
  if ( (_DWORD)this != 50529027 && (_DWORD)this )
  {
    v4 = a2[1];
    v26[0] = 0x1000000;
    v26[1] = 0x2000000;
    v26[2] = 1;
    v26[3] = 2;
    v26[4] = 256;
    v26[5] = 512;
    v26[6] = 0x10000;
    v26[7] = 0x20000;
    if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211 || COERCE_FLOAT((_DWORD)a2[2] & _xmm) >= 0.000081380211 )
    {
      v18 = a2[2];
      v19 = 3;
      if ( v18 > 0.0 )
        v19 = 1;
      v22 = v19;
      v20 = 1;
      if ( v18 > 0.0 )
        v20 = 3;
      v24 = v20;
      v21 = 2;
      if ( v4 > 0.0 )
        v21 = 0;
      v23 = v21;
      v10 = 0;
      if ( v4 > 0.0 )
        v10 = 2;
    }
    else
    {
      v5 = 2;
      v6 = *a2 <= 0.0;
      v7 = a2[3];
      if ( *a2 > 0.0 )
        v5 = 0;
      v22 = v5;
      v8 = 0;
      if ( !v6 )
        v8 = 2;
      v24 = v8;
      v9 = 3;
      if ( v7 > 0.0 )
        v9 = 1;
      v23 = v9;
      v10 = 1;
      if ( v7 > 0.0 )
        v10 = 3;
    }
    v25 = v10;
    v11 = &v22;
    LODWORD(this) = 0;
    v12 = 0LL;
    v13 = 4LL;
    do
    {
      v14 = 0LL;
      v15 = 2LL;
      v16 = &v26[2 * *v11];
      do
      {
        if ( (v3 & *v16) != 0 )
          LODWORD(this) = v26[v12 + v14] | (unsigned int)this;
        ++v14;
        ++v16;
        --v15;
      }
      while ( v15 );
      ++v11;
      v12 += 2LL;
      --v13;
    }
    while ( v13 );
  }
  return (unsigned int)this;
}
