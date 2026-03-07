char __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, __int64 a2)
{
  char result; // al
  char v4; // al
  char v5; // r11

  if ( (_BYTE)a2 )
    return CMILMatrix::IsAffine<1>(a1, a2);
  v4 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v4 )
    return v4 == 1;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(a1, 0LL)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211 )
  {
    v5 = 1;
  }
  *(_BYTE *)(a1 + 65) &= 0xF3u;
  result = v5;
  *(_BYTE *)(a1 + 65) |= (-4 - 8 * v5) & 0xC;
  return result;
}
