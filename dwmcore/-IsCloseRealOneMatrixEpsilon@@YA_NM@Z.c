bool __fastcall IsCloseRealOneMatrixEpsilon(float a1)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 1.0) & _xmm) < 0.000081380211;
}
