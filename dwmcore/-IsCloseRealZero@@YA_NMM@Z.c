bool __fastcall IsCloseRealZero(float a1, float a2)
{
  return a2 > COERCE_FLOAT(LODWORD(a1) & _xmm);
}
