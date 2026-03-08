/*
 * XREFs of ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059F20
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslateIgnoreZ<1>(__int64 a1)
{
  char v1; // r10
  char v2; // dl
  char v3; // al
  char v4; // al
  bool v5; // r11
  char v6; // r11
  bool result; // al

  v1 = *(_BYTE *)(a1 + 64);
  v2 = 1;
  v3 = (char)(4 * v1) >> 6;
  if ( v3 )
    return v3 == 1;
  if ( v1 >> 6 )
  {
    v6 = v1 >> 6 == 1;
  }
  else
  {
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
    v6 = v5
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211;
    v1 = v1 & 0x3F | ((v6 << 7) - 64);
  }
  if ( !v6
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) >= 0.000081380211 )
  {
    v2 = 0;
  }
  result = v2;
  *(_BYTE *)(a1 + 64) = v1 ^ (v1 ^ (-16 - 32 * v2)) & 0x30;
  return result;
}
