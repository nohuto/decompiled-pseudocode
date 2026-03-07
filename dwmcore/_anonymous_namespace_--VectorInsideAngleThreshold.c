bool __fastcall anonymous_namespace_::VectorInsideAngleThreshold(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2)
{
  float v2; // xmm0_4

  v2 = D3DXVector3Angle(a1, a2);
  return COERCE_FLOAT(LODWORD(v2) & _xmm) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 - 3.1415927) & _xmm) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 + 3.1415927) & _xmm) < 0.17453;
}
