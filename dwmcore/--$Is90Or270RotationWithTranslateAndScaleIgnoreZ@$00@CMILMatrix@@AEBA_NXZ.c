bool __fastcall CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(__int64 a1)
{
  char v1; // r9
  char v2; // dl
  char v3; // al
  char v4; // al
  bool v5; // r10

  v1 = *(_BYTE *)(a1 + 65);
  v2 = 1;
  v3 = (char)(v1 << 6) >> 6;
  if ( v3 )
    return v3 == 1;
  v4 = (char)(4 * v1) >> 6;
  if ( v4 )
  {
    v5 = v4 == 1;
  }
  else
  {
    v5 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211;
    v1 ^= (v1 ^ (-16 - 32 * v5)) & 0x30;
  }
  if ( !v5
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v2 = 0;
  }
  *(_BYTE *)(a1 + 65) = v1 ^ (v1 ^ (-1 - 2 * v2)) & 3;
  if ( v2 )
    *(_BYTE *)(a1 + 64) |= 0xF3u;
  return v2;
}
