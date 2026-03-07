char __fastcall anonymous_namespace_::CanAddThisColumnVectorToMatrix(float *a1, int a2, __int64 a3)
{
  char v6; // bp
  __int64 v7; // r8
  float *v8; // r14

  v6 = 1;
  if ( (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)a3) )
    return 0;
  if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1, v7) )
    return 0;
  v8 = a1 + 3;
  if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 3, a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 6, a3) )
  {
    return 0;
  }
  if ( a2 == 2
    && ((0.0 < 0.000099999997 && COERCE_FLOAT((_DWORD)a1[2] & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - a1[2]) & _xmm) <= 0.0049999999)
     && (0.0 < 0.000099999997 && COERCE_FLOAT((_DWORD)a1[5] & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - a1[5]) & _xmm) <= 0.0049999999)
     && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)(a3 + 8) & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)(a3 + 8)) & _xmm) <= 0.0049999999)
     || (0.0 < 0.000099999997 && COERCE_FLOAT((_DWORD)a1[1] & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - a1[1]) & _xmm) <= 0.0049999999)
     && (0.0 < 0.000099999997 && COERCE_FLOAT((_DWORD)a1[4] & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - a1[4]) & _xmm) <= 0.0049999999)
     && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)(a3 + 4) & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)(a3 + 4)) & _xmm) <= 0.0049999999)
     || (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)a1 & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *a1) & _xmm) <= 0.0049999999)
     && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)v8 & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *v8) & _xmm) <= 0.0049999999)
     && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)a3 & _xmm) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)a3) & _xmm) <= 0.0049999999)) )
  {
    return 0;
  }
  return v6;
}
