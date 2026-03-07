bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1, __int64 a2)
{
  bool v2; // bl
  char v4; // al
  bool result; // al

  v2 = 0;
  v4 = (char)(*(_BYTE *)(a1 + 64) << 6) >> 6;
  if ( v4 )
    return v4 == 1;
  if ( CMILMatrix::IsTranslate<1>(a1, a2)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 48) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 52) - 0.0) & _xmm) < 0.000081380211 )
  {
    v2 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & _xmm) < 0.000081380211;
  }
  *(_BYTE *)(a1 + 64) &= 0xFCu;
  result = v2;
  *(_BYTE *)(a1 + 64) |= (-1 - 2 * v2) & 3;
  return result;
}
