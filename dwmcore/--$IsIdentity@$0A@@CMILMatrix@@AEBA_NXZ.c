char __fastcall CMILMatrix::IsIdentity<0>(__int64 a1)
{
  char v2; // al
  char v3; // cl
  __int64 v4; // r8
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  char v9; // al
  float v10; // xmm0_4
  char v11; // al
  char v12; // cl
  char result; // al

  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
  {
    v2 = *(_BYTE *)(a1 + 65);
    v3 = 1;
    *(_BYTE *)(a1 + 65) = v2 & 0xCF | 0x10;
  }
  else
  {
    v3 = 0;
  }
  if ( ((unsigned __int8)v3 & ((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) == 0.0)) == 0 )
    return 0;
  if ( *(float *)(a1 + 32) != 0.0 )
    return 0;
  if ( *(float *)(a1 + 36) != 0.0 )
    return 0;
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 | 4;
  if ( !CMILMatrix::ProducesUniformZ<0>(a1) )
    return 0;
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v4 + 28) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(v4 + 12) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(v4 + 60) & _xmm)) != v6 )
    return 0;
  v7 = *(float *)(v4 + 4);
  *(_BYTE *)(v4 + 65) = *(_BYTE *)(v4 + 65) & 0xCF | 0x10;
  if ( v7 != v5 )
    return 0;
  if ( *(float *)(v4 + 16) != v5 )
    return 0;
  v8 = *(float *)v4;
  v9 = *(_BYTE *)(v4 + 64) & 0x3F | 0x40;
  *(_BYTE *)(v4 + 64) = v9;
  if ( v8 != v6 )
    return 0;
  if ( *(float *)(v4 + 20) != v6 )
    return 0;
  v10 = *(float *)(v4 + 40);
  v11 = v9 & 0xCF | 0x10;
  *(_BYTE *)(v4 + 64) = v11;
  if ( v10 != v6 || *(float *)(v4 + 48) != v5 || *(float *)(v4 + 52) != v5 || *(float *)(v4 + 56) != v5 )
    return 0;
  v12 = v11;
  result = 1;
  *(_BYTE *)(v4 + 64) = v12 & 0xFC | 1;
  return result;
}
