bool __fastcall CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(__int64 a1)
{
  char v1; // r9
  char v2; // dl
  bool result; // al
  char v4; // al
  bool v5; // r10

  v1 = *(_BYTE *)(a1 + 64);
  v2 = 1;
  if ( v1 >> 6 )
    return v1 >> 6 == 1;
  v4 = (char)(4 * *(_BYTE *)(a1 + 65)) >> 6;
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
    *(_BYTE *)(a1 + 65) ^= (*(_BYTE *)(a1 + 65) ^ (-16 - 32 * v5)) & 0x30;
  }
  if ( !v5
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v2 = 0;
  }
  result = v2;
  *(_BYTE *)(a1 + 64) = v1 & 0x3F | ((v2 << 7) - 64);
  return result;
}
